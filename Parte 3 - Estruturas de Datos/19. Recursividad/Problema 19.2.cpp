//
//  main.cpp
//  Problema 19.2 | Página 691 - Libro digital
//
//  Programa que tiene una función Fibonacci de modo recursivo y un programa que manipule dicha función, de modo que calcula el valor del elemento de acuerdo a la posición ocupada en la serie.
//
//  Created by Aerodron Colombia on 2/05/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

unsigned long fibonacci (unsigned long);

int main() {
    unsigned long resultado, num;
    cout << "Introduzca un entero : ";
    cin >> num;
    resultado = fibonacci (num);
    cout << "El valor de Fibonacci(" << num << ") = " << resultado << endl;
    return 0 ;
}

// definición recursiva de la función de Fibonacci
unsigned long fibonacci(unsigned long n) {
    if (n == 0 || n == 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
