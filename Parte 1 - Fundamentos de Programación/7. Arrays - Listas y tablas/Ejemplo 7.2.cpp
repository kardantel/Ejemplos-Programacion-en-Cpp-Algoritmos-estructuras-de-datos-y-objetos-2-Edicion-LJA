//
//  main.cpp
//  Ejemplo 7.2 | Página 280 - Libro digital
//
//  Protección frente a errores en el intervalo (rango) de valores de una variable de índice que representa un array.
//
//  Created by Aerodron Colombia on 8/8/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

double suma(const double a[], const int n) {
    if (n * sizeof(double) > sizeof(a)) {
        return 0;
    }
    double S = 0.0;
    for (int i = 0; i < n; i++) {
        S += a[i];
        }
    return S;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    return 0;
}
