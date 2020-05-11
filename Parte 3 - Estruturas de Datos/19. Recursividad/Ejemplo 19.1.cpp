//
//  main.cpp
//  Ejemplo 19.1 | Página 686 - Libro digital
//
//  Cálculo del factorial de un entero n, mayor o igual a 0, de modo iterativo (no recursivo), utilizando un bucle for.
//
//  Created by Aerodron Colombia on 2/05/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int factorial(int num) {
    int facto;
    if (num == 0) {facto = 1;}
    else {facto = num * factorial(num - 1);}
    return facto;
}

int main() {
    int numfac = 1, n;
    cout << "Ingrese el número a calcular factorial: ";
    cin >> n;
    cout << "Factorial solución iterativa:" << endl;
    cout << "n" << "\t|\t" << "n!" << endl;
    for (int contador = n; contador >= 1; contador--) {
        numfac *= contador;
        cout << contador << "\t|\t" << numfac << endl;
    }
    cout << "\nFactorial solución recursiva:" << endl;
    cout << "El factorial de " << n << " es: " << factorial(n) << endl;
    return 0;
}
