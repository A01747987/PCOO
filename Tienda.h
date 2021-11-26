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
    vector <string> get_lista_productos(); // el tipo de dato de regreso depende de como leamos los datos
    void agregar_carrito(Producto prod);
    float precio_carrito();
    void recibir_pago(Cliente cliente, float pago);
};
#endif