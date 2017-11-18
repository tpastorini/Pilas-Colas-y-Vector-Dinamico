/***************************************************
* Desarrolladora: Tatiana Pastorini
* Grado en Ingeniería Informática, UGR, ETSIIT.
* Práctica 3. Pilas, Colas y Vector Dinámico.
***************************************************/

#ifndef __VD_H__
#define __VD_H__

/**
 *  @brief T.D.A. VD
 *
 *
 * Una instancia @e c del tipo de dato abstracto VD sobre un dominio @e T es
 * una sucesión finita de elementos del mismo con un funcionamiento @e FIFO
 * (First In, First Out}). En un vector dinámico, las operaciones de inserción y borrado
 * tienen lugar en uno de los extremos, denominado @e inicio del vector dinámico
 *
 * En el vector dinámico, tendremos acceso únicamente al elemento del @e Frente.
 * El borrado, inserción o consulta de un elemento será sobre el @e Frente.
 *
 * Si numDatos=0 diremos que el vector dinámico está vacío.
 *
 * El espacio requerido para el almacenamiento es O(capacidad), donde capacidad
 * es el número de elementos que se pueden almacenar en el vector dinámico hasta
 * un que se vuelva a redimensionar.
 *
 * @author Tatiana Daniela Pastorini
 * @date   16 Noviembre 2014
*/

template <class T>
class VD{
    private:
        T* datos;                ///< Puntero a memoria a elementos de tipo T
        int numDatos;            ///< numero total del elementos hasta un momento determinado
        int capacidad;           ///< Tamaño reservado. Si no nos dan tamaño reservado, lo inicializamos a MAX
    public:
      /**
       * @brief Constructor por defecto
       */
        VD();

      /**
       * @brief Constructor con parámetros.
       * @param tam Tamaño para el vector indicado por el usuario.
       */
        VD(int tam);

      /**
       * @brief Constructor con parámetros.
       * @param ele Elemento de información.
       */
        VD(T ele);

      /**
       * @brief Destructor
       */
        ~VD();

      /**
       * @brief Devuelve la capacidad del vector dinámico
       */
        int capacity();

      /**
       * @brief Constructor con parámetros.
       * @param newTamanio Tamaño al que redimensionar
       * @return Devuelve true si se ha podido redimensionar y false en caso contrario
       */
        bool resize(int newTamanio);

      /**
       * @brief Devuelve el número de elementos actual del vector dinámico
       */
        int size() const;

      /**
       * @brief Inserta un elemento de tipo T en el vector dinámico
       */
        void push_Back(const T& elem);

      /**
       * @brief Quita el último elemento insertado en el vector dinámico
       */
        void pop_Back();

      /**
       * @brief Devuelve el elemento T que hay en una posición dada
       * @param i posición
       * @return Devuelve el elemento T
       */
        T& at(int i);

      /**
       * @brief Devuelve el elemento T que hay en una posición dada
       * @param i posición
       * @return Devuelve el elemento T
       */
        T& operator[](int i) const;       // Idem a At(...);
};

#include "vd.cpp"

#endif
