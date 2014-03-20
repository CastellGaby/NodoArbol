#include "nodoarbol.h"
#include <iostream>
using namespace std;


NodoArbol::NodoArbol(int num)
{
    this->num=num;
    this->hijo_izq=0;
    this->hijo_der=0;
    //ctor
}

NodoArbol::NodoArbol(int num, NodoArbol*hijo_izq, NodoArbol*hijo_der)
{
    this->num=num;
    this->hijo_izq=hijo_izq;
    this->hijo_der=hijo_der;
    //ctor
}

NodoArbol::~NodoArbol()
{
    //dtor
}

void NodoArbol::recorrer()
{
    cout<<this->num<<endl;
    if(this->hijo_izq!=NULL)
        this->hijo_izq->recorrer();

    cout<<this->num<<endl;
    if(this->hijo_der!=NULL)
        this->hijo_der->recorrer();
}

