/*************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres, Cristhoper Villamarin, Paola Moncayo, Camilo Orrico, Jeimy Morales, Ariel Guevera
FECHA DE CREACIÓN: 20/12/2022
FECHA DE MODIFICACIÓN: 20/12/2022
Grupo1-Métodos de búsqueda 
GITHUB: Grupo-1-Estructura-de-datos-7999
 *************************/

#if !defined(__Class_Diagram_1_Persona_h)
#define __Class_Diagram_1_Persona_h

#include <string>
#include <stdlib.h>
#pragma once
class Persona 
{
public:
   Persona(std::string ced,std::string nom,std::string apell);
   ~Persona();
   std::string getCedula(void);
   void setCedula(std::string newCedula);
   std::string getNombre(void);
   void setNombre(std::string newNombre);
   std::string getApellido(void);
   void setApellido(std::string newApellido);
 
protected:
private:
   std::string cedula;
   std::string nombre;
   std::string apellido;   
};

#endif
