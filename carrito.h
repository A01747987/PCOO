#ifndef CARRITO_H
#define CARRITO_H
#include <vector>
#include <string>
#include "Producto.h"
#include "Cliente.h"

using std::vector;
using std::string;

class Carrito{

    private:
    vector <Producto> productos;
    string dueno;

    public:
    void agregar_producto(Producto prod);
    float get_total();
    void quitar_producto(Producto prod); /*El parametro podria cambiar, porque para quitar un producto que ya
    esta en productos hay que acceder al valor del vector*/
    void set_dueno(Cliente cliente);
    string get_dueno();

};

#endif