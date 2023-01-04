/*************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres, Cristhopher Villamarin, Paola Moncayo, Camilo Orrico, Jeimy Morales, Ariel Guevara
FECHA DE CREACIÓN: 20/12/2022
FECHA DE MODIFICACIÓN: 2/01/2023
Grupo1-Métodos de búsqueda 
GITHUB: Grupo-1-Estructura-de-datos-7999
 *************************/

#include <time.h>
#include "Persona.cpp"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>


class NodoCircularDoble{
	
		
	public:
		NodoCircularDoble(Persona * , NodoCircularDoble*,NodoCircularDoble*);
		NodoCircularDoble();	
	    Persona* getObjetoP(void);
    	void setObjP(Persona *newObjP);
    	NodoCircularDoble *getSiguiente();
    	void setSiguiente(NodoCircularDoble *);
    	NodoCircularDoble *getAnterior();
    	void setAnterior(NodoCircularDoble *);
		~NodoCircularDoble();
		friend class ListaCicularDoble;
	public:
		Persona *objP;
		NodoCircularDoble *anterior;
		NodoCircularDoble *sigue;
	};
	
