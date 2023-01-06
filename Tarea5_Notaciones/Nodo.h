/*************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres, Cristhoper Villamarin, Paola Moncayo, Camilo Orrico, Jeimy Morales, Ariel Guevera
FECHA DE CREACIÓN: 01/01/2022
FECHA DE MODIFICACIÓN: 05/01/2022
Grupo1-Notaciones
GITHUB: Grupo-1-Estructura-de-datos-7999
 *************************/

#pragma once

#include <string>
#include <iostream>
using namespace std;

class Nodo{
	private:
		string valor;
		Nodo *siguiente;
		int index;
	public:
		Nodo(string _valor, Nodo *);
    	string getValor(void);
    	void setValor(string newValor);
    	int getIndex();
    	void setIndex(int);
    	Nodo *getSiguiente(void);
    	void setSiguiente(Nodo *newSiguiente);
		~Nodo();
	};
