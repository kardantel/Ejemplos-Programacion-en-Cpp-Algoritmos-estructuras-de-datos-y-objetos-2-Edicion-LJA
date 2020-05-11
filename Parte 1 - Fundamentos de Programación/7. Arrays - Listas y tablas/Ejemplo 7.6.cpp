//
//  main.cpp
//  Ejemplo 7.6 | Página 289 - Libro digital
//
//  Programa que almacena y visualiza números almacenados en un array.
//
//  Created by Aerodron Colombia on 8/8/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int m = 2, n = 4;
    
    // Rellenar la Tabla
    float discos[m][n]; // Se declara matriz 'discos' como local a main.
    int fila, col;
    for (fila = 0; fila < m; fila++) {
        for (col = 0; col < n; col++) {
            cin >> discos[fila][col];
        }
    }
    // Visualizar la tabla
    for (fila = 0; fila < m; fila++) {
        for (col = 0; col < n; col++) {
            cout << "Pts " << discos[fila][col] << "\n"; //Línea de código del libro.
            //cout << discos[fila][col] << " ";  //Línea de código original del programador.
        }
        cout << endl;
    }
}
