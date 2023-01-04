/*************************
UFA - ESPE
AUTORES: Mat�as Padr�n,Sebastian Torres, Cristhopher Villamarin, Paola Moncayo, Camilo Orrico, Jeimy Morales, Ariel Guevara
FECHA DE CREACI�N: 20/12/2022
FECHA DE MODIFICACI�N: 2/01/2023
Grupo1-M�todos de b�squeda 
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
	
