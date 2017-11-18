/***************************************************
*   Desarrolladora: Tatiana Pastorini
*   Grado en Ingeniería Informática, UGR, ETSIIT.
*   Práctica 3. Pilas, Colas y Vector Dinámico.
***************************************************/

// Constructor por defecto
template <class T>
Lista<T>::Lista(){
    numDatos = 0;       // No tengo ningun elemento
    datos = 0;          // Puntero apunta a null
}
/* _________________________________________________________________________ */

template <class T>
Lista<T>::Lista(T ele){
    numDatos = 0;       // Inicializamos a 0
    datos = 0;          //Puntero a null
    push_Back(ele);     // Metemos el elemento como indiva push_Back()
}
/* _________________________________________________________________________ */


template <class T>
Lista<T>::~Lista(){
    delete [] datos;    // Libera la zona a la que apunta datos
}
/* _________________________________________________________________________ */


template <class T>      // Devuelve el número de elementos de la lista
int Lista<T>::size() const{
    return numDatos;
}
/* _________________________________________________________________________ */


template <class T>      // Inserta un elemento en la lista por delante
void Lista<T>::push_Back(const T& elem){

    Celda* p;           // Puntero para la celda a insertar

    p = new Celda;      // Creo la celda
    p->e = elem;        // Le pongo el dato
    p->sig = datos;     // El puntero de la nueva celda apunta al inicio de la lista
    datos = p;          // Hago que datos apunte a la celda insertada

    numDatos++;
}
/* _________________________________________________________________________ */


template <class T>      // Quita un elemento de la lista, por delante
void Lista<T>::pop_Back(){
    Celda*  aux;        // Puntero para seleccionar la celda a quitar

    aux = datos;        // Apunta al inicio de la lista
    datos = datos->sig; // Datos apunta a la celda siguiente
    delete aux;         // Elimino la celda anterior

    numDatos--;         // Ya tenemos un elemento menos
}
/* _________________________________________________________________________ */

// Devuelve la primera celda, es decir, el tope porque hago push_back por delante
template <class T>
T& Lista<T>::top() const{
    return datos->e;        // Devuelve el elemento T de siempre la primera celda
}
