/***************************************************
*	Desarrolladora: Tatiana Pastorini
*	Grado en Ingeniería Informática, UGR, ETSIIT.
*	Práctica 3. Pilas, Colas y Vector Dinámico.
***************************************************/

#include "pila_max_lista.h"

// Devuelve el elemento actual de la pila (siempre el último introducido)
int Pila_max::getElemento(){
    return tope().dato;
}

// Devuelve el máximo actual de la pila (siempre el último introducido)
int Pila_max::getMaximo(){
    return tope().maximo;
}

// Devuelve el tope de la pila
Elemento Pila_max::tope()const{
    return datos.top();
}

// Devuelve si la pila está vacía o no
bool Pila_max::vacia() const{
    bool vacio = false;

    if(datos.size() == 0)           // si numDatos = 0, está vacío
        vacio = true;

    return vacio;
}

// Pone un elemento en la pila
void Pila_max::poner(int e){
    Elemento elem;

    elem.dato = e;

    if(datos.size() == 0){      // Si no hay elementos en la lista, el máximo y el nuevo elemento son el mismo
        elem.maximo = e;
        datos.push_Back(elem);
    }
    else{                       // Si la lista no está vacía, entonces añado el elemento y actualizo el máximo
        if(datos.top().maximo < e){
            elem.maximo = e;
        }
        else{       // si el máximo es >= al elemento nuevo
            elem.maximo = datos.top().maximo;
        }
        datos.push_Back(elem);
    }
}

// Quita un elemento de la pila
void Pila_max::quitar(){
    datos.pop_Back();
}

// Sobrecarga del operador <<
std::ostream& operator<< (std::ostream &o,const Elemento &e){
    o << e.dato;
    return o;
}
