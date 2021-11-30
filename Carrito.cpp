#include<iostream>
#include "Tienda.h"
#include <string>
#include <vector>
#include "Producto.h"
//#include "Cliente.h"

using std::string;
using std::vector;
using std::cout;
using std::endl;

void Carrito::agregar_producto(Producto prod){
    productos.push_back(prod);
}

float Carrito::get_total(){
    int n = productos.size();
    float suma=0;
    for(int i=0; i<n; i++){
        
        suma=suma+(productos[i].get_precio()*cantidades[i]);
    }

    return suma;
} 

void Carrito::get_lista(){
    int n = productos.size();
    for(int i=0; i<n; i++){
        
        cout<<i<< productos[i].get_nombre()<< productos[i].get_precio()<< productos[i].get_stockid()<< productos[i].get_stock()<<endl;
    }
    

}
void Carrito::quitar_producto(int j){
     cantidades[j]=cantidades[j]-1;
} 

