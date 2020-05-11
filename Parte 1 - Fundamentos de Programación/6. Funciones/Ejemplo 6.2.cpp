//
//  main.cpp
//  Ejemplo 6.2 | Página 226 - Libro digital
//
//  Programa que entrega el número mayor de 2 números por medio de la función 'max'.
//
//  Created by Aerodron Colombia on 8/7/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int max(int x, int y) {
    if (x < y) {
        return y;
    } else {
        return x;
    }
}

int main() {
    int m, n;
    do {
        cout << "Incerte 2 números enteros cuales quiera: ";
        cin >> m >> n;
        cout << "El número mayor es " << max(m, n) << endl;
    } while (m != 0);
    //return 0; //Es indiferente para el resultado del programa si se coloca o no, la sentencia 'return 0;'
}
