#ifndef personaNoExisteException_H
#define personaExisteException_H 

#include <exception> 

class PersonaNoExisteException : public std::exception{

    public: 
     PersonaNoExisteException() noexcept = default; 
     ~PersonaNoExisteException() = default; 

     virtual const char* what() const noexcept{
         return "Persona no existe"; 
     }
}; 

#endif