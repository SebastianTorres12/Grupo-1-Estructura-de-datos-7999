/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres, Cristhoper Villamarin, Paola Moncayo, Camilo Orrico, Jeimy Morales, Ariel Guevara
FECHA DE CREACIÓN: 17/12/2022
FECHA DE MODIFICACIÓN: 18/12/2022
Grupo1-Ordenamineto Burbuja Modo Gráfico
GITHUB: Grupo-1-Estructura-de-datos-7999
 ***********************************************************************/

#include <graphics.h>
#include <conio.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include "Burbuja.cpp"
#include "ValidacionDatos.cpp"
using namespace std;

int main()
{
Burbuja b;
ValidacionDatos objValidar;
char elementosV[10];
initwindow(1150,500); 
char vecS[10];
int numero=0;
settextstyle(7,HORIZ_DIR,6);
outtextxy(350,1,"Metodo burbuja");
settextstyle(7,HORIZ_DIR,2);
setcolor(15);
do{
	outtextxy(350,270,"     ");
	outtextxy(350,250,"Ingrese la cantidad de numeros:");
	cout<<"\nIngrese la cantidad de elementos del arreglo a ordenar: "<<endl;
	cout<<"Maximo 15 elementos"<<endl;
	cin>>numero;
	sprintf(vecS,"%d",numero);
	outtextxy(350,270,vecS);
	delay(1000);
}while(numero>15);
	outtextxy(390,270," Valido");
int arr[numero];
for (int i = 0; i < numero; i++) {
    arr[i] = 10+rand()%(100-10);
  }

b.dibujarCuadros(arr, numero, -1, -1);
delay(1200);
b.burbujaGrafico(arr, numero);

getch();
closegraph();
return 0;
}
