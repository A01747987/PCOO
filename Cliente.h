#ifndef CLIENTE_H_
#define CLIENTE_H_
#include <string>
#include "Tienda.h"

using std::string;

class Cliente{
    private:
    string nombre;
    float dinero;

    public:
    float pagar(float pago); 
    void set_nombre(string nom);
    string get_nombreC();
    void set_dinero(float deposito);
    float get_dinero();
};

#endif