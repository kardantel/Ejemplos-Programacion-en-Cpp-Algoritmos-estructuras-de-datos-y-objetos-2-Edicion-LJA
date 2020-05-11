//
//  main.cpp
//  Ejercicio 5.1 | Página 185 - Libro digital
//
//  Programa que calcula la media aritmética de una cantidad de números indicada por teclado.
//
//  Created by Aerodron Colombia on 8/1/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int TotalNum, n = 1, ContadorNum = 0;
    float SumaNum = 0;
    cout << "Ingresa la cantidad de números: ";
    cin >> TotalNum;
    while (ContadorNum < TotalNum) {
        float numero;
        cout << "Ingresa el " << n << "º número: ";
        cin >> numero;      // Lee el siguiente número a sumar.
        SumaNum += numero;  // Operador de asignación. Página 66.
        ++ContadorNum;      // Operador de incrementación. Página 69.
        ++n;
    }
    float media = SumaNum / ContadorNum;
    cout << "La media es: " << media << endl;
    return 0;
}
