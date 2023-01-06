/*********
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres, Cristhoper Villamarin, Paola Moncayo, Camilo Orrico, Jeimy Morales, Ariel Guevera
FECHA DE CREACIÓN: 01/01/2022
FECHA DE MODIFICACIÓN: 05/01/2022
Grupo1-Notaciones
GITHUB: Grupo-1-Estructura-de-datos-7999
 *********/

#pragma once
#include "Nodo.cpp"
#include <iostream>
#include <string>
using namespace std;
class Pila{
	private:
		Nodo *primero;
		Nodo *actual;
		bool ListaVacia();		
	public:
		//métodos de los atributos
		Pila();
		void setPrimero(Nodo *);
		void setActual(Nodo *);
		Nodo *getPrimero();
		Nodo *getActual();
		bool getPilaVacia();
		//métodos de orden de la lista
		void push(string);
		void pop();
		void mostrar();
		void buscar(string);
		int contar();
		//void buscar(int);
};
