%{


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "semantico.h"

/* 
** La siguiente declaracion permite que ’yyerror’ se pueda invocar desde el
** fuente de lex (prueba.l)
*/
void yyerror(const char* msg);

/* 
** La siguiente variable se usará para conocer el numero de la línea
** que se esta leyendo en cada momento. También es posible usar la variable
** ’yylineno’ que también nos muestra la línea actual. Para ello es necesario
** invocar a flex con la opción ’-l’ (compatibilidad con lex).
*/
int yydebug=1;


%}

%error-verbose

%left OPOR
%left OPAND
%left OPRELACIONAL
%left SUMRES
%left OPBINARIO
%right OPUNARIO

%token ASIGNACION
%token CORIZQ
%token CORDER
%token TIPOBASICO
%token CONSTENTERA 
%token CONSTLOGICA 
%token CONSTREAL 
%token CONSTCARACTER 
%token CONSTCADENA 
%token COMA 
%token PARDER 
%token PARIZQ 
%token PUNTOYCOMA 
%token INICIOBLOQUE 
%token FINBLOQUE 
%token VAR 
%token FINVAR 
%token SI 
%token SINO 
%token MIENTRAS 
%token LEER 
%token ESCRIBIR 
%token DEVOLVER 
%token REPETIR 
%token HASTA 
%token PRINCIPAL 
%token IDENT 

%%

/***********************  PRODUCCIONES  **************************/

programa : PRINCIPAL bloque ;

bloque : INICIOBLOQUE { tsInsertaMarca(); } declar_variables_locales declar_subprogs { declarVar = 2; } sentencias FINBLOQUE { tsVaciarEntradas(); } ;

declar_subprogs : declar_subprogs declar_subprog | ;

declar_subprog : cabecera_subprograma { subProg = 1; } bloque { subProg = 0; } ;

declar_variables_locales : VAR { declarVar = 1; } variables_locales FINVAR { declarVar = 0; } | ;

variables_locales : variables_locales cuerpo_declar_variables
	| cuerpo_declar_variables  ;

cuerpo_declar_variables : TIPOBASICO { asignaTipoGlobal($1); } lista_variables PUNTOYCOMA 
	| error ;

lista_variables : variable COMA lista_variables
	| variable error lista_variables
	| variable ;

variable : IDENT declar_matriz { 
		if(declarVar == 1) { 
			$1.numDim=$2.numDim; $1.tamDim1=$2.tamDim1; $1.tamDim2=$2.tamDim2; tsInsertaIdent($1); 
		} else { 
			if (declarVar == 2) { // Llamada desde expresion, en cuyo caso lo buscamos y despues vemos que esta pasando
				tsGetIdent($1, &$$);
				// Ahora comparamos los datos de la tabla de símbolos con lo que nos encontramos escrito
				if($$.numDim == $2.numDim) { // Si coinciden los tamaños, significa que estamos accediendo a un elemento
					$$.numDim = 0; $$.tamDim1 = 0; $$.tamDim2 = 0; // Por lo tanto hemos reducido la dimensionalidad a 0
				} else { // Si no coinciden, el tamaño dimensional del elemento en la TS siempre debe ser mayor que el encontrado aquí
					if($$.numDim > $2.numDim) { // Se está utilizando
						if($2.numDim == 0) { // Debe ser 0, es lo único que nos sirve pq no vamos a acceder a interdimensionalidades
							$$.numDim = $2.numDim; $$.tamDim1 = $2.tamDim1; $$.tamDim2 = $2.tamDim2; // Mantenemos la dimensionalidad
						} else { // Error
							printf("Error linea %d: Esta accediendose a una dimension intermedia: no permitido.\n",lineaActual); 
						}
					} else { // Error, no puede ocurrir, se está accediendo a más dimensiones de las declaradas
						printf("Error linea %d: Esta accediendose a mas dimensiones de las declaradas.\n",lineaActual); }
				}
			} else {
				tsGetIdent($1, &$$); 
			}  
		}
	} 
	| IDENT { 
		if(declarVar == 1) { $1.numDim=0; $1.tamDim1 = 0; $1.tamDim2 = 0; tsInsertaIdent($1); }
		else { tsGetIdent($1, &$$); }  
	} ;

declar_matriz : CORIZQ CONSTENTERA CORDER {$$.numDim = 1; $$.tamDim1=atoi($2.lexema); $$.tamDim2 = 0; }
	| CORIZQ CONSTENTERA COMA CONSTENTERA CORDER {$$.numDim = 2; $$.tamDim1=atoi($2.lexema); $$.tamDim2=atoi($4.lexema); };

cabecera_subprograma : tipo_retorno IDENT { declarPar = 1; tsInsertaSubprog($2); } PARIZQ lista_parametros PARDER  { tsActualizaNparam($1); numParam = 0; declarPar = 0; };

tipo_retorno : TIPOBASICO declar_matriz {$$.numDim=$2.numDim; $$.tamDim1=$2.tamDim1; $$.tamDim2=$2.tamDim2; }
	| TIPOBASICO {$1.numDim=0;};

lista_parametros : parametro COMA lista_parametros
	| parametro error COMA lista_parametros
	| parametro ;

parametro : TIPOBASICO IDENT declar_matriz {$2.numDim=$3.numDim; $2.tamDim1=$3.tamDim1; $2.tamDim2=$3.tamDim2; numParam++; asignaTipoGlobal($1); tsInsertaParamFormal($2); }
	| TIPOBASICO IDENT { $2.numDim=0; numParam++; asignaTipoGlobal($1); tsInsertaParamFormal($2); } ;

sentencias : sentencia sentencias | ;

sentencia : bloque
	| asignacion PUNTOYCOMA
	| si
	| mientras
	| entrada PUNTOYCOMA
	| salida PUNTOYCOMA
	| devolver PUNTOYCOMA
	| repetir_hasta PUNTOYCOMA ;

asignacion : variable ASIGNACION expresion 
		{ if($1.tipo!=$3.tipo) {  printf("Error asign linea %d: Los tipos de la parte izquierda %d y derecha %d no coinciden.\n",lineaActual, $1.tipo, $3.tipo); }
		if(!igualTam($1,$3))  { imprimeAtributo($1,"izq"); imprimeAtributo($3, "der");printf("Error asign linea %d: La parte izquierda y la parte derecha deben tener el mismo tamanyo.\n",lineaActual); } };

si : SI PARIZQ expresion PARDER sentencia SINO sentencia 
	{ if($3.tipo != BOOLEANO) { printf("Error si linea %d: La expresion no es de tipo logico.\n", lineaActual);}}
	| SI PARIZQ expresion PARDER sentencia
	{ if($3.tipo != BOOLEANO) { printf("Error si linea %d: La expresion no es de tipo logico.\n", lineaActual);}} ;

mientras : MIENTRAS PARIZQ expresion PARDER sentencia
	{ if($3.tipo != BOOLEANO) { printf("Error mientras linea %d: La expresion no es de tipo logico.\n", lineaActual);}} ;

entrada : LEER lista_variables ;

salida : ESCRIBIR lista_expresiones_cad ;

devolver : DEVOLVER expresion ;

repetir_hasta : REPETIR sentencia HASTA PARIZQ expresion PARDER 
		{ if($5.tipo != BOOLEANO) { printf("Error until linea %d: La expresion no es de tipo logico.\n", lineaActual);}} ;

expresion : PARIZQ expresion PARDER { $$.tipo = $2.tipo; $$.numDim = $2.numDim; $$.tamDim1 = $2.tamDim1; $$.tamDim2 = $2.tamDim2; }
	| OPUNARIO expresion {tsOpNot($1, $2, &$$); }
	| SUMRES expresion %prec OPUNARIO {tsOpSumResUnario($1, $2, &$$); }
	| expresion OPBINARIO expresion {tsOpMulDiv($1, $2, $3, &$$); }
	| expresion OPOR expresion {tsOpOrXor($1, $2, $3, &$$); }
	| expresion OPRELACIONAL expresion {tsOpRel($1, $2, $3, &$$); }
	| expresion SUMRES expresion { tsOpSumRes($1, $2, $3, &$$); }
	| expresion OPAND expresion {tsOpAnd($1, $2, $3, &$$); }
	| variable { declarVar = 0; }
	| constante { $$.tipo = $1.tipo; $$.numDim = $1.numDim; $$.tamDim1 = $1.tamDim1; $$.tamDim2 = $1.tamDim2; }
	| llamada_funcion  {$$.tipo = $1.tipo; $$.numDim = $1.numDim; $$.tamDim1 = $1.tamDim1; $$.tamDim2 = $1.tamDim2; funcionActual = -1;}
	| error ;

lista_expresiones : expresion COMA lista_expresiones  { numParam++; tsCompruebaParametro($3, numParam); }
	| expresion  { numParam = 1; tsCompruebaParametro($1, 1); }
	|  ;

lista_expresiones_cad : exp_cad COMA lista_expresiones_cad
	| exp_cad ;

exp_cad : expresion | CONSTCADENA ;

constante : CONSTENTERA { $$.tipo = ENTERO; $$.numDim = 0; $$.tamDim1 = 0; $$.tamDim2 = 0; }
	| constante_matriz { auxiliarAgregados = 1; $$.tipo = $1.tipo; $$.numDim = $1.numDim; $$.tamDim1 = $1.tamDim1; $$.tamDim2 = $1.tamDim2; }
	| CONSTLOGICA { $$.tipo = BOOLEANO; $$.numDim = 0; $$.tamDim1 = 0; $$.tamDim2 = 0; }
	| CONSTREAL { $$.tipo = REAL; $$.numDim = 0; $$.tamDim1 = 0; $$.tamDim2 = 0; }
	| CONSTCARACTER { $$.tipo = CARACTER; $$.numDim = 0; $$.tamDim1 = 0; $$.tamDim2 = 0; } ;

