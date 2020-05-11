//
//  main.cpp
//  Ejemplo 9.1 | Página 336 - Libro digital
//
//  Obtener el valor y la dirección de una variable.
//
//  Created by Aerodron Colombia on 12/11/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int n = 75;
    cout << "Valor de n = " << n << endl; // visualiza el valor de n
    cout << "Dirección de n (&n) = " << &n << endl; // visualiza dirección de n
}

// Usos en C++ para el caracter &:
//
// &n               Se utiliza para devolver la dirección de memoria de esa varible.
//                  Cuando se utiliza como sufijo de un tipo en una declaración de parámetros de una función...
// int& r = n;      1) se declara la variable como sinónimo de la variable que se ha inicializado; o,
// funcion(int& n)  2) declara el parámetro referencia de la variable que se pasa a la función.
