/*************************
UFA - ESPE
AUTORES: Mat?as Padr?n,Sebastian Torres, Cristhopher Villamarin, Paola Moncayo, Camilo Orrico, Jeimy Morales, Ariel Guevara
FECHA DE CREACI?N: 20/12/2022
FECHA DE MODIFICACI?N: 2/01/2023
Grupo1-M?todos de b?squeda 
GITHUB: Grupo-1-Estructura-de-datos-7999
 *************************/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "ValidacionDatos.cpp"
#include "Persona.cpp"
#pragma once
using namespace std;
class NodoDoble{
	private:
		Persona *objP;
		NodoDoble *siguiente;
		NodoDoble *anterior;
	public:
		NodoDoble(Persona * , NodoDoble*,NodoDoble*);
		NodoDoble();	
	    Persona* getObjetoP(void);
    	void setObjP(Persona *newObjP);
    	NodoDoble *getSiguiente();
    	void setSiguiente(NodoDoble *);
    	NodoDoble *getAnterior();
    	void setAnterior(NodoDoble *);
		~NodoDoble();
	};
