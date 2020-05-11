//
//  main.cpp
//  Ejercicio 4.1 | Página 87
//
//  Programa que visualiza el valor absoluto de un número negativo.
//
//  Created by Aerodron Colombia on 7/31/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
#include <string.h>

int main() {
    std::cout << "Intruduzca un número negativo: ";
    int valor;
    std::cin >> valor;
    if (valor < 0) {valor = -valor;}
    std::cout << "El valor absoluto de " << -valor << " es " << valor << "\n";
    return 0;
}
