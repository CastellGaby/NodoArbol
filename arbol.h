#ifndef ARBOL_H
#define ARBOL_H

#include <iostream>
#include "NodoArbol.h"


class Arbol
{
    public:
        Arbol();
        NodoArbol*raiz;

        void recorrer(NodoArbol*padre);
        virtual ~Arbol();
    protected:
    private:
};

#endif // ARBOL_H
