#include <vector>
#include "Producto.h"
//#include "Cliente.h"
#include <iostream>
#include "Tienda.h"
#include"Carrito.h"

using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

void  Tienda:: get_lista_productos(){
    cout <<"# , nombre , Q , precio , ID , stock" << endl;
    int n = lista_productos.size();
    for(int i=0; i<n; i++){
        cout<<i+1<<" , "<<lista_productos[i].get_nombre() << " , "
        << lista_productos[i].get_precio()<<" , "<< lista_productos[i].get_stockid()<<" , "
        << lista_productos[i].get_stock()<<endl;
    }
}

float Tienda::cobrar(Carrito carrito){
    return carrito.get_total();
}
void Tienda::agregar_producto(Producto prod){
    lista_productos.push_back(prod);
}






