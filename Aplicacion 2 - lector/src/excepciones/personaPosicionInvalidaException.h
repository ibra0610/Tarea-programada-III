#ifndef personaPosicionInvalidaException_H 
#define personaPosicionInvalidaException_H 

#include <exception> 

class PersonaPosicionInvalidaException : public std::exception{

    public: 
    PersonaPosicionInvalidaException() noexcept = default; 
    ~PersonaPosicionInvalidaException() = default; 

    virtual const char* what() const noexcept{
        return "Posicion invalida"; 
    }
}; 

#endif