#include "semantico.h"

entradaTS TS[MAX_ENTRADAS];
long int TOPE = 0;
int declarVar = 0;
int subProg = 0;



tDato tipoGlobal = DESC;
int topeSubprog = -1;
int lineaActual = 1;
int funcionActual = -1;
int contadorParam = 0;
int pilaFun[MAX_ENTRADAS];
int topeFun = -1;
int pilaCont[MAX_ENTRADAS];
int topeCont = -1;
int hayError = 0;




/**
 * Ajusta la variable tipoGlobal segun se cambie el tipo en las declaraciones de variables
 */
void ajustaTipo(atributos elem);

/**
 * Inserta un nuevo identificador en la tabla de simbolos
 */
void tsInsertaIdent(atributos elem){
	//Se comprueba que no hemos llegado al tope de la pila que el identificador no esta ya 
	//declarado previamente y que estamos declarando variables
	int j = TOPE-1;
	int encontrado = 0;
   
	if(TOPE >= 0 && declarVar == 0) {
		//Se busca la marca de comienzo de bloue
		while((TS[j].entrada != MARCA) && (j >= 0) && !encontrado) {
			if(strcmp(TS[j].lexema, elem.lexema) != 0) {
				j--;
			}
			else {
				encontrado = 1;
				printf("Error en la linea %d. Identificador duplicado: %s\n", lineaActual, elem.lexema);
	 		}
		}

		//Si no hemos encontrado el identificador lo insertamos en la TS
		if(!encontrado) {
			entradaTS nuevaEntrada;
			nuevaEntrada.entrada = VARIABLE;
			nuevaEntrada.lexema = elem.lexema;
			nuevaEntrada.tipoDato = elem.tipo;
			nuevaEntrada.nParam = 0;
			tsAddEntrada(nuevaEntrada);
		}
	}
};

/**
 * Inserta una marca de comienzo de un bloque
 */
void tsInsertaMarca(){
	entradaTS entradaInicioBloque;

	entradaInicioBloque.entrada = MARCA;
	strcpy(entradaInicioBloque.lexema, "");
	entradaInicioBloque.nParam = 0;

	tsAddEntrada(entradaInicioBloque);
	
	//AQUI SE HACE ALGO QUE AUN NO ENTIENDO EN REFERENCIA A LA 
	//DEFINICION DE FUNCIONES QUE HAY QUE REPASAR
	/*
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
	*/
}

/**
 * Inserta una entrada de subprograma en la tabla de simbolos
*/
void tsInsertaSubprog(atributos elem) {
	entradaTS entradaSubProg;

	entradaSubProg.entrada = FUNCION;
	entradaSubProg.lexema = elem.lexema;
	entradaSubProg.nParam = 0;

	tsAddEntrada(entradaSubProg);

}

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
int tsAddEntrada(entradaTS ent) {
	if(TOPE < MAX_ENTRADAS) {
		TS[TOPE].entrada=ent.entrada;
		TS[TOPE].lexema=ent.lexema;
		TS[TOPE].tipoDato=ent.tipoDato;
		TS[TOPE].nParam=ent.nParam;
		TS[TOPE].numDim=ent.numDim;
		TS[TOPE].tamDim1=ent.tamDim1;
		TS[TOPE].tamDim2=ent.tamDim2;
		TOPE = TOPE + 1;
		return 1;
	} else {
		//printf("ERROR PILA LLENA");
		return 0;
	}
};

/**
  * Elimina el elemento TOPE de tabla de simbolos 
**/
int tsDelEntrada() {
	// Si la pila no está vacía. 
	if(TOPE > 0){
		TOPE = TOPE - 1;
		return 1;
	}else{
		//printf("ERROR PILA VACIA");
		return 0;
	}
};

/**
 * Elimina de la tabla de simbolos todas las entradas hasta la ultima marca de inicio de bloque, tambien incluida
 */
void tsVaciarEntradas() {
	tEntrada tipo; 
	
	tipo = TS[TOPE-1].entrada;
	while((tipo != MARCA) && (TOPE > 0)){
		tsDelEntrada();
		tipo = TS[TOPE-1].entrada;
	}
	// Eliminar la marca de inicio.
	if(tipo == MARCA){
		tsDelEntrada();
	} else {
		//printf("ERROR NO SE HA ENCONTRADO FIN DE MARCA AL VACIAR ENTRADAS DE TS");
	}
}

/**
  * Busca un identificador en la TS para comprobar que ha sido declarado
**/
void tsBuscarIdent(char* nombre) {
	if(tsBuscarEntrada(nombre) == -1) {
		printf("Error en la linea %d. Identificador no declarado: %s\n", lineaActual, nombre);
	}
}

/**
  * Busca una entrada dado su nombre:
  * Si la encuentra devuelve el indice donde se encuentra la entrada
  * Si no la encuentra devuelve -1
**/
int tsBuscarEntrada(char* nombre) {
	int i = TOPE-1;
	int encontrado = 0;
	
	while (i > 0 && !encontrado) {
		if(strcmp(nombre, TS[i].lexema) != 0) {
			i--;
		} else {
			encontrado = 1;
		}
	}
	
	if(encontrado) {
		return i;
	} else {
		return -1;
	}
}




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

