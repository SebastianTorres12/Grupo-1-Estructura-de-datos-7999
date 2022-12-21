/*********
UFA - ESPE
AUTORES: Mat�as Padr�n,Sebastian Torres, Cristhoper Villamarin, Paola Moncayo, Camilo Orrico, Jeimy Morales, Ariel Guevera
FECHA DE CREACI�N: 19/12/2022
FECHA DE MODIFICACI�N: 21/12/2022
Grupo1-Gesti�n banco usando Colas
GITHUB: Grupo-1-Estructura-de-datos-7999
�*********/

#if !defined(__Class_Diagram_1_Interface_Persona_h)
#define __Class_Diagram_1_Interface_Persona_h

class Interface_Persona
{
public:
   virtual float calcularTSalidaTEntrada(int TEntrada, int TSalida)=0;
   virtual float tiempoSalida(int tiempoLlegada, int tiempoEspera, int tiempoServicio)=0;
   virtual float tiempoEntreLlegada(int tiempoLLegadaActual, int tiempoLlegadaAnterior)=0;
   virtual int generarTiempoRandom(int anterior)=0;
   virtual float timpoCajero(int tiempoLlegada, int tiempoSalida)=0;

protected:
private:

};

#endif
