#include "arbol.h"
#include <iostream>

using namespace std;

Arbol::Arbol()
{/*
    NodoArbol*n1=new NodoArbol(1);
    NodoArbol*n2=new NodoArbol(2);
    NodoArbol*n3=new NodoArbol(3);
    NodoArbol*n4=new NodoArbol(4);
    NodoArbol*n5=new NodoArbol(5);

    n1->hijo_izq=n2;
    n1->hijo_izq=n3;
    n2->hijo_izq=n4;
    n2->hijo_izq=n5;*/
    //ctor

    raiz=new NodoArbol(1);
    raiz->hijo_izq=new NodoArbol(2);
    raiz->hijo_der=new NodoArbol(3);
    raiz->hijo_izq->hijo_izq=new NodoArbol(4);
    raiz->hijo_izq->hijo_der=new NodoArbol(5);
}

Arbol::~Arbol()
{
    //dtor
}

void Arbol::recorrer(NodoArbol*padre){
    if(padre==NULL){
        return;
    }
    cout<<padre->num<<endl;
    recorrer(padre->hijo_izq);
    recorrer(padre->hijo_der);
}
