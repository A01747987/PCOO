#include <vector>
#include "Producto.h"
#include "Cliente.h"
#include <iostream>
#include "Tienda.h"

using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

vector <Producto> Tienda:: get_lista_productos(){
    return lista_productos;
}
void Tienda::agregar_carrito(Producto prod){
    carrito.push_back(prod);
}
float Tienda::precio_carrito(){
    // queda pendiente hasta que veamos como leer el archivo
}
float Tienda::recibir_pago(Cliente cliente, float pago){
    return cliente.pagar(pago);
}



