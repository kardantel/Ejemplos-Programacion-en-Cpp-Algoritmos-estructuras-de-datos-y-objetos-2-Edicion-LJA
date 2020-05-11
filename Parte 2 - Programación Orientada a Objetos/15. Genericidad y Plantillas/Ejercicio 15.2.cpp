//
//  main.cpp
//  Ejercicio 15.2 | Página 543 - Libro digital
//
//  Programa que escribe una función para comparar dos valores e indicar si el primer valor es menor, igual o mayor que el segundo.
//
//  Created by Aerodron Colombia on 23/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

/*
// A quí se puede ver el ejemplo de dos funciones con nombre igual pero con parámetros de distinto tipo usando el método clásico. A esto se le llama "sobrecarga de funciones".
// devolver 0 si los valores son iguales, -1 si v1 es el más pequeño y 1 si v2 es el menor.
int comparar(const string &v1, const string &v2) {
    if (v1 < v2) return -1;
    if (v2 < v1) return 1;
    return 0;
}
//otra función comparar puede ser
int comparar(const double &v1, const double &v2) {
    if (v1 < v2) return -1;
    if (v2 < v1) return 1;
    return 0;
}
*/

// Aquí se usa la definición de plantilla de funciones usando 'typname'.
template <typename T>
int comparar (const T &v1, const T &v2) {
    if (v1 < v2) return -1;
    if (v2 < v1) return 1;
    return 0;
}

int main() {
    int numero1 = 5, numero2 = 8;
    cout << "valores originales: " << numero1 << " y " << numero2 << endl;
    cout << "Respuesta: " << comparar (numero1, numero2) << endl;   // Como 5 < 8 aparece '-1'.
    char car1 = 'L' , car2 = 'J' ;
    cout << "caracteres originales: " << car1 << " y " << car2 << endl;
    cout << "Respuesta: " << comparar (car1, car2) << endl; // Como L > J aparece '1'.
    return 0;
}
