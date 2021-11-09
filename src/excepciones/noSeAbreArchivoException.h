#ifndef noSeAbreArchivo_H
#define noSeAbreArchivo_H 

#include <exception> 

class NoSeAbreArchivoException : public std::exception{
    
    
    public: 
    
    NoSeAbreArchivoException() noexcept = default; 
    ~NoSeAbreArchivoException() = default; 

    virtual const char* what() const noexcept{
        return "No se puede abrir el archivo"; 
    } 
}; 

#endif