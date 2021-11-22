#ifndef CLIENTE_H_
#define CLIENTE_H_
#include <string>
#include "Tienda.h"

using std::string;

class Cliente{
    
    private:
    string nombre;

    public:
    void pagar(Tienda tienda, float pago);
};

#endif