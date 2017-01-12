#ifndef __TABLA_SIMBOLOS_H
#define __TABLA_SIMBOLOS_H

#include <stdio.h>
#include <stdlib.h>

typedef enum {
	MARCA = 0, 
	PROC,
	VARIABLE, 
	PAR_FORMAL, 
	DESC_CTRL,
	FUNCION,
	RANGO
} tEntrada;

typedef enum {
	NO_ASIG = 0, //NO ASIGNADO (PARA CUANDO AUN NO HEMOS DECLARADO EL TIPO DE LA VARIABLE)
	DESC, //DESCONOCIDO O ERRONEO
	ENTERO,
	REAL, 
	BOOLEANO, 
	CARACTER, 
	STRING, 
	MATRIZ
} tDato;

//ES FUERTEMENTE TIPIFICADO
typedef union valor {
	int entero; 
	float real; 
	unsigned char booleano; 
	char caracter;
} tValor;

typedef struct entradaTS {
	char *lexema;
	tEntrada tipoTS; //TIPO DE ENTRADA
	tDato tipoDato; //TIPO DE DATO
	int nParam; //NUMERO DE PARAMETROS FORMALES, SI ES PROC
	tValor valor; //VALOR DEL TOKEN
	
	//DIMENSIONES DE LA MATRIZ
	int numDim;
	int tamDim1;
	int tamDim2;
	
	//LOCALIZACION EN EL CODIGO FUENTE
	
	//NUEVOS CAMPOS
	
	//CAMPOS PARA LA GENERACION DE CODIGO...(NO LO PONEMOS AUN)
} tsEntrada; 

#define YYSTYPE tsEntrada
#define MAX_ENTRADAS 500
extern tsEntrada TS[MAX_ENTRADAS];
extern long int TOPE;
extern tDato globalTipo;		// Variable global para almacenar el tipo en las declaraciones
extern int subProg;					// Variable que indica el comienzo de una declaracion de un subprograma o funcion
extern int topeSubprog;			// Sirve para indicar en que indice se encuentra la entrada de subprograma para cuando se inserten las entradas de los parametros
extern int lineaActual;			// Variable que almacena la linea actual por la cual se va analizando
extern int funcionActual;			// Variable que almacena el indice de la entrada de la TS de la funcion que se esta analizando para realizar la comprobacion de tipos a sus parametros
extern int contadorParam;			// Contador que sirve para llevar la cuenta de que parametro estamos analizando
extern int pilaPun[MAX_ENTRADAS];
extern int topeFun;
extern int pilaCont[MAX_ENTRADAS];
extern int topeCont;
extern unsigned char declarVar; //0 si estamos declarando 1 si estamos utilizando la variable



//------------  Funciones adicionales  ----------------------------------------------
/**
 * Ajusta la variable global_tipo segun se cambie el tipo en las declaraciones de variables
 */
void ajustaTipo(tsEntrada e);

/**
 * Inserta un nuevo identificador en la tabla de simbolos
 */
void TS_InsertaIDENT(tsEntrada e, int numDim, int tamDim1, int tamDim2);

/**
 * Inserta una marca de comienzo de un bloque
 */
void TS_InsertaMARCA();

/**
 * Inserta una entrada de subprograma en la tabla de simbolos
 */
void TS_InsertaSUBPROG(tsEntrada ident, tsEntrada tipoRetorno);

/**
 * Inserta una entrada de parametro formal de un subprograma en la tabla de simbolos
 */
void TS_InsertaPARAMF(tsEntrada e);

/**
 * Indica si el atributo es un array o no
 */
int esArray(tsEntrada e);

/**
 * Indica que si siendo arrays los dos tsEntrada tienen el mismo tamanyo.
 */
int igualTam(tsEntrada e1, tsEntrada e2);

//------------  Funciones para las comprobaciones semanticas ------------------------
/**
 * Busca la entrada de tipo Funcion mas proxima desde el tope de la tabla de simbolos
 * y devuelve el indice
 */
int TS_BuscarFuncionProxima();

/**
 * Comprobacion semantica de la sentencia de retorno.
 * Comprueba que el tipo de expresion es el mismo que el de la funcion
 * donde se encuentra
 */
void TS_CompruebaSENTRETORNO(tsEntrada expresion, tsEntrada* retorno);

/**
 * Busca el identificador en la tabla de simbolos y lo rellena en el atributo de salida
 */
void TS_GetIDENT(tsEntrada identificador, tsEntrada* res);

/**
 * Comprobacion semantica de la operacion NOT
 */
void TS_OPNOT(tsEntrada operador, tsEntrada o, tsEntrada* res);

/**
 * Comprobacion semantica de los operadores unarios + y -
 */
void TS_OPSUMARESunario(tsEntrada operador, tsEntrada o, tsEntrada* res);

/**
 * Comprobacion semantica de las operaciones * y /
 */
void TS_OPMULDIV(tsEntrada o1, tsEntrada operador, tsEntrada o2, tsEntrada* res);

/**
 * Comprobacion semantica de las operaciones || y XOR
 */
void TS_OPOR(tsEntrada o1, tsEntrada operador, tsEntrada o2, tsEntrada* res);

/**
 * Comprobacion semantica de la operacion **
 */
void TS_OPPOT(tsEntrada o1, tsEntrada operador, tsEntrada o2, tsEntrada* res);

/**
 * Comprobacion semantica de las operaciones <, >, <= y >=
 */
void TS_OPREL(tsEntrada o1, tsEntrada operador, tsEntrada o2, tsEntrada* res);

/**
 * Comprobacion semantica de las operaciones == y !=
 */
void TS_OPIGUAL(tsEntrada o1, tsEntrada operador, tsEntrada o2, tsEntrada* res);

/**
 * Comprobacion semantica de las operaciones &&
 */
void TS_OPAND(tsEntrada o1, tsEntrada operador, tsEntrada o2, tsEntrada* res);

/**
 * Comprobacion semantica de las operaciones binarias + y -
 */
void TS_OPSUMRES(tsEntrada o1, tsEntrada operador, tsEntrada o2, tsEntrada* res);

/**
 * Comprobacion semantica de la llamada a subprograma
 */
void TS_LlamadaFuncion(tsEntrada identificador, tsEntrada* res);

/**
 * Comprobacion semantica de cada parametro en una llamada a una funcion
 */
void TS_CompruebaParametro(tsEntrada parametro);


//------------  Funciones de manejo de la Tabla de Simbolos  ------------------------
/**
  * Anyade una entrada a la tabla de simbolos 
**/
void anyadir_entrada(tEntrada tipoEntrada, char* nombre,  tDato tipoDato, int Parametros, int numDim, int tamDim1, int tamDim2);

/**
  * Quita todas las entradas hasta que encuentre una entrada especial de marca
**/
void quitarBloqueCompleto();

/**
  * Busca una entrada dado su nombre:
  * Si la encuentra devuelve el indice donde se encuentra la entrada
  * Si no la encuentra devuelve -1
**/
int buscarEntrada (char* nombre/*<--creo que esto no hace falta*/, tsEntrada* entrada);




//----------------------  Funciones de Impresion --------------------------------------

/**
 * Imprime como una cadena de caracteres una entrada de la tabla de simbolos dada
 */
void imprimirEntrada(tsEntrada* e);

/**
  * Imprime como cadena el tipo de entrada dado
**/
void imprimeTipoEntrada(tEntrada tipo);

/**
  * Imprime como cadena el tipo de dato dado
**/ 
void imprimeTipoDato(tDato tipo);

/**
 * Imprime por pantalla la tabla de simbolos a continuacion del mensaje dado
 */
void imprimeTS(char* mensaje);

/**
 * Imprime por pantalla la informacion asociada al atributo
 */
void imprimeAtributo(tsEntrada e);

#endif
