#include <iostream> 
#include <fstream> 

#include "creadorPersona.h"
#include "escritorBinario.h" 
#include "personaNoExisteException.h"

using namespace std; 

int main(){
    CreadorPersona creador {}; 
    EscritorBinario escritor {"personas.dat"}; 

    creador.leaYEnviePersona("personas.txt", escritor); 

    escritor.cerrar(); 

    return 0;
    
}