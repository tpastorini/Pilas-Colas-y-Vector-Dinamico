/***************************************************
* Desarrolladora: Tatiana Pastorini
* Grado en Ingeniería Informática, UGR, ETSIIT.
* Práctica 3. Pilas, Colas y Vector Dinámico.
***************************************************/

#ifndef _LISTA_H_
#define _LISTA_H_

/**
 *  @brief T.D.A. Lista
 *
 *
 * Una instancia @e c del tipo de dato abstracto Lista sobre un dominio @e T es
 * una sucesión finita de elementos del mismo con un funcionamiento @e FIFO
 * (First In, First Out}). En una lista, las operaciones de inserción y borrado
 * tienen lugar en uno de los extremos, denominado @e inicio de la lista
 *
 * En esta lista, tendremos acceso únicamente al elemento del @e Frente.
 * El borrado, inserción o consulta de un elemento será sobre el @e Frente.
 *
 *
 * Si numDatos=0 diremos que la lista está vacía.
 *
 * El espacio requerido para el almacenamiento es O(n), donde n es el número
 * de elementos de la lista.
 *
 * @author Tatiana Daniela Pastorini
 * @date   16 Noviembre 2014
*/

template <class T>
class Lista{
    private:
        struct Celda{
            T e;            ///< Elemento de información
            Celda* sig;     ///< Puntero a la siguiente Celda
        };

        Celda* datos;       ///< Puntero a elementos de tipo T
        int numDatos;       ///< Numero total del elementos actual
    public:
      /**
       * @brief Constructor por defecto
       */
        Lista();

      /**
       * @brief Constructor con parámetros.
       * @param ele Elemento de información.
       */
        Lista(T ele);

      /**
       * @brief Destructor
       */
        ~Lista();

      /**
       * @brief Devuelve el número de elementos actual de la lista
       */
        int size() const;

      /**
       * @brief Inserta un elemento de tipo T en la lista
       */
        void push_Back(const T& elem);

      /**
       * @brief Quita el último elemento insertado en la lista
       */
        void pop_Back();

      /**
       * @brief Devuelve el tope de la lista
       */
        T& top() const;
};

#include "lista.cpp"

#endif // _LISTA_H_
