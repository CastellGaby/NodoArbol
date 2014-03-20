#include <iostream>
#include "arbol.h"

using namespace std;
/*
class test{
public:
    void operator+(Test t){
        cout<<"prueba"<<endl;
    }

    void sumar(test t1, test t2){
    }
};*/

class Numero
{
    int num;
    Numero(){
        this->num=num;
    }

    Numero operator+(Numero n_param){
        cout<<"....."<<num<<endl;
        cout<<".....Mi param es:"<<n_param.num<<endl;
        Numero res(this->num+n_param.num);
        return res;
    }

    numero operator+(int n_param)
    {
        Numero re(this->num+p_ram);
        return res;
    }


};

int main()
{

    A*a1=new A(1);
    A*a2=new A(2);
    A*a3=new A(3);

    List<A*>l;
    l.push_front(a1);
    l.push_front(a2);
    l.push_front(a3);

    list<A*>::iterator i=l.begin();
    l++;
    l.insertar(i,a1);

    for(list<A*>::iterador)


/*    test t1;
    test t2;
    t1+t2;

    //Arbol a;
    NodoArbol*a=new NodoArbol(2);
    NodoArbol*a=new NodoArbol(6);
    NodoArbol*a=new NodoArbol(7);
    a.recorrer();
    //a.recorrer(a.raiz);*/
    Numero n1(3);
    Numero n2(2);
    Numerp n3=n1+n2+54;
    cout<<(n3).num<<endl;


    cout << "Hello world!" << endl;
    return 0;
}
