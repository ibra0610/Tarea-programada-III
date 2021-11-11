#include <iostream> 

#include "lectorBinario.h" 
#include "./excepciones/noSeAbreArchivoException.h" 
#include "./excepciones/personaNoExisteException.h" 
#include "./excepciones/personaPosicionInvalidaException.h"

LectorBinario::LectorBinario(string nombreArchivo){

    archivoEntrada.open(nombreArchivo, ios::in|ios::binary); 

    if(!archivoEntrada.is_open()){
        throw NoSeAbreArchivoException();
    } 

} 

Persona LectorBinario::getPersona(int posicion){

    if(posicion<0){ //si da una posicion invalida (negativa)
        throw PersonaPosicionInvalidaException(); 
    }

    Persona encontrada; 

    long posicionPersona = sizeof(Persona) * (posicion); 

    archivoEntrada.seekg(0,ios::end); 
    long tamano_archivo = archivoEntrada.tellg(); 

    if(posicionPersona > tamano_archivo){ //si da una posicion mayor a las que existen

        throw PersonaNoExisteException();  
        
    }

    archivoEntrada.seekg(posicionPersona); 
    archivoEntrada.read((char *) &encontrada, sizeof(Persona)); 

    return encontrada;
} 

void LectorBinario::cerrar(){
    archivoEntrada.close();
}