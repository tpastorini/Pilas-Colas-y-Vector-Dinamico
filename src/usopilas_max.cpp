/***************************************************
*	Desarrolladora: Tatiana Pastorini
*	Grado en Ingeniería Informática, UGR, ETSIIT.
*	Práctica 3. Pilas, Colas y Vector Dinámico.
***************************************************/

#include <iostream>

#define CUAL_COMPILA 1
#if CUAL_COMPILA==1
    #include <pila_max_vd.h>
#elif CUAL_COMPILA==2
    #include <pila_max_lista.h>
#else
    #include <pila_max_cola.h>
#endif

using namespace std;

int main(){

    Pila_max p;
    int i;

    for(i=10; i>=0; i--)
        p.poner(i);

    while( !p.vacia() ){
        Elemento x = p.tope();
        cout << x << endl;
        p.quitar();
    }

    return 0;
}
