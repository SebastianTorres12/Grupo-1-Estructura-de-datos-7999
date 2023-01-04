/*************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres, Cristhoper Villamarin, Paola Moncayo, Camilo Orrico, Jeimy Morales, Ariel Guevera
FECHA DE CREACIÓN: 20/12/2022
FECHA DE MODIFICACIÓN: 20/12/2022
Grupo1-Métodos de búsqueda 
GITHUB: Grupo-1-Estructura-de-datos-7999
 *************************/
 
#include "Persona.h"
#pragma once
Persona::Persona(std::string ced,std::string nom,std::string apell)
{
	this->cedula=ced;
	this->nombre=nom;
	this->apellido=apell;
}


Persona::~Persona()
{
   // TODO : implement
}


std::string Persona::getCedula(void)
{
   return cedula;
}


void Persona::setCedula(std::string newCedula)
{
   cedula = newCedula;
}


std::string Persona::getNombre(void)
{
   return nombre;
}


void Persona::setNombre(std::string newNombre)
{
   nombre = newNombre;
}


std::string Persona::getApellido(void)
{
   return apellido;
}



void Persona::setApellido(std::string newApellido)
{
   apellido = newApellido;
}
