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
    
    void agregar_producto(Producto prod);

    float get_total();
    void quitar_producto( int j); /*El parametro podria cambiar, porque para quitar un producto que ya
    esta en productos hay que acceder al valor del vector*/
    //void set_dueno(Cliente cliente);
    void get_lista();
   

};

#endif