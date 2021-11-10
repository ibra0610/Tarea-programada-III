#include <iostream> 
#include <fstream> 

#include "persona.h" 
#include "lectorBinario.h" 
#include "./excepciones/personaNoExisteException.h" 

using namespace std; 

int main(){
    try{
        LectorBinario lector {"personas.dat"}; 

        Persona persona = lector.getPersona(0); 
        cout << persona.getNombreCompleto();
        lector.cerrar(); 
    }catch(const PersonaNoExisteException& e){
        cerr<< "Error leyendo la persona solicitada" << e.what() << '\n'; 
        return -1; 
    }
     
     return 0; 
}