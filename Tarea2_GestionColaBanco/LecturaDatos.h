/*********
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres, Cristhoper Villamarin, Paola Moncayo, Camilo Orrico, Jeimy Morales, Ariel Guevera
FECHA DE CREACIÓN: 19/12/2022
FECHA DE MODIFICACIÓN: 21/12/2022
Grupo1-Gestión banco usando Colas
GITHUB: Grupo-1-Estructura-de-datos-7999
 *********/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#pragma once
class LecturaDatos{
	public:
	virtual char* lecturaEnteros(char const *msj)  = 0;
	virtual char* lecturaReales(char const *msj) = 0;
	virtual char* lecturaTexto(char const *msj) = 0;
	virtual char* lecturaTextoNumerico(char const *msj) = 0;
};
