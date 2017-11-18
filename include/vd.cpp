
/***************************************************
*   Desarrolladora: Tatiana Pastorini
*   Grado en Ingeniería Informática, UGR, ETSIIT.
*   Práctica 3. Pilas, Colas y Vector Dinámico.
***************************************************/

// Constructor por defecto
template <class T>
VD<T>::VD(){
    numDatos = 0;       //vector vacío
    capacidad = 10;     // capacidad de 10
    datos = new T[capacidad];   // Vector con tamaño 10
}

//Construyo un vector con el tamaño que quiero

template <class T>
VD<T>::VD(int tam){
    capacidad = tam;    // Tamaño nuevo
    numDatos = 0;       // No hay elementos
    datos = new T[capacidad];   // Vector con el nuevo tamaño
}

template <class T>
VD<T>::VD(T ele){
    numDatos = 0;       // Vector vacío
    capacidad = 10;     // Capacidad de 10
    datos = new T[capacidad];   //Creo el vector
    push_Back(ele);         // Introduce un elemento como indica push_Back()
}

// Destructor
template <class T>
VD<T>::~VD(){
    delete [] datos;    // Elimina el vector dinámico
}

template <class T>
int VD<T>::capacity(){
    return capacidad;   //Devuelve la capacidad del vector
}

template <class T>
int VD<T>::size() const{
    return numDatos;    // Devuelve el numero de datos actuales
}

template <class T>      //Redimensiona a un nuevo tamanio y devuelve si se ha podido hacer o no
bool VD<T>::resize(int newTamanio){
    bool hecho = false;

    if(newTamanio >= numDatos){
        T* nuevo = new T[newTamanio];

        for(int i=0; i<numDatos; i++){
            nuevo[i] = datos[i];
        }

        delete [] datos;

        datos = nuevo;
        capacidad = newTamanio;

        hecho = true;
    }

    return hecho;
}

template <class T>          // Inserta un elemento de tipo T en el vector
void VD<T>::push_Back(const T& elem){
    if(numDatos != capacidad){
        datos[numDatos] = elem;     // porque numDatos coincide en todo momento con la posicion del vector
        numDatos++;
    }else{
        resize(capacidad*2);
        datos[numDatos] = elem;
        numDatos++;
    }
}

template <class T>      // Quita el último elemento del vector
void VD<T>::pop_Back(){
    numDatos--;
}


// Dada una posicion del vector, devuelve el elemento en esa posicion
template <class T>
T& VD<T>::at(int i){
    return datos[i];
}

// Idem a At(...);
template <class T>
T& VD<T>::operator[](int i) const{
    return datos[i];
}

