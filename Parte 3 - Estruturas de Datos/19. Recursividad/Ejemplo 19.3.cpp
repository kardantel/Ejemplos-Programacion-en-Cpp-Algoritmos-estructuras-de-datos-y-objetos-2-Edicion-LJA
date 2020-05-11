//
//  main.cpp
//  Ejemplo 19.3 | Página 688 - Libro digital
//
//  Programa que definir la naturaleza de la serie de Fibonacci: 0, 1, 1, 2, 3, 5, 8 ,13, 21, ...
//
//  Created by Aerodron Colombia on 2/05/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int fibonacci(int num) {
    if (num == 0 || num == 1)
        return num;
    else
        return fibonacci(num - 1) + fibonacci(num - 2);
}

int main() {
    int n;
    cout << "Ingrese el número final de la serie: ";
    cin >> n;
    cout << "Serie Fibonacci solución iterativa:" << endl;
    if (n <= 1)
        cout << n << endl;
    int fibinf = 0;
    int fibsup = 1;
    cout << fibinf << endl;
    cout << fibsup << endl;
    for (int i = 2; i <= n; i++){
        int x = fibinf;
        fibinf = fibsup;
        fibsup = x + fibinf;
        cout << fibsup << endl;
    }
    
    cout << "\nSerie Fibonacci solución recursiva:" << endl;
    cout << fibonacci(n) << endl;
    return 0;
}
