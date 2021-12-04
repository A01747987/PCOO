#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include "Producto.h"
#include "Tienda.h"
#include "Carrito.h"
//#include "Cliente.h"

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::ifstream;
using std::stringstream;
using std::stof;

void mostrar_menu(Tienda tiend){
    cout << "" << endl;
    cout << " Bienvenido a la tienda" << endl;
    cout << "------------------------" << endl;
    tiend.get_lista_productos(); 
    cout << "1. Agregar producto al carrito" << endl;
    cout << "2. Quitar producto del carrito" << endl;
    cout << "3. ver carrito" << endl;
    cout << "4. ver precio carrito" << endl;
    cout << "5. Pagar" << endl;
    cout << "0. salir" << endl;
    cout << "" << endl;
    }

int main(){
    //Lectura del archivo:

    ifstream archivo;
    //C:\\Users\\diego\\OneDrive\\Documentos\\GitHub\\PCOO\\inventario.csv
    //C:\\Users\\eduar\\OneDrive\\Documentos\\GitHub\\PCOO\\inventario.csv
    archivo.open("C:\\Users\\eduar\\OneDrive\\Documentos\\GitHub\\PCOO\\inventario.csv");
   //Creación de variables y objetos:

    string linea;
    string id;
    string nombre;
    string precio;
    string stock;
    float conversionf;
    int conversioni;
    Tienda tienda;
    Carrito carrito;
    //Creacion de objetos Producto:

    while(getline(archivo,linea)){
        stringstream separador(linea);
        getline(separador,id, ',');
        getline(separador,nombre, ',');
        getline(separador,precio, ',');
        getline(separador,stock, ',');
        conversionf = stof(precio);
        conversioni = stoi(stock);
        Producto producto(nombre, conversionf, id, conversioni);
        tienda.agregar_producto(producto);
    }
    // menú:
    mostrar_menu(tienda);
    string i;
    cin >> i; // primera lectura
    while(i != "0"){
        if (i == "1"){
            int prod;
            int cant;
            cout << "introduce el número del producto que quieres agregar" << endl;
            cin >> prod;
            cout << "Elige la cantidad de producto que quieres agregar" << endl;
            cin >> cant;
            carrito.agregar_producto(tienda.get_producto(prod-1), cant);
            mostrar_menu(tienda);
            cin >> i;
        }
        else if (i == "2"){
            int prod;
            int cant;
            cout << "introduce el número del producto que quieres quitar" << endl;
            cout << "(el número que corresponde a la lista del carrito)" << endl;
            cin >> prod;
            carrito.quitar_producto(prod-1);
            mostrar_menu(tienda);
            cin >> i;
        }
        else if (i == "3"){
            carrito.get_lista();
            mostrar_menu(tienda);
            cin >> i;
        }
        else if (i == "4"){
            cout << "El precio del carrito hasta el momento es de: $"<<carrito.get_total() << endl;
            mostrar_menu(tienda);
            cin >> i;
        }
        else if (i == "5"){
            cout << "Se pagó la cantidad de: $" << tienda.cobrar(carrito) << endl;
            i = "0";
        }
        else{
            cout << "La opción elegida no es valida o no existe" << endl;
            mostrar_menu(tienda);
            cin >> i;
        }
        } 
    return 0;
}
