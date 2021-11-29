#ifndef TIENDA_H_
#define TIENDA_H_

#include <string>
#include <vector>
#include "Producto.h"
#include "Cliente.h"
#include "Carrito.h"

using std::string;
using std::vector;

class Tienda{
    
    private:
    string nombre;
    vector <Producto> lista_productos;
    vector <Producto> carrito;
    float dinero;

    public:
    vector <Producto> get_lista_productos(); 
    void agregar_carrito(Producto prod);
    float precio_carrito(Carrito carrito);
    float recibir_pago(Cliente cliente, float pago); 
    void set_dinero(float deposito);
    float get_dinero();
};
#endif