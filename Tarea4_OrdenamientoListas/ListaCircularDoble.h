/*************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres, Cristhopher Villamarin, Paola Moncayo, Camilo Orrico, Jeimy Morales, Ariel Guevara
FECHA DE CREACIÓN: 20/12/2022
FECHA DE MODIFICACIÓN: 2/01/2023
Grupo1-Métodos de búsqueda 
GITHUB: Grupo-1-Estructura-de-datos-7999
 *************************/

#include "NodoCircularDoble.cpp"

using namespace std;
template <typename T> 
class ListaCircularDoble{
	private:
		NodoCircularDoble *primero;
		NodoCircularDoble *ultimo;
		bool listaVacia(){
			return (this->primero==NULL);
		}
	public:
		ListaCircularDoble();
		void insertarPoCola(T *obj);
		void mostrarLista();
		void buscar();//encontrar primera ocurrencia
		void eliminar();
		void ordenarCedula();
		void ordenarApellido();
		void insertarPoCabeza(T *obj);
		void eliminarCabeza();
		void eliminarCola();
};
