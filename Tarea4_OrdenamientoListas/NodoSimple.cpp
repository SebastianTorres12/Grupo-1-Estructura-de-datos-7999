/*************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres, Cristhoper Villamarin, Paola Moncayo, Camilo Orrico, Jeimy Morales, Ariel Guevera
FECHA DE CREACIÓN: 20/12/2022
FECHA DE MODIFICACIÓN: 20/12/2022
Grupo1-Métodos de búsqueda 
GITHUB: Grupo-1-Estructura-de-datos-7999
 *************************/
#include"NodoSimple.h"


/**
 * NodoDoble::NodoDoble(Empleado *objE, NodoDoble *sig=NULL,NodoDoble *ant=NULL)
 * 
 * @param objE es un puntero a un objeto de tipo Empleado
 * @param sig es el siguiente nodo
 * @param ant puntero al nodo anterior
 */

NodoSimple::NodoSimple(Persona *objPP, NodoSimple *sig)
{
	this->objP=objPP;	
	this->siguiente=sig;
}


NodoSimple::NodoSimple()
{

}



Persona* NodoSimple::getObjetoP(){
	return objP;
}



void NodoSimple::setObjP(Persona *newObjP)
{
	objP = newObjP;
}




NodoSimple *NodoSimple::getSiguiente()
{
   return siguiente;
}

/**
 * *|CURSOR_MARCADOR|*
 * 
 * @param newSiguiente El nuevo nodo que será el siguiente nodo en la lista.
 */
void NodoSimple::setSiguiente(NodoSimple *newSiguiente)
{
   siguiente = newSiguiente;
}



NodoSimple::~NodoSimple(){

}
