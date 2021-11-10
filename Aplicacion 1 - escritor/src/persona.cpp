#include "persona.h" 

#include <iostream> 
#include <cstring> 

using namespace std; 

Persona::Persona(int _id, string _nombre, string _apellido, string _correo){
    this->id = _id; 
    strcpy(this->nombre, _nombre.c_str()); 
    strcpy(this->apellido, _apellido.c_str()); 
    strcpy(this->correo, _correo.c_str()); 

} 

Persona::Persona(){
    this->id = 0; 
    strcpy(this->nombre, ""); 
    strcpy(this->apellido, ""); 
    strcpy(this->correo, ""); 
} 

int Persona::getID(){
    return this->id; 
} 
 
string Persona::getNombreCompleto(){
    return string{this->nombre} + " " + string{this->apellido}; 
} 

string Persona::getCorreo(){ 
    return string{this->correo}; 
} 


