#include "escritorBinario.h"
#include "./excepciones/noSeAbreArchivoException.h"
#include <iostream> 

using namespace std; 

EscritorBinario::EscritorBinario(string nombreArchivo){

        archivoSalida.open(nombreArchivo,ios::out|ios::binary); 

        if(!archivoSalida.is_open()){

            throw NoSeAbreArchivoException();

        }

} 

void EscritorBinario::agreguePersona(Persona &persona){
    archivoSalida.write((char *) &persona, sizeof(Persona)); 

} 

void EscritorBinario::cerrar(){
    archivoSalida.close(); 
}