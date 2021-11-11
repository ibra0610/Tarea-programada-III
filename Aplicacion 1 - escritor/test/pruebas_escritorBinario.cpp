#include <gtest/gtest.h> 
#include <iostream>

#include "../src/creadorPersona.h" 
#include "../src/escritorBinario.h" 
#include "../src/persona.h" 
#include "../src/excepciones/noSeAbreArchivoException.h"

using namespace std; 

namespace{
    TEST(EscritorBionario_Test, Prueba_EscribirLibro){
        int id = 10; 
        string nombre = "Caitlyn"; 
        string apellido = "Allen"; 
        string correo = "caitlyn_allen@biz.com"; 
        Persona prueba {id,nombre, apellido, correo}; 

        CreadorPersona creadorPrueba{}; 
        EscritorBinario escritorPrueba{"../test/prueba.dat"}; 

        creadorPrueba.leaYEnviePersona("../test/personasprueba.txt",escritorPrueba); 

        EXPECT_EQ(prueba.getID(),id);
        EXPECT_EQ(prueba.getCorreo(),correo);
        EXPECT_EQ(prueba.getNombreCompleto(), nombre + " " + apellido);
    }

    TEST(EscritorBionario_Test, Prueba_ObtenerDatosDePersona){
        int id = 30; 
        string nombre = "Javier"; 
        string apellido = "Cruz"; 
        string correo = "ibrahimcruz06@gmail.com";

        Persona prueba {id,nombre,apellido,correo};

        EXPECT_EQ(prueba.getID(), id);
        EXPECT_EQ(prueba.getCorreo(), correo);
        EXPECT_EQ(prueba.getNombreCompleto(), nombre + " " + apellido); 
    }

}