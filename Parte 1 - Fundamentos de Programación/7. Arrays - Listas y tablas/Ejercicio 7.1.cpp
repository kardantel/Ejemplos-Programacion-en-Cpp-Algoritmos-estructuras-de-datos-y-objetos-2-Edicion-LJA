//
//  main.cpp
//  Ejercicio 7.1 | Página 290 - Libro digital
//
//  Programa que lee y visualiza un array de dos dimensiones. La función 'leer' lee un array (una tabla) de dos dimensiones y la función 'visualizar' presenta la tabla en la pantalla.
//
//  Created by Aerodron Colombia on 8/8/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

// prototipos
void leer(int a[][5]);
void visualizar(const int a[][5]);

int main() {
    int a[3][5];    // Se declara la matriz 'a' de 3 filas y 5 columnas.
    leer(a);
    visualizar(a);
}
void leer(int a[][5]) {
    cout << "Introduzca 15 números enteros, 5 en cada fila." << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Fila " << i << ": ";
        for (int j = 0; j < 5; j++)
            cin >> a[i][j];
    }
}
void visualizar(const int a[][5]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            cout << a[i][j] << '\t';
        }
        cout << endl;
    }
}
