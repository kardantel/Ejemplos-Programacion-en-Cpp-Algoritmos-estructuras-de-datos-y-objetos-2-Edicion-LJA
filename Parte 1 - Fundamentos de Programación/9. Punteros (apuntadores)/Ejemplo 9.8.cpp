//
//  main.cpp
//  Ejemplo 9.8 | Página 357 - Libro digital
//
//  Programa que demuestra el uso de un puntero para llamar a una función.
//
//  Created by Aerodron Colombia on 5/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

float ejemplo(int i, int j);    // Se declara la función 'ejemplo' con argumentos de paso por valor.
float (*p) (int i, int j);      // Se declara el puntero 'p' a la función 'ejemplo'.

int main() {
    p = &ejemplo;   //Se asigna la dirección de función 'ejemplo' a puntero 'p'.
    // Lo anterior también se puede esribir: p = ejemplo
    cout << (*p) (12, 45) << endl;  // Se llama a la función 'ejemplo' por medio del puntero 'p'.
    // Lo anterior también se puede esribir: p(12, 45)
    return 0;
}

float ejemplo(int i, int j) {
    return 3.14159 * i * i + j;
}
