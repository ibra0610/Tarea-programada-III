#ifndef UNIT_TEST
#include <iostream> 
#include <fstream> 

#include "creadorPersona.h"
#include "escritorBinario.h" 

#include "./excepciones/noSeAbreArchivoException.h"

using namespace std; 

int main(){

    try{
    CreadorPersona creador {}; 
    EscritorBinario escritor {"personas.dat"}; 

    creador.leaYEnviePersona("personas.txt", escritor); 

    escritor.cerrar(); 

    }catch(const NoSeAbreArchivoException& e){
        
        cerr<< e.what() << '\n'; 
        
        return -1;
        
    }

 
    return 0;
    
} 

#endif