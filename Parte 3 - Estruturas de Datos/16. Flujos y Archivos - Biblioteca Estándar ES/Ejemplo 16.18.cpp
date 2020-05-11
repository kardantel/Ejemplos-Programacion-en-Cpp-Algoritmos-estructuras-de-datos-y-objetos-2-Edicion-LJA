//
//  main.cpp
//  Ejemplo 16.18 | Página 604 - Libro digital
//
//  Programa que muestra un sistema para formatear datos de salida de diversas formas.
//
//  Created by Aerodron Colombia on 30/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;
#include <iomanip>

int main() {
    float v1 = 4500.25;
    float v2 = 325.99;
    float v3 = 54225.00;
    cout << setiosflags(ios::showpoint|ios::fixed)  // showpoint: Visualiza punto decimal en valores de coma flotante. fixed: fixed Utiliza notación en coma fija para números en coma flotante.
         << setprecision(2) // Cantidad de dígitos de un número decimal.
         << setfill('-')    // Rellena con '*' los espacios en blanco.
         << setiosflags(ios::right);    // Los datos se alinean a la derecha.
    cout << "Saldo Final: $" << setw(10) << v1 << endl;
    cout << "Saldo Final: $" << setw(10) << v2 << endl;
    cout << "Saldo Final: $" << setw(10) << v3 << endl;
}
