//
//  main.cpp
//  Seccion 15.4.5 | Página 556 - Libro digital
//
//  Programa que muestra el diseño de la plantilla de clase Pila, con separación de archivos de cabecera (Pila.h) y archivo de implementación (Pila.CPP). Este programa no devuelve nada.
//
//  Created by Aerodron Colombia on 25/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
// #include "Pilas.h"

// Archivo Pila.h
// Interfaz de una plantilla de clases para definir pilas con el número de elementos definidos en la instanciación.
template <class T, int nE1 = 100> class Pila {
    T datos[nE1];
    int nElementos;
    public:
    Pila():nElementos(0){}
    // añade un elemento a la pila
    void Poner (T elem);
    // obtener un elemento de la pila
    T Quitar();
    // número de elementos reales en la pila
    int Numero();
    //¿está la pila vacía?
    bool Vacia();
    // ¿está la pila llena?
    bool Llena();
};

// Definición de funciones miembro de una plantilla de clase Pila con un número indefinido de elementos.
template <class T, int nE1>
void Pila <T, nE1>::Poner(T elem) {
    datos[nElementos] = elem;
    nElementos++;
}
template <class T, int nE1>
T Pila <T, nE1> ::Quitar() {
    nElementos--;
    return datos[nElementos];
}
template <class T, int nE1>
int Pila <T, nE1>::Numero() {
    return nElementos;
}
template <class T, int nE1>
bool Pila <T, nE1> ::Vacia() {
    return(nElementos == 0);
}
template <class T, int nE1>
bool Pila <T, nE1> ::Llena() {
    return(nElementos == nE1);
}

// Ejemplo de una instancia de una plantilla de clase Pila con un número genérico de elementos
int main() {
    // definición de una pila de números enteros (tamaño por defecto = 100)
    Pila <int> PilaEnt;
    // definir una pila pequeña de datos double
    Pila <double, 5> miniPila;
}
