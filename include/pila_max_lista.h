/***************************************************
* Desarrolladora: Tatiana Pastorini
* Grado en Ingeniería Informática, UGR, ETSIIT.
* Práctica 3. Pilas, Colas y Vector Dinámico.
***************************************************/

#include "lista.h"
#include "iostream"

struct Elemento{
    int dato;       // Dato a almacenar
    int maximo;     // Máximo de todos los elementos almacenados
};

// Sobrecarga del operador<<
std::ostream& operator<< (std::ostream &o, const Elemento &e);

class Pila_max{
private:
    Lista <Elemento> datos;            // como un vector de la STL pero de mi tipo vector, que es Lista /// vector <int> v1 es el equivalente, por ejemplo
public:
    // Funciones características de una Pila:
   /**
    * @brief Devuelve el tope de la lista
    */
    Elemento tope() const;

   /**
    * @brief Devuelve si la lista está vacía o no
    */
    bool vacia() const;

   /**
    * @brief Introduce un elemento e en la lista
      @param e Entero a introducir en la lista
    */
    void poner(int e);

   /**
    * @brief Quita un elemento de la lista
    */
    void quitar();

    // Otros métodos:

   /**
    * @brief Devuelve máximo de la lista
    */
    int getMaximo();

   /**
    * @brief Devuelve el elemento de la lista
    */
    int getElemento();
};
