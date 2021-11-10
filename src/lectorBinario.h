#ifndef ESRITORBINARIO_H 
#define ESCRITORBINARIO_H 

#include <iostream> 
#include <fstream> 

#include "persona.h"

using namespace std; 

class LectorBinario{

    ifstream archivoEntrada; 

    public: 
    LectorBinario(string nombreArchivo); 

    Persona getPersona(int posicion); 

    void cerrar(); 
    
}; 

#endif 
