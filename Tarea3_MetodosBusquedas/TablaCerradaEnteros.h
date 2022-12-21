/*************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres, Cristhoper Villamarin, Paola Moncayo, Camilo Orrico, Jeimy Morales, Ariel Guevera
FECHA DE CREACIÓN: 20/12/2022
FECHA DE MODIFICACIÓN: 20/12/2022
Grupo1-Métodos de búsqueda 
GITHUB: Grupo-1-Estructura-de-datos-7999
 *************************/
#pragma once 
#include <iostream>
#include <cstring>
#include <cstdlib>
#include "NodoEntero.cpp"
#define NCASILLAS 29

class TablaCerradaEnteros{
    private:
        NodoHash **tabla;
    public:
        TablaCerradaEnteros();
        ~TablaCerradaEnteros();
        void insertar(int valor);
        void eliminar(int valor);
        void imprimir();
        void buscar(int valor);
        int hash(int valor);
        int hash2(int valor);
};
