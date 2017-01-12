#ifndef __TABLA_SIMBOLOS_H
#define __TABLA_SIMBOLOS_H

#include <stdio.h>
#include <stdlib.h>

typedef enum {
	MARCA = 0, 
	FUNCION, 
	VARIABLE, 
	PAR_FORMAL
} tEntrada;

typedef enum {
	ENTERO, 
	REAL, 
	CARACTER, 
	BOOLEANO, 
	STRING, 
	MATRIZ, 
	DESC, //DESCONOCIDO O ERRONEO
	NO_ASIG = 0 //NO ASIGNADO (PARA CUANDO AUN NO HEMOS DECLARADO EL TIPO DE LA VARIABLE)
} tDato;

typedef struct {
	tEntrada entrada; //TIPO DE ENTRADA
	char *lexema;
	tDato tipoDato; //TIPO DE DATO
	int nParam; //NUMERO DE PARAMETROS
	
	//DIMENSIONES DE LA MATRIZ
	unsigned int numDim;
	int tamDim1;
	int tamDim2;
} entradaTS;

typedef struct {
	int atrib;
	char *lexema;
	tDato tipo;
} atributos;

#define YYSTYPE atributos
#define MAX_ENTRADAS 500

extern long int TOPE;
extern int subProg;					// Variable que indica el comienzo de una declaracion de un subprograma o funcion


extern entradaTS ts[MAX_ENTRADAS];
extern unsigned char declarVar; 	//0 si estamos declarando 1 si estamos utilizando la variable


//A partir de aqui las que necesitemos
extern tDato globalTipo;			// Variable global para almacenar el tipo en las declaraciones
extern int topeSubprog;				// Sirve para indicar en que indice se encuentra la entrada de subprograma para cuando se inserten las entradas de los parametros
extern int lineaActual;				// Variable que almacena la linea actual por la cual se va analizando
extern int funcionActual;			// Variable que almacena el indice de la entrada de la TS de la funcion que se esta analizando para realizar la comprobacion de tipos a sus parametros
extern int contadorParam;			// Contador que sirve para llevar la cuenta de que parametro estamos analizando
extern int pilaPun[MAX_ENTRADAS];
extern int topeFun;
extern int pilaCont[MAX_ENTRADAS];
extern int topeCont;




/**
 * Ajusta la variable tipoGlobal segun se cambie el tipo en las declaraciones de variables
 */
void ajustaTipo(entradaTS e);

/**
 * Inserta un nuevo identificador en la tabla de simbolos
 */
void tsInsertaIdent(entradaTS elem);

/**
 * Inserta una marca de comienzo de un bloque
 */
void tsInsertaMarca();

/**
 * Inserta una entrada de subprograma en la tabla de simbolos
*/
void tsInsertaSubprog(entradaTS ident, entradaTS tipoRetorno);

/**
 * Inserta una entrada de parametro formal de un subprograma en la tabla de simbolos
 */
void tsInsertaParamFormal(entradaTS e);

/**
 * Indica si el atributo es un array o no
 */
int esArray(entradaTS e);

/**
 * Indica que si siendo arrays los dos entradaTS tienen el mismo tamanyo.
 */
int igualTam(entradaTS e1, entradaTS e2);

/**
 * Comprueba que no se supera el limite de elementos y lo incrementa en 1
*/
void incrementaTope();

/**
 * Decrementa el tope de la pila en 1
*/
void decrementaTope();



//------------  Funciones para las comprobaciones semanticas ------------------------
/**
 * Busca la entrada de tipo Funcion mas proxima desde el tope de la tabla de simbolos
 * y devuelve el indice
 */
int tsBuscarFuncionProxima();

/**
 * Comprobacion semantica de la sentencia de retorno.
 * Comprueba que el tipo de expresion es el mismo que el de la funcion
 * donde se encuentra
 */
void tsCompruebaRetorno(entradaTS expresion, entradaTS* retorno);

/**
 * Busca el identificador en la tabla de simbolos y lo rellena en el atributo de salida
 */
void tsGetIdent(entradaTS identificador, entradaTS* res);

/**
 * Comprobacion semantica de la operacion NOT
 */
void tsOpNot(entradaTS operador, entradaTS o, entradaTS* res);

/**
 * Comprobacion semantica de los operadores unarios + y -
 */
void tsOpSumResUnario(entradaTS operador, entradaTS o, entradaTS* res);

/**
 * Comprobacion semantica de las operaciones * y /
 */
void tsOpMulDiv(entradaTS o1, entradaTS operador, entradaTS o2, entradaTS* res);

/**
 * Comprobacion semantica de las operaciones || y XOR
 */
void tsOpOrXor(entradaTS o1, entradaTS operador, entradaTS o2, entradaTS* res);

/**
 * Comprobacion semantica de la operacion **
 */
void tsOpPot(entradaTS o1, entradaTS operador, entradaTS o2, entradaTS* res);

/**
 * Comprobacion semantica de las operaciones <, >, <= y >=
 */
void tsOpRel(entradaTS o1, entradaTS operador, entradaTS o2, entradaTS* res);

/**
 * Comprobacion semantica de las operaciones == y !=
 */
void tsOpIgual(entradaTS o1, entradaTS operador, entradaTS o2, entradaTS* res);

/**
 * Comprobacion semantica de las operaciones &&
 */
void tsOpAnd(entradaTS o1, entradaTS operador, entradaTS o2, entradaTS* res);

/**
 * Comprobacion semantica de las operaciones binarias + y -
 */
void tsOpSumRes(entradaTS o1, entradaTS operador, entradaTS o2, entradaTS* res);

/**
 * Comprobacion semantica de la llamada a subprograma
 */
void tsLlamadaFuncion(entradaTS identificador, entradaTS* res);

/**
 * Comprobacion semantica de cada parametro en una llamada a una funcion
 */
void tsCompruebaParametro(entradaTS parametro);




//------------  Funciones de manejo de la Tabla de Simbolos  ------------------------
/**
  * Anyade una entrada a la tabla de simbolos 
**/
void tsAddEntrada(tEntrada tipoEntrada, char* nombre,  tDato tipoDato, int Parametros, int numDim, int tamDim1, int tamDim2);

/**
  * Quita todas las entradas hasta que encuentre una entrada especial de marca
**/
void quitarBloqueCompleto();

/**
  * Busca una entrada dado su nombre:
  * Si la encuentra devuelve el indice donde se encuentra la entrada
  * Si no la encuentra devuelve -1
**/
int buscarEntrada (char* nombre/*<--creo que esto no hace falta*/, entradaTS* entrada);




//----------------------  Funciones de Impresion --------------------------------------

/**
 * Imprime como una cadena de caracteres una entrada de la tabla de simbolos dada
 */
void imprimirEntrada(entradaTS* e);

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
void imprimeAtributo(entradaTS e);

#endif