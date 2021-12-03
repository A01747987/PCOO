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



void mostrar_productos(){
    cout<<"1. Agua embotellada"<<endl;
    cout<<"2. Bote de Palomitas"<<endl;
    cout<<"3. Ice de Cereza"<<endl;
    cout<<"0. Salir "<<endl;
}


int main(){
    string path;
    cout <<"Dirección del archivo de inventario: "<< endl;
    cin >> path;
    ifstream archivo;
    //C:\\Users\\diego\\OneDrive\\Documentos\\GitHub\\PCOO\\inventario.csv

    //C:\\Users\\eduar\\OneDrive\\Documentos\\GitHub\\PCOO\\inventario.csv
    archivo.open(path);
   


    string linea;
    string id;
    string nombre;
    string precio;
    string stock;
    float conversionf;
    int conversioni;
    int e=0;

    

    Tienda tienda;
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
    

    tienda.get_lista_productos();
    // menú: 
    
    int i;
    cin >> i;
    while(i!=1& i!=2 &i!=3 &i!=4 &i!=5 &i!=0){
        cout<<"Recuerda que debes elegir una opción que se encuentre en el menú "<<endl;
        cout<<"Intenta de nuevo"<<endl;
        tienda.get_lista_productos();
        mostrar_productos();
        cin>>i;

        
        } 

    while(i!=0){

        Carrito carrito;
        tienda.get_lista_productos();
        //carrito.agregar_producto(tienda.get_producto(i-1), 1);
        carrito.get_lista();
        cin>>i;


    }
        
    
    

    /*if(e==1){
        tienda.agregar_producto(producto);

    }
    tienda.get_lista_productos();
    archivo.close();


    */
    
    return 0;
    /*
    // PRUEBAS DE CLASES
    Carrito carrito_prueba;
    Tienda tienda_prueba;
    Producto prueba( "nombre",  50.5,  "ID102",  10);
    //prueba producto
    cout<<"Pruebas Producto: \n"<<endl;
    cout<<prueba.get_nombre()<<endl;
    cout<<prueba.get_precio()<<endl;
    cout<<prueba.get_stockid()<<endl;
    cout<<prueba.get_stock()<<endl;
    //prueba carrito
    cout<<"Pruebas Carrito: \n"<<endl;
    carrito_prueba.agregar_producto(prueba,2);
    carrito_prueba.get_lista();
    cout<<carrito_prueba.get_total()<<endl;
    carrito_prueba.quitar_producto(0);
    carrito_prueba.get_lista();
    //prueba Tienda
    cout<<"Pruebas Tienda: \n"<<endl;
    tienda_prueba.agregar_producto(prueba);
    tienda_prueba.get_lista_productos();
    cout << tienda_prueba.cobrar(carrito_prueba) << endl;*/
}
