//
//  main.cpp
//  Ejemplo 15.3 | Página 547 - Libro digital
//
//  Programa que usa la función plantilla 'intercambio' que intercambia dos valores del mismo tipo.
//
//  Created by Aerodron Colombia on 23/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>

template <class T>
void intercambio(T& a, T& b) {
    T aux = a;
    a = b;
    b = aux;
}

int main() {
    int x = 5;
    int y = 12;
    std::cout << "Valores sin intercambio: " << std::endl;
    std::cout << "x = " << x << ", y = " << y << std::endl;
    intercambio(x, y); //ahora x = 12, y = 5
    std::cout << "Valores con intercambio: " << std::endl;
    std::cout << "x = " << x << ", y = " << y << std::endl;
}
