//
//  main.cpp
//  Ejemplo 5.8 | Página 114.
//  Ejemplo 5.7 | Página 197 - Libro digital.
//
//  Programa la muestra las potencia de 2 números cuyos valores están entre 1 y 1000.
//
//  Created by Aerodron Colombia on 8/2/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;
/*
int main() {
    //  Ejercicio con WHILE.
    int potencia = 1;
    while (potencia < 1000) {
        cout << "Potencia: " << potencia << "\n";
        potencia *= 2;
    }
    cout << "Fin WHILE!\n";
    return 0;
}*/
int main() {
    //  Ejercicio con DO-WHILE.
    int potencia = 1;
    do {
        cout << "Potencia: " << potencia << "\n";
        potencia *= 2;
    } while (potencia < 1000);
    cout << "Fin DO-WHILE!\n";
    return 0;
}
