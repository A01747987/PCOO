#include "Tienda.h"
#include <string>
#include <vector>
#include "Producto.h"
#include "Cliente.h"

using std::string;
using std::vector;

float Cliente::pagar(float pago){
    return pago;
}
void Cliente::set_nombre(string nom){
    nombre = nom;
}
string Cliente::get_nombre(){
    return nombre;
}