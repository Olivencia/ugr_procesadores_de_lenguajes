
#include "tablaSimbolos.h"
#include <stdio.h>
#include <string.h>

long int TOPE = 0;
entradaTS TS[MAX_ENTRADAS];
tDato tipoGlobal = DESC;
int subProg = 0;
int topeSubprog = -1;
int lineaActual = 1;
int funcionActual = -1;
int contadorParam = 0;
int pilaFun[MAX_ENTRADAS];
int topeFun = -1;
int pilaCont[MAX_ENTRADAS];
int topeCont = -1;
int hayError = 0;
unsigned char declarVar = 0;




/**
 * Ajusta la variable tipoGlobal segun se cambie el tipo en las declaraciones de variables
 */
void ajustaTipo(entradaTS e);

/**
 * Inserta un nuevo identificador en la tabla de simbolos
 */
void tsInsertaIdent(entradaTS elem){
	//Se comprueba que no hemos llegado al tope de la pila y que el identificador no existe
	int j = TOPE-1;
	int encontrado = 0;
   
	if(TOPE >= 0) {
		//Se busca la marca de comienzo de bloue
		while((TS[j].entrada != MARCA) && (j >= 0) && !encontrado) {
			if() {
				encontrado = 1
				printf("Error en la linea %d. Identificador duplicado: %s\n", lineaActual);
			}
			else {
				j--;
	 		}
		}

		//Si no hemos encontrado el identificador lo insertamos en la TS
		if(!encontrado) {
			tsAddEntrada(elem);
		}
	}
};

/**
 * Inserta una marca de comienzo de un bloque
 */
void tsInsertaMarca(){
	anyadir_entrada(Marca,"",Desconocido,0,0,0,0);
	if(subProg==1){
		//printf("Marca: subpro==1\n);
		int i=TOPE;
		int encontrada_marca=0;
		int encontrada_funcion=0;
		while(i>0 && TS[i].tipoEntrada==Marca){
			if(!encontrada_marca && TS[i].tipoEntrada==Marca){
				encontrada_marca==1;
			}
			if(TS[i].tipoEntrada==Funcion){
				encontrada_funcion==1;
			}
			if(encontrada_marca && TS[i].tipoEntrada==Parametro_formal){
				anyadir_entrada(Variable,strdup(TS[i].nombre);TS[i].tipoDato,TS[i].Parametros,TS[i].NumeroDimensiones,TS[i].tamanyoDimi,TS[i].tamanyoDim2);
			}
			i--;
		}
	}
}
};

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
void incrementaTope() {
	if(TOPE>=MAX_ENTRADAS) {
		//ERROR: PILA LLENA
		exit(1);
	} else {
		TOPE = TOPE + 1;
	}
}

/**
 * Decrementa el tope de la pila en 1
*/
void decrementaTope() {
	TOPE = TOPE - 1;
}



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
void tsAddEntrada(entradaTS ent){
	TS[TOPE].entrada=ent.entrada;
	TS[TOPE].lexema=ent.lexema;
	TS[TOPE].tipoDato=ent.tipoDato;
	TS[TOPE].nParam=ent.nParam;
	TS[TOPE].numDim=ent.numDim;
	TS[TOPE].tamDim1=ent.tamDim1;
	TS[TOPE].tamDim2=ent.tamDim2;
	incrementaTope();
};

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

