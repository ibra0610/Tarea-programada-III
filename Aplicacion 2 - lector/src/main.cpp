#include <iostream> 
#include <fstream> 

#include "persona.h" 
#include "lectorBinario.h" 
#include "./excepciones/personaNoExisteException.h" 
#include "./excepciones/personaPosicionInvalidaException.h"
#include "./excepciones/noSeAbreArchivoException.h"

using namespace std; 

int main(){
        
        
        try{

                LectorBinario lector {"personas.dat"}; 
        
                Persona persona = lector.getPersona(-1);
                cout << persona.getNombreCompleto();
        
                lector.cerrar(); 
                
        }catch(const PersonaNoExisteException& e){ 
                
                cerr<< e.what() << '\n'; 
                
                return -1; 
        
        }catch(const PersonaPosicionInvalidaException& e){
                
                cerr<< e.what() << '\n'; 
                
                return -1; 

        }catch(const NoSeAbreArchivoException& e){
                
                cerr<<e.what() << '\n'; 
                
                return -1;
        }
    
     
     return 0; 
}