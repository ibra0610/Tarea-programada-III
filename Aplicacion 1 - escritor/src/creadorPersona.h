#ifndef CREADORPERSONA_H 
#define CREADORPERSONA_H 

#include "persona.h"
#include "escritorBinario.h"

#include <iostream> 

using namespace std; 

class CreadorPersona{ 
    int id; 
    string nombre; 
    string apellido; 
    string correo; 

    public: 
    CreadorPersona(); 

    void leaYEnviePersona(string nombreArchivo, EscritorBinario &escritor);
    
}; 

#endif