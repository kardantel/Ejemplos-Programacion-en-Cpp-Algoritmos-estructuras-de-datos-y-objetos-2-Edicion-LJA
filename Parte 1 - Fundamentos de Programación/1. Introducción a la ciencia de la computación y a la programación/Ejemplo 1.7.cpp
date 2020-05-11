//
//  main.cpp
//  Ejemplo_1.7 | Página 28
//
//  Programa que suma los números pares, comprendidos entre 2 y 100 y que muestra la suma fina.
//
//  Created by Aerodron Colombia on 7/31/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>

int suma = 2;
int numero = 4;

int main() {
    while (numero <= 100) {
        suma = suma + numero;
        numero = numero + 2;
    }
    std::cout << "La suma de los numeros pares entre 2 y 100 es " << suma << "\n";
    return 0;
}
