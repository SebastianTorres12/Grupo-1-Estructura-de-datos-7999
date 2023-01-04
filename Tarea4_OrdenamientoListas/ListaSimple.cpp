/*********
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres, Cristhopher Villamarin, Paola Moncayo, Camilo Orrico, Jeimy Morales, Ariel Guevara
FECHA DE CREACIÓN: 20/12/2022
FECHA DE MODIFICACIÓN: 2/01/2023
Grupo1-Métodos de búsqueda 
GITHUB: Grupo-1-Estructura-de-datos-7999
 *********/
#include "ListaSimple.h"
#include <iostream>

template <typename T> 
ListaSimple<T>::ListaSimple()
{
	this->primerNodo=NULL;
	this->ultimoNodo=NULL;
	this->numNodos=0;
}

template <typename T>
void ListaSimple<T>::setPrimerNodo(NodoSimple *first)
{
	primerNodo= first;
}
 
/**
 * |CURSOR_MARCADOR|
 * 
 * @param now El nodo que se establecerá como el nodo real.
 */
template <typename T>
void ListaSimple<T>::setUltimoNodo(NodoSimple *now)
{
	ultimoNodo = now;
}
  
/**
 * |CURSOR_MARCADOR|
 * 
 * @return El primer nodo de la lista.
 */
template <typename T>
NodoSimple *ListaSimple<T>::getPrimerNodo()
{
	return primerNodo;
}

/**
 * |CURSOR_MARCADOR|
 * 
 * @return El nodo real.
 */
template <typename T>
NodoSimple *ListaSimple<T>::getUltimoNodo()
{
	return ultimoNodo;
}

template <typename T>
void ListaSimple<T>::insertarPorCola(Persona *objP){

    NodoSimple *nuevoNodo = new NodoSimple(objP,NULL);
    
    if (listaVacia()) {
        primerNodo = nuevoNodo;
    } else {
        ultimoNodo->setSiguiente(nuevoNodo);
    }

    ultimoNodo = nuevoNodo;
}

template <typename T>
void ListaSimple<T>::insertarPorCabeza(Persona *objP) {
    NodoSimple *nuevoNodo = new NodoSimple(objP,NULL);

    if (listaVacia()) {
        primerNodo = nuevoNodo;
        ultimoNodo= nuevoNodo;
    } else {
        nuevoNodo->setSiguiente(primerNodo);
        primerNodo = nuevoNodo;
    }
    
}

template <typename T>
void ListaSimple<T>::mostrarPorCabeza() {
    int i=1;
 	NodoSimple *aux=this->primerNodo;
  	while(aux){
  	cout<<"\n\tNodo[ "<<i<<" ]: "<<aux->getObjetoP()->getCedula()<<"  "<<aux->getObjetoP()->getApellido()<<endl;
  	
  	aux=aux->getSiguiente();
  	i++;
  }
}


template <typename T>
int ListaSimple<T>::getNumNodos() {
	return this->numNodos;
}

template <typename T>
bool ListaSimple<T>::getListaVacia()
{
	return (this->primerNodo==NULL);
}

template <typename T>
void ListaSimple<T>::eliminarPorCabeza() {
    if(getListaVacia())
	{
		cout<<"\nNo se puede eliminar elementos de una lista sin objetos."<<endl;
	}
	else
	{
		NodoSimple *nodoAuxiliar = this->primerNodo->getSiguiente();
		
		primerNodo=NULL;
		this->numNodos--;
		setPrimerNodo(nodoAuxiliar);
	}
}
template <typename T>
void ListaSimple<T>::ordenarApellido(){
	NodoSimple *aux=this->primerNodo;
	NodoSimple *nNodo=this->primerNodo;
	Persona *p;
	while(nNodo!=NULL){
		aux=nNodo->getSiguiente();
		while(aux != NULL){
			if(strcmp(nNodo->getObjetoP()->getApellido().c_str() ,aux->getObjetoP()->getApellido().c_str()) > 0){
				p=aux->getObjetoP();
				aux->setObjP(nNodo->getObjetoP());
				nNodo->setObjP(p);
			}
			aux=aux->getSiguiente();
		}
		nNodo=nNodo->getSiguiente();
	}
}
	
template <typename T>
void ListaSimple<T>::ordenarCedula(){
	NodoSimple *aux=this->primerNodo;
	NodoSimple *nNodo=this->primerNodo;
	Persona *p;
	while(nNodo!=NULL){
		aux=nNodo->getSiguiente();
		while(aux != NULL){
			if(strcmp(nNodo->getObjetoP()->getCedula().c_str() ,aux->getObjetoP()->getCedula().c_str()) > 0){
				p=aux->getObjetoP();
				aux->setObjP(nNodo->getObjetoP());
				nNodo->setObjP(p);
			}
			aux=aux->getSiguiente();
		}
		nNodo=nNodo->getSiguiente();
	}
}


