#ifndef CARRITO_H_
#define CARRITO_H_
#include <vector>
#include <string>
#include "Producto.h"
//#include "Cliente.h"

using std::vector;
using std::string;

class Carrito{

    private:
    vector <Producto> productos;
    vector <int> cantidades;

    public:
    
    void agregar_producto(Producto prod, int cantidad); // agregue el parámetro cantidad
    float get_total();
    void quitar_producto(int j);
    void get_lista();
   

};

#endif