#ifndef CREADORPERSONA_H 
#define CREADORPERSONA_H 

#include <iostream> 

using namespace std; 

class CreadorPersona{ 
    int id; 
    string nombre; 
    string apellido; 
    string correo; 
    string nombre_archivo_a_leer; 

    public: 
    CreadorPersona(string nombreArchivo); 

    //aqui ahy que hacer un metodo que lea cada persona, despues de leerla hay que llamar un metodo de la clase escritorarchivo,
    //seria bueno quye reciba un objeto de la clase escritorarchivo para ejecutar el metodo, de esa forma es mas practico para 
    //ponerlo en el main. 
    //Hacer que el nombre del archivo persona se reciba en el constructor, asi el codigo es mas reutilizable
}; 

#endif