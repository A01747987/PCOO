#ifndef TIENDA_H_
#define TIENDA_H_

#include <string>
#include <vector>
#include "Producto.h"
#include "Cliente.h"

using std::string;
using std::vector;

class Tienda{
    
    private:
    string nombre;
    vector <Producto> lista_productos;
    vector <Producto> carrito;

    public:
    vector <Producto> get_lista_productos(); 
    void agregar_carrito(Producto prod);
    float precio_carrito();
    float recibir_pago(Cliente cliente, float pago); /* cambia el tipo de retorno a float para ser congruente 
    con la función pagar de cliente*/
};
#endif