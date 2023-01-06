/*************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres, Cristhoper Villamarin, Paola Moncayo, Camilo Orrico, Jeimy Morales, Ariel Guevera
FECHA DE CREACIÓN: 01/01/2022
FECHA DE MODIFICACIÓN: 05/01/2022
Grupo1-Notaciones
GITHUB: Grupo-1-Estructura-de-datos-7999
 *************************/

#include"Nodo.h"

Nodo::Nodo(string _valor, Nodo *_siguiente)
{
	this->valor=_valor;	
	this->siguiente=_siguiente;
	this->index=0;
}

string Nodo::getValor(){
	return valor;
}
void Nodo::setValor(string newValor)
{
	valor = newValor;
}
Nodo *Nodo::getSiguiente(void)
{
   return siguiente;
}
void Nodo::setSiguiente(Nodo *newSiguiente)
{
   siguiente = newSiguiente;
}

int Nodo::getIndex()
{
	return index;
}

void Nodo::setIndex(int i)
{
	index=i;
}

Nodo::~Nodo(){

}
