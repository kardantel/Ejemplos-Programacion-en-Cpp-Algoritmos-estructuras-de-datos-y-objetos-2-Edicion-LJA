//
//  main.cpp
//  Ejemplo 5.9 | Página 206 - Libro digital
//
//  Aplicación de bucles For anidados
//  Programa que visualiza una tabla de multiplicar por cálculo y visualización de productos de la forma x * y con bucle FOR anidado.
//
//  Created by Aerodron Colombia on 8/2/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int producto;
    int Xultimo = 2;
    int Yultimo = 5;
    for (int x = 1; x <= Xultimo; x++) {
        for (int y = 1; y <= Yultimo; y++) {
            producto = x * y;
            cout << x << " * " << y << " = " << producto << "\n";
        }
    }
    return 0;
}
