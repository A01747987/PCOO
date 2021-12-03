#include"Producto.h"
#include<iostream>

using std:: string ;
using std:: cout;
using std:: endl;

Producto::Producto(string nom, float valor, string id, int cantidad){ // agregue la declaración del constructor
    nombre = nom;
    precio = valor;
    stockid = id;
    stock = cantidad;
}
float Producto::get_precio(){
    return precio;
}
string Producto::get_nombre(){
    return nombre;
}
string Producto::get_stockid(){
    return stockid;
}
int Producto::get_stock(){
    return stock;
}

