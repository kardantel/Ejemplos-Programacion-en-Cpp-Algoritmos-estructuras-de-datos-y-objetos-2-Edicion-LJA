//
//  main.cpp
//  Ejercicio 5.4 | Página 208 - Libro digital
//
//  Aplicación de bucles For anidados
//  Programa que imprime una tabla de m filas por n columnas y un caracter prefijado.
//
//  Created by Aerodron Colombia on 8/2/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int filas, columnas;
    char elCar;
    cout << "¿Cuántas filas?: ";
    cin >> filas;
    cout << "¿Cuántas columnas?: ";
    cin >> columnas;
    cout << "¿Qué caracter?: ";
    cin >> elCar;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << elCar;
        }
        cout << endl;
    }
    return 0;
}
