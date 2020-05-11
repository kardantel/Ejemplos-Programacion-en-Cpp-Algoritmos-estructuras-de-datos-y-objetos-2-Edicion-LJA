//
//  main.cpp
//  Ejemplo 6.10 | Página 265 - Libro digital
//
//  Programa que cuenta valor del 1 al 10 de modo recursivo.
//
//  Created by Aerodron Colombia on 8/7/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

// Prototipo de la función recursiva.
double factorial(int);
/*
void contar(int);

int main() {
    contar(10);
    return 0;
}

void contar(int cima) {
    if (cima > 1) {
        contar(cima - 1);
    }
    cout << cima << "\n";
}
*/

// Programa que calcula el factorial de cualquier número.
int main() {
    int num;
    cout << "Ingrese el número a calcular: ";
    cin >> num;
    cout << "El factorial de " << num << " es " << factorial(num) << endl;
    return 0;
}

double factorial(int numero) {
    if (numero > 1)
        return numero * factorial(numero - 1);
    return 1;
}
