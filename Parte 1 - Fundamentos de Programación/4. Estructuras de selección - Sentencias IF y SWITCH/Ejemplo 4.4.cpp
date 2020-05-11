//
//  main.cpp
//  Ejemplo 4.4 | Página 156 - Libro digital
//
//  Programa que comprueba si un número X es divisible por otro Y.
//
//  Created by Aerodron Colombia on 8/1/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int n, d;
    cout << "Introduzca dos números entros: ";
    cin >> n >> d;
    if (n%d == 0) {
        cout << n << " es divisible por " << d << endl;
    } else {
        cout << n << " no es divisible por " << d << endl;
    }
    return 0;
}
