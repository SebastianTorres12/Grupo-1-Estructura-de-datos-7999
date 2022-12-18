/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres, Cristhoper Villamarin, Paola Moncayo, Camilo Orrico, Jeimy Morales, Ariel Guevera
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
#include "Burbuja.h"

/**
 * Dibuja un rectángulo con un número dentro.
 * 
 * @param arr La matriz a ordenar
 * @param n número de elementos en la matriz
 * @param i1 índice del primer elemento a intercambiar
 * @param i2 índice del segundo elemento a intercambiar
 */
void Burbuja::dibujarCuadros(int arr[], int n, int i1, int i2){
	int x1 = 50;
	int x2 = 150;
	int x3 = 100;
	int x4 = 200;
	char vecS[10];

	for (int i = 0; i < n; i++) {
		// Establecemos el color de los cuadros intercambiados
		if (i == i1 || i == i2) {
			setcolor(15);
		}else {
			setcolor(LIGHTBLUE);
		}
		settextstyle(0,HORIZ_DIR,2);
		outtextxy(x1 + 12, x2 + 17, "  ");
		sprintf(vecS, "%d", arr[i]);
		outtextxy(x1 + 12, x2 + 17, vecS);	
		rectangle(x1, x2, x3, x4);
		x1 += 70;
		x3 += 70;
	}
}

/**
 * Es un algoritmo de clasificación de burbujas que dibuja la matriz a medida que la clasifica.
 * 
 * @param arr La matriz a ordenar
 * @param n número de elementos en la matriz
 */
void Burbuja::burbujaGrafico(int arr[], int n){
	int temp;
	bool intercambio = true;
	while (intercambio) {
	intercambio = false;
		for (int i = 1; i < n; i++){
			for (int j = 0; j < n - 1; j++) {	
		  		if (arr[j] > arr[j + 1]) {
		    	// Intercambiamos los valores
		    	temp = arr[j];
		    	arr[j] = arr[j + 1];
		    	arr[j + 1] = temp;
		    	intercambio = true;
		    	dibujarCuadros(arr, n, j, j + 1);
		    	// Cambiamos el color de los cuadros intercambiados
   				delay(1000);
	  			}			
			}	
		}
	}
}
