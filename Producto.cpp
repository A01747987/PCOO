#include"Producto.h"
#include<iostream>
using std:: string ;
using std:: cout;
using std:: endl;
float Producto::get_precio(){
    return precio;
}
string Producto::get_nombre(){
    return nombre;
}
string Producto::get_stockid(){
    return stockid;
}