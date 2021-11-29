#include <vector>
#include "Producto.h"
#include "Cliente.h"
#include <iostream>
#include "Tienda.h"
#include"Carrito.h"

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
float Tienda::precio_carrito(Carrito carrito){
    return carrito.get_total();
}
float Tienda::recibir_pago(Cliente cliente, float pago){
    dinero = dinero + cliente.pagar(pago);
    return cliente.pagar(pago);
}
void Tienda::set_dinero(float deposito){
    dinero = deposito;
}
float Tienda::get_dinero(){
    return dinero;
}



