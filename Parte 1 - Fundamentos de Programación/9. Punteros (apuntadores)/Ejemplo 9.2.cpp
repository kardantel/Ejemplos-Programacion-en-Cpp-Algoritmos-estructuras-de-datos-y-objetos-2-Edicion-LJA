//
//  main.cpp
//  Ejemplo 9.2 | Página 337 - Libro digital
//  Programa que demuestra el uso de referencias.
//
//  ----------------------------------------------
//  Ejemplo 9.3 | Página 337 - Libro digital
//  Programa que demuestra el uso de referencias.
//
//  Created by Aerodron Colombia on 12/11/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int n = 75;
    int& r = n; // r es una referencia para n
    cout << "n = " << n << ", r = " << r << endl;   //  Ejemplo 9.2
    cout << "&n = " << &n << ", &r =" << &r << endl;    //  Ejemplo 9.3
}

// Usos en C++ para el caracter &:
//
// &n               Se utiliza para devolver la dirección de memoria de esa varible.
//                  Cuando se utiliza como sufijo de un tipo en una declaración de parámetros de una función...
// int& r = n;      1) se declara la variable como sinónimo de la variable que se ha inicializado; o,
// funcion(int& n)  2) declara el parámetro referencia de la variable que se pasa a la función.
