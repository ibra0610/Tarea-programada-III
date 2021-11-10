#include "creadorPersona.h"

#include <iostream> 
#include <fstream>
#include <sstream>

using namespace std; 

CreadorPersona::CreadorPersona(){
    
} 

void CreadorPersona::leaYEnviePersona(string nombreArchivo, EscritorBinario &escritor){ //recibe el nombre del archivo como parametro, asi es mas reutilizable
    ifstream entrada(nombreArchivo, ifstream::in); 

    if(!entrada.is_open()){
        cerr<< "Error leyendo archivo " << nombreArchivo << endl; 
    } 

    string linea = ""; 
    
    while(getline(entrada, linea)){
        
        try{
            istringstream stream(linea); 

            id = 0; 
            nombre = ""; 
            apellido = ""; 
            correo = ""; 

            stream >> id >> nombre >> apellido >> correo; 
            Persona persona (id, nombre, apellido, correo); 

            escritor.agreguePersona(persona); 

        }catch(string &exception){
            cerr<<exception << endl; 
        }
    }
}
