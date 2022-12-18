#include <graphics.h>
#include <conio.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include "Burbuja.cpp"
using namespace std;

int main()
{
Burbuja b;

initwindow(1150,500); 
int numero,nume;
char vecS[10];

settextstyle(7,HORIZ_DIR,6);

outtextxy(350,1,"Metodo burbuja");
settextstyle(7,HORIZ_DIR,2);
setcolor(15);
do{
	outtextxy(350,270,"     ");
	outtextxy(350,250,"Ingrese la cantidad de numeros:");
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

int n = sizeof(arr) / sizeof(arr[0]);

b.dibujarCuadros(arr, n, -1, -1);
delay(1200);
b.burbujaGrafico(arr, n);

getch();
closegraph();
return 0;
}

