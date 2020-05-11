//
//  main.cpp
//  Seccion 15.5 | Página 558 - Libro digital
//
//  Programa que demuestra el uso y manipulación de una estructura de datos Pila por medio de las funciones poner, quitar y visualizar.
//
//  Created by Aerodron Colombia on 25/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>

enum estado_pila {OK, LLENA, VACIA};

// En la declaración, se considera el tipo genérico T. Pila es una clase parametrizada por un tipo T y se representa con la notación Pila <T>.
template <class T> class Pila {
    public:
    Pila(int _longitud = 10);
    ~Pila() {delete[] tabla;}
    void poner(T);
    T quitar();
    void visualizar();
    int num_elementos();
    int leer_long() {return longitud;}
    private:
    int longitud;
    T* tabla;
    int cima;
    estado_pila estado;
};

// Definición de funciones miembro de una plantilla de clase Pila con un número indefinido de elementos.
// La declaración de cada función se precede por template <class T> que indica al compilador que la función está parametrizada por el tipo T.
template <class T> Pila <T>::Pila(int _longitud) {
    longitud = _longitud;
    tabla = new T[longitud];
    cima = 0;
    estado = VACIA;
}
template <class T> void Pila <T>::poner(T _elemento) {
    if (estado != LLENA)
        tabla [++cima] = _elemento;
    else
        std::cout << "*** Pila llena ***" << std::endl;
    if (cima >= longitud)
        estado = LLENA;
    else
        estado = OK;
}
template <class T> T Pila <T> :: quitar() {
    T elemento = 0;
    if (estado != VACIA)
        elemento = tabla[--cima];
    else
        std::cout << "*** Pila vacía ***" << std::endl;
    if (cima <= 0)
        estado = VACIA;
    else
        estado = OK;
    return elemento;
}
template <class T> void Pila <T>::visualizar() {
    for (int i = cima; i > 0; i--)
        std::cout << "[" << tabla[i] << "]" << std::endl;
}
template <class T> int Pila<T>:: num_elementos() {
    return cima;
}

// La manipulación de la pila con diversos tipos de datos se puede comprobar con el siguiente programa:
int main() {
    // Pila de enteros
    Pila <int> p1(6);
    p1.poner(6);
    p1.poner(12);
    p1.poner(18);
    std::cout << "Número de elementos: " << p1.num_elementos() << std::endl;
    p1.visualizar();
    std::cout << "Quitar 1: " << p1.quitar() << std::endl;
    std::cout << "Quitar 2: " << p1.quitar() << std::endl;
    std::cout << "Quitar 3: " << p1.quitar() << std::endl;
    std::cout << "Número de elementos: " <<p1.num_elementos() << std::endl;
    std::cout << "Quitar 4: " << p1.quitar() << std::endl;
    std::cout << std::endl ;
    // Pila de enteros largos
    Pila <long> p2(6);
    p2.poner(60000L);
    p2.poner(1000000L);
    p2.poner(2000000L);
    std::cout <<"Número de elementos:" << p2.num_elementos() << std::endl;
    p2.visualizar();
    std::cout <<"Quitar 1 : " << p2.quitar() << std::endl;
    std::cout <<"Quitar 2 : " << p2.quitar() << std::endl;
    std::cout <<"Quitar 3 : " << p2.quitar() << std::endl;
    std::cout <<"Número de elementos :" << p2.num_elementos() << std::endl;
    std::cout <<"Quitar 4 : " << p2.quitar() << std::endl;
    Pila <double> p3(6);
    p3.poner(6.6);
    p3.poner(12.12);
    p3.poner(18.18);
    std::cout <<"Número de elementos : " << p3.num_elementos() << std::endl;
    p3.visualizar();
    std::cout << "Quitar 1 : " <<p3.quitar() << std::endl;
    std::cout << "Quitar 2 : " <<p3.quitar() << std::endl;
    std::cout << "Quitar 3 : " <<p3.quitar() << std::endl;
    std::cout << "Número de elementos :" << p3.num_elementos()<< std::endl;
    std::cout << "Quitar 4 : " <<p3.quitar() << std::endl;
}
