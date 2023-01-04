/*************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres, Cristhoper Villamarin, Paola Moncayo, Camilo Orrico, Jeimy Morales, Ariel Guevera
FECHA DE CREACIÓN: 20/12/2022
FECHA DE MODIFICACIÓN: 20/12/2022
Grupo1-Métodos de búsqueda 
GITHUB: Grupo-1-Estructura-de-datos-7999
 *************************/

#ifndef LISTA_SIMPLE_H
#define LISTA_SIMPLE_H

#include "NodoSimple.cpp"

template <typename T>
class ListaSimple {
	
    NodoSimple *primerNodo;
    NodoSimple *ultimoNodo;
    int numNodos;
     
	 bool listaVacia(){
			return (this->primerNodo==NULL);
		}

    public:
    	ListaSimple();
    	void insertarPorCabeza(Persona *objP);
   		void insertarPorCola(Persona *objP);
    	void eliminarPorCabeza();
    	void eliminarPorCola();
		void mostrarPorCabeza();
		void buscar(Persona *objP);
		bool getListaVacia();
		int getNumNodos();
	    NodoSimple *getPrimerNodo();
		NodoSimple *getUltimoNodo();
		void setPrimerNodo(NodoSimple*);
		void setUltimoNodo(NodoSimple*);
		void ordenarApellido();
		void ordenarCedula();
    
};

#endif
