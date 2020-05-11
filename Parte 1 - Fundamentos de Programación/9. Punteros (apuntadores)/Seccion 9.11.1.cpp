//
//  main.cpp
//  Sección 9.11.1 // Página 359 - Libro digital
//
//  Programa que tiene una función 'funcsuma' que tiene dos argumentos: n, el número de términos de la suma, y f, la función utilizada. Así pues, la función 'funcsuma' se va a llamar dos veces, y va a calcular la suma de:
//  inversos(k) = 1.0 / k (k = 1, 2, 3, 4, 5)
//  cuadrados(k) = k^2 (k = 1, 2, 3)
//
//  Created by Aerodron Colombia on 14/11/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

double inversos(int k);     // Se declara la función 'inversos' con argumento de paso por valor.
double cuadrados(int k);    // Se declara la función 'cuandrado' con argumento de paso por valor.
double funcsuma(int n, double (*f) (int k));    // Se declara la función 'funcsuma' con 2 argumentos: una variable 'n' tipo entero y la declaración de un puntero 'f' a una función (en este caso dos funciones: 'inversos' y 'cuadrado').

int main() {
    cout << "Suma de cinco inversos: " << funcsuma(5, inversos) << endl;
    cout << "Suma de tres cuadrados: " << funcsuma(3, cuadrados) << endl;
    return 0;
}

double funcsuma(int n, double (*f) (int k)) {   // El puntero 'f' es el puntero a las funciones 'inversos' y 'cuadrado'.
    double s = 0;
    for (int i = 1; i <= n; i++)
        s += f(i);
    return s;
}

double inversos(int k) {
    return 1.0 / k;
}

double cuadrados(int k) {
    return (double)k * k;
}
