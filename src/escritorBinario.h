#ifndef ESCRITOR_H
#define ESCRITOR_H 

#include <iostream> 
#include <fstream >
#include "persona.h"

using namespace std; 

class EscritorBinario{

    ofstream archivoSalida; 

    public: 
    EscritorBinario(string nombreArchivoSalida); 

    void agreguePersona(Persona &persona); 
    void cerrar();

}; 

#endif