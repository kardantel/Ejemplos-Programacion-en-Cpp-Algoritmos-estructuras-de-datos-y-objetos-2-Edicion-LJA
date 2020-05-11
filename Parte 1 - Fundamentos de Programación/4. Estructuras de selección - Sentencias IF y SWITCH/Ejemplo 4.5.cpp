//
//  main.cpp
//  Ejemplo 4.5 | Página 157 - Libro digital
//
//  Programa que calcula el número mayor entre dos números por medio de if-else.
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
    if (n > d) {
        cout << "El número mayor es " << n << endl;
    } else {
        cout << "El número menor es " << d << endl;
    }
    return 0;
}