llamada_funcion : IDENT PARIZQ lista_expresiones PARDER { tsLlamadaFuncion($1, &$$); }
	| IDENT PARIZQ PARDER { tsLlamadaFuncion($1, &$$); } ;

constante_matriz : INICIOBLOQUE auxiliar_matriz FINBLOQUE { $$.tipo = $2.tipo; $$.numDim = $2.numDim; $$.tamDim1 = $2.tamDim1; $$.tamDim2 = $2.tamDim2;} ;

auxiliar_matriz : agregado_entero { $$.tipo = ENTERO; }
	| agregado_real { $$.tipo = REAL;}
	| agregado_logico { $$.tipo = BOOLEANO; }
	| agregado_caracter { $$.tipo = CARACTER; } ;

agregado_entero : fila_agregado_entero { $$.numDim = $1.numDim; $$.tamDim1 = $1.tamDim1; $$.tamDim2 = $1.tamDim2;}  ;

fila_agregado_entero :fila_agregado_entero PUNTOYCOMA lista_entera { if ($$.tamDim2 != $3.tamDim1) {
																		printf("Error, numero de filas no equivalente\n");
																	} else {
																		 $$.tamDim2 = $3.tamDim1; $$.tamDim1++; $$.numDim = 2;
																			} }
	| lista_entera { $$.tamDim2 = $1.tamDim1; $$.tamDim1 = 1; $$.numDim = 1;} ;

lista_entera : lista_entera COMA CONSTENTERA { $$.tamDim1++; }
	| CONSTENTERA { $$.tamDim1 = 1; auxiliarAgregados = 1; } ;

agregado_real :  fila_agregado_real { $$.numDim = $1.numDim; $$.tamDim1 = $1.tamDim1; $$.tamDim2 = $1.tamDim2;} ;

fila_agregado_real : fila_agregado_real PUNTOYCOMA lista_real { if ($$.tamDim2 != $3.tamDim1) {
																		printf("Error, numero de filas no equivalente\n");
																	} else {
																		 $$.tamDim2 = $3.tamDim1; $$.tamDim1++; $$.numDim = 2;
																			} }
	| lista_real { $$.tamDim2 = $1.tamDim1; $$.tamDim1 = 1; $$.numDim = 1;};
				
lista_real : lista_real COMA CONSTREAL { $$.tamDim1++; }
	| CONSTREAL { $$.tamDim1 = 1; auxiliarAgregados = 1; } ;

agregado_logico : fila_agregado_logico { $$.numDim = $1.numDim; $$.tamDim1 = $1.tamDim1; $$.tamDim2 = $1.tamDim2;} ;

fila_agregado_logico : fila_agregado_logico PUNTOYCOMA lista_logica { if ($$.tamDim2 != $3.tamDim1) {
																		printf("Error, numero de filas no equivalente\n");
																	} else {
																		 $$.tamDim2 = $3.tamDim1; $$.tamDim1++; $$.numDim = 2;
																			} }
	| lista_logica { $$.tamDim2 = $1.tamDim1; $$.tamDim1 = 1; $$.numDim = 1;};

lista_logica : lista_logica COMA CONSTLOGICA { $$.tamDim1++; }
	| CONSTLOGICA { $$.tamDim1 = 1; auxiliarAgregados = 1; } ;

agregado_caracter : fila_agregado_caracter { $$.numDim = $1.numDim; $$.tamDim1 = $1.tamDim1; $$.tamDim2 = $1.tamDim2;} ;

fila_agregado_caracter : fila_agregado_caracter PUNTOYCOMA lista_caracter { if ($$.tamDim2 != $3.tamDim1) {
																		printf("Error, numero de filas no equivalente\n");
																	} else {
																		 $$.tamDim2 = $3.tamDim1; $$.tamDim1++; $$.numDim = 2;
																			} }
	| lista_caracter { $$.tamDim2 = $1.tamDim1; $$.tamDim1 = 1; $$.numDim = 1;};

lista_caracter : lista_caracter COMA CONSTCARACTER { $$.tamDim1++; }
	| CONSTCARACTER { $$.tamDim1 = 1; auxiliarAgregados = 1; } ;

%%


/** Aqui incluimos el fichero generado por el ’lex’
*** que implementa la función ’yylex’
**/
#ifdef DOSWINDOWS /* Variable de entorno que indica la plataforma */
#include "lexyy.c"
#else
#include "lex.yy.c"
#endif
/** Se debe implementar la función yyerror. En este caso
*** simplemente escribimos el mensaje de error en pantalla
**/
void yyerror(const char* msg)
{
	fprintf(stderr,"[Linea %d]:%s\n", lineaActual, msg);
}
