#include "escritorBinario.h"
#include "noSeAbreArchivoException.h"
#include <iostream> 

using namespace std; 

EscritorBinario::EscritorBinario(string nombreArchivo){

        archivoSalida.open(nombreArchivo,ios::out|ios::binary); 

        if(!archivoSalida.is_open()){

            throw new NoSeAbreArchivoException();

        }

} 

void EscritorBinario::agreguePersona(Persona &persona){
    archivoSalida.write((char *) &persona, sizeof(Persona)); 

} 

void EscritorBinario::cerrar(){
    archivoSalida.close(); 
}