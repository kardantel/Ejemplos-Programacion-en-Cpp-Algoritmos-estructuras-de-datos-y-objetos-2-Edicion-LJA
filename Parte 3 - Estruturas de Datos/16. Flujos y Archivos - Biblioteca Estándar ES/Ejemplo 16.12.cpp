//
//  main.cpp
//  Ejemplo 16.12 | Página 593 - Libro digital
//
//  Lectura de caracteres con cin.get(). Ingresar la siguiente entrada: ABCDE|FGHIJ|KLMNO|PQRST|UVWXY|Z
//
//  Created by Aerodron Colombia on 30/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    char bufer[80];
    cin.get(bufer, 8); // lee 7 caracteres del bufer
    cout << "[" << bufer << "]\n";
    cin.get(bufer, sizeof(bufer));
    cout << "[" << bufer << "]\n";
}
