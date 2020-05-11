//
//  main.cpp
//  Ejemplo Sección 6.17.1 | Página 262 - Libro digital
//
//  Ejemplo de polimorfismo en C++ (sobrecarga de funciones)
//  Programa que ejecuta la función 'pruega()' varias veces con diferente número y tipo de parámetros de entrada.
//
//  Created by Aerodron Colombia on 29/02/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//
#include <iostream>
using namespace std;

// Prototipos de funciones
int prueba(int);
int prueba(int, int);
float prueba(float, float);

int main() {
    // definición de variables
    int indice = 7;
    int x = 4; int y = 5;
    float a = 6.0;
    float b = 7.0;
    cout << "El cuadrado de " << indice << " es: " << prueba(indice) << endl;
    cout << "El producto de " << x << " por " << y << " es: " << prueba(x, y) << endl;
    cout << "La media de " << a << " y " << b << " es: " << prueba(a, b) << endl;
}

// Prueba, calcula el cuadrado de un valor entero
int prueba(int valor) {
    return (valor * valor);
}

// Prueba, multiplica dos valores enteros
int prueba(int valor1, int valor2) {
    return (valor1 * valor2);
}

// Prueba, calcula la media de dos valores reales
float prueba(float valor1, float valor2) {
    return ((valor1 + valor2) / 2);
}
