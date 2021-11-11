#include <gtest/gtest.h> 
#include <iostream> 

#include "../src/persona.h" 
#include "../src/lectorBinario.h" 
#include "../src/excepciones/noSeAbreArchivoException.h"
#include "../src/excepciones/personaNoExisteException.h"
#include "../src/excepciones/personaPosicionInvalidaException.h"

using namespace std; 

namespace{
    TEST(LectorBinarioTest, Prueba_LeerPersona){ 
        LectorBinario lectorPrueba {"../test/personasprueba.dat"}; 
        Persona prueba = lectorPrueba.getPersona(0); 
        lectorPrueba.cerrar(); 
    
        EXPECT_EQ(prueba.getID(), 10); 
        EXPECT_EQ(prueba.getCorreo(), "caitlyn_allen@biz.com"); 
        EXPECT_EQ(prueba.getNombreCompleto(),"Caitlyn Allen"); 
    }

    TEST(LectorBinarioTest, Prueba_ObtenerDatosDeLaPersona){
        int id = 30; 
        string nombre = "Javier"; 
        string apellido = "Cruz"; 
        string correo = "ibrahimcruz06@gmail.com"; 

        Persona prueba {id,nombre,apellido,correo};

        EXPECT_EQ(prueba.getID(), id);
        EXPECT_EQ(prueba.getCorreo(), correo);
        EXPECT_EQ(prueba.getNombreCompleto(), nombre + " " + apellido); 
    }

    TEST(LectorBinarioTest, Prueba_ExcepcionPersonaNoExiste){
        
        EXPECT_THROW({
            LectorBinario lectorPrueba {"../test/personasprueba.dat"}; 
            Persona prueba = lectorPrueba.getPersona(30); 
            lectorPrueba.cerrar();
        }, PersonaNoExisteException);
    }

    TEST(LectorBinarioTest, Prueba_ExcepcionPosicionInvalida){
        EXPECT_THROW({
            LectorBinario lectorPrueba {"../test/personasprueba.dat"}; 
            Persona prueba = lectorPrueba.getPersona(-1); 
            lectorPrueba.cerrar();
        }, PersonaPosicionInvalidaException);
    }

    TEST(LectorBinarioTest, Prueba_ExcepcionArchivoNoAbre){
        EXPECT_THROW({
            LectorBinario lectorPrueba {"este_archivo_no_existe.dat"}; 
            Persona prueba = lectorPrueba.getPersona(0); 
            lectorPrueba.cerrar();
        }, NoSeAbreArchivoException);
    }
}