#ifndef PRODUCTO_H_
#define PRODUCTO_H_
#include <string>

using std::string;

class Producto{

    private: 
    string nombre;
    float precio;
    string stockid;
    int stock;

    public:
    Producto();
    Producto(string nom, float valor, string id, int cantidad); // constructor 
    string get_nombre();
    float get_precio();
    string get_stockid();
    int get_stock();
};
#endif