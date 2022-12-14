/*************************
UFA - ESPE
AUTORES: Mat?as Padr?n,Sebastian Torres, Cristhopher Villamarin, Paola Moncayo, Camilo Orrico, Jeimy Morales, Ariel Guevara
FECHA DE CREACI?N: 20/12/2022
FECHA DE MODIFICACI?N: 2/01/2023
Grupo1-M?todos de b?squeda 
GITHUB: Grupo-1-Estructura-de-datos-7999
 *************************/
#include"NodoDoble.h"


/**
 * NodoDoble::NodoDoble(Empleado *objE, NodoDoble *sig=NULL,NodoDoble *ant=NULL)
 * 
 * @param objE es un puntero a un objeto de tipo Empleado
 * @param sig es el siguiente nodo
 * @param ant puntero al nodo anterior
 */

NodoDoble::NodoDoble(Persona *objPP, NodoDoble *sig, NodoDoble *ant)
{
	this->objP=objPP;	
	this->siguiente=sig;
	this->anterior=ant;
}

/**
 * NodoDoble::NodoDoble()
 */

NodoDoble::NodoDoble()
{

}

/**
 * Devuelve el objeto de la clase Empleado.
 * 
 * @return El objeto de la clase Empleado.
 */

Persona* NodoDoble::getObjetoP(){
	return objP;
}

/**
 * Void NodoDoble::setObjEmpleado(Empleado *newObjEmpleado)
 * 
 * @param newObjEmpleado es un puntero a un objeto de tipo Empleado
 */

void NodoDoble::setObjP(Persona *newObjP)
{
	objP = newObjP;
}

/**
 * NodoDoble *NodoDoble::getSiguiente()
 * 
 * @return El siguiente nodo.
 */

NodoDoble *NodoDoble::getSiguiente()
{
   return siguiente;
}

/**
 * *|CURSOR_MARCADOR|*
 * 
 * @param newSiguiente El nuevo nodo que será el siguiente nodo en la lista.
 */
void NodoDoble::setSiguiente(NodoDoble *newSiguiente)
{
   siguiente = newSiguiente;
}

/**
 * NodoDoble *NodoDoble::getAnterior()
 * {
 *    volver anterior;
 * }
 * 
 * @return El valor de la variable anterior.
 */

NodoDoble *NodoDoble::getAnterior()
{
   return anterior;
}

/**
 * *|CURSOR_MARCADOR|*
 * 
 * @param newAnterior El nuevo nodo que se establecerá como el nodo anterior.
 */
 
void NodoDoble::setAnterior(NodoDoble *newAnterior)
{
   anterior = newAnterior;
}

/**
 * NodoDoble::~NodoDoble(){
 * 
 * }
 */
 
NodoDoble::~NodoDoble(){

}
