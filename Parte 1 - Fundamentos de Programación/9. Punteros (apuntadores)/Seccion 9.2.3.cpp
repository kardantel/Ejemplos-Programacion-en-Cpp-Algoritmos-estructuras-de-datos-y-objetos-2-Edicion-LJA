//
//  main.cpp
//  Sección 9.2.3 | Página 341 - Libro digital
//
//  Programa que visualiza el alfabeto. Muestra el concepto de creación, inicialización e indirección de una variable puntero.
//
//  Created by Aerodron Colombia on 4/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

char c; // una variable carácter

int main() {
    char *pc;   // Una variable puntero que apunta a una variable carácter (creación).
    pc = &c;    // La variable puntero almacena la dirección de memoria de la variable caracter (inicialización).
    for (c = 'A'; c <= 'Z'; c++)
        cout << *pc;    // Se usa el puntero para obtener el valor al que apunta. (Indirección) de la variable puntero a la variable caracter.
    cout << endl;
    return 0;
}

// Usos en C++ para el caracter &:
//
// &n               Se utiliza para devolver la dirección de memoria de esa varible.
//                  Cuando se utiliza como sufijo de un tipo en una declaración de parámetros de una función...
// int& r = n;      1) se declara la variable como sinónimo de la variable que se ha inicializado; o,
// funcion(int& n)  2) declara el parámetro referencia de la variable que se pasa a la función.
