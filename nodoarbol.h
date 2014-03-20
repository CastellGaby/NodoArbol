#ifndef NODOARBOL_H
#define NODOARBOL_H


class NodoArbol
{
    public:
        NodoArbol();

        void recorrer();
        NodoArbol*hijo_izq;
        NodoArbol*hijo_der;
        int num;
        NodoArbol(int num);
        NodoArbol(int num, NodoArbol*hijo_izq, NodoArbol*hijo);
        virtual ~NodoArbol();
    protected:
    private:
};

#endif // NODOARBOL_H
