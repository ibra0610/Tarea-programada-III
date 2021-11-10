#include <iostream> 

#include "lectorBinario.h" 
#include "./excepciones/noSeAbreArchivoException.h" 
#include "./excepciones/personaNoExisteException.h" 

LectorBinario::LectorBinario(string nombreArchivo){

    archivoEntrada.open(nombreArchivo, ios::in|ios::binary); 

    if(!archivoEntrada.is_open()){
        throw new NoSeAbreArchivoException();
    } 

} 

Persona LectorBinario::getPersona(int posicion){

    Persona encontrada; 

    long posicionPersona = sizeof(Persona) * (posicion); 

    archivoEntrada.seekg(0,ios::end); 
    long tamano_archivo = archivoEntrada.tellg(); 

    if(posicionPersona > tamano_archivo){

        throw PersonaNoExisteException();  
        
    }

    archivoEntrada.seekg(posicionPersona); 
    archivoEntrada.read((char *) &encontrada, sizeof(Persona)); 

    return encontrada;
} 

void LectorBinario::cerrar(){
    archivoEntrada.close();
}