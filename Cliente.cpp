#include "Tienda.h"
#include <string>
#include <vector>
#include "Producto.h"
#include "Cliente.h"

using std::string;
using std::vector;

float Cliente::pagar(float pago){
    dinero = dinero - pago;
    return pago;
}
void Cliente::set_nombre(string nom){
    nombre = nom;
}
string Cliente::get_nombreC(){
    return nombre;
}
void Cliente::set_dinero(float deposito){
    dinero = deposito;
}
float Cliente::get_dinero(){
    return dinero;
}