
#include <graphics.h>
#include <conio.h>
#include <iostream>
#include <string>
#include <stdlib.h>

class Burbuja{
	public:
		/**
		 * @brief La funcion permite dibujar cuadros de acuerdo a la cantidad 
		 * 		   de elementos ingresados 
		 * @param arr 
		 * @param n 
		 * @param i1 
		 * @param i2 
		 */
		void dibujarCuadros(int arr[], int n, int i1, int i2);
		/**
		 * @brief La funcion permite ordenas los elementos ingresados 
		 *        mostrando de un color distinto los numeros comparar y ser ordenados
		 * @param arr 
		 * @param n 
		 */
		void burbujaGrafico(int arr[], int n);		
};