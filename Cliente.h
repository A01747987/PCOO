#ifndef CLIENTE_H_
#define CLIENTE_H_
#include <string>
#include "Tienda.h"

using std::string;

class Cliente{
    
    private:
    string nombre;

    public:
    // cambió de void a float el tipo de retorno
    float pagar(float pago); // quité el parametro de tienda para que sea mas sencilla la interacción
    void set_nombre(string nom);
    string get_nombre();
};

#endif