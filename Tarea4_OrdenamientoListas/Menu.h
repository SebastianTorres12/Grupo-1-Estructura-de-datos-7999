/*************************
UFA - ESPE
AUTORES: Mat�as Padr�n,Sebastian Torres, Cristhopher Villamarin, Paola Moncayo, Camilo Orrico, Jeimy Morales, Ariel Guevara
FECHA DE CREACI�N: 20/12/2022
FECHA DE MODIFICACI�N: 2/01/2023
Grupo1-M�todos de b�squeda 
GITHUB: Grupo-1-Estructura-de-datos-7999
 *************************/

 #include <iostream>
#include <cstdlib>
#include <conio.h>

#include <windows.h>
using namespace std;
class Menu{
	public:
		void menuPrincipal();
		int menu(const char *titulo,const char *opciones[],int n);
		void gotoxy(int x,int y);
		//int validarCedula(char *cedulaC);
		static bool verificarCedula(const string &cedula);
};
