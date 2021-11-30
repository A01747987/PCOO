#include <iostream>
#include <vector>
#include <string>
#include "Producto.h"
#include "Tienda.h"
#include "Carrito.h"
//#include "Cliente.h"

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main(){
    // PRUEBAS DE CLASES
    Carrito carrito_prueba;
    //Cliente cliente_prueba;
    Tienda tienda_prueba;
    string nom = "nombre";
    float valor = 50.5;
    string id = "ID102"; 
    int stock = 10;
    
    Producto prueba( nom,  valor,  id,  stock);
    cout<<prueba.get_nombre()<<endl;
    cout<<prueba.get_precio()<<endl;

/*
    cout << "Pruebas para clase cliente:\n" << endl;
    cliente_prueba.set_nombre("Carlos");
    cout << cliente_prueba.get_nombreC() << endl;
    cliente_prueba.set_dinero(5.5);
    cout << cliente_prueba.get_dinero() << endl;
    cout << cliente_prueba.pagar(1.2) << endl;
    cout << cliente_prueba.get_dinero() << endl;

    cout << "Pruebas para clase carrito:\n" << endl;
    carrito_prueba.set_dueno(cliente_prueba);
    cout << carrito_prueba.get_dueno() << endl;
    // carrito_prueba.agregar_producto(prueba);

    cout << "Pruebas para clase Tienda:\n" << endl;
    tienda_prueba.set_dinero(1.1);
    cout << tienda_prueba.recibir_pago(cliente_prueba, 1.1) << endl;

    cout << tienda_prueba.get_dinero() << endl;
    // pruebas para leer del archivo:
*/
}
