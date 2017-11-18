/***************************************************
* Desarrolladora: Tatiana Pastorini
* Grado en Ingeniería Informática, UGR, ETSIIT.
* Práctica 3. Pilas, Colas y Vector Dinámico.
***************************************************/

#include "vd.h"
#include "iostream"

struct Elemento{
    int dato;       // Dato a almacenar
    int maximo;     // Máximo de todos los elementos almacenados
};

// Sobrecarga del operador<<
std::ostream& operator<< (std::ostream &o, const Elemento &e);

class Pila_max{
private:
    VD <Elemento> datos;            // como un vector de la STL pero de mi tipo vector, que es VD /// vector <int> v1 es el equivalente, por ejemplo
public:
    // Funciones características de una Pila:
   /**
    * @brief Devuelve el tope del vector
    */
    Elemento tope() const;

   /**
    * @brief Devuelve si el vector está vacío o no
    */
    bool vacia() const;

   /**
    * @brief Introduce un elemento e en el vector
      @param e Entero a introducir en el vector
    */
    void poner(int e);

   /**
    * @brief Quita un elemento del vector
    */
    void quitar();

    // Otros métodos:

   /**
    * @brief Devuelve máximo del vector
    */
    int getMaximo();

   /**
    * @brief Devuelve el elemento del vector
    */
    int getElemento();
};
