#ifndef TIENDA_H_
#define TIENDA_H_

#include <string>
#include <vector>
#include "Producto.h"
//#include "Cliente.h"
#include "Carrito.h"

using std::string;
using std::vector;

class Tienda{
    
    private:
    string nombre;
    vector <Producto> lista_productos;
    public:
    void get_lista_productos(); 
    float cobrar(Carrito carrito);
    
};
#endif