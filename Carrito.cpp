#include "Tienda.h"
#include <string>
#include <vector>
#include "Producto.h"
#include "Cliente.h"

using std::string;
using std::vector;

void Carrito::agregar_producto(Producto prod){
    productos.push_back(prod)
}
float get_total(); // pendiente
void quitar_producto(Producto prod);// pendiente 
void set_dueno(Cliente cliente){
    dueno = cliente;
}
string get_dueno(){
    return dueno;
}