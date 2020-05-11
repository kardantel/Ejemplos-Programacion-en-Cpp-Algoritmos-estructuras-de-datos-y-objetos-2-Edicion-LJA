//
//  main.cpp
//  Ejemplo 7.12 | Página 302 - Libro digital
//
//  Programa que encuentra el número mayor de una lista.
//
//  Created by Aerodron Colombia on 8/12/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

#define LONG 15

int main() {
    int valor_mayor, i;
    int lista[LONG] = { 5,  2,  4,  9, 14,
                        4,  2, 85, 11, 45,
                       25, 12, 45,  6, 99 };
    valor_mayor = lista[0];
    for (i = 1; i < LONG; i++) {
        // Almacenar valor actual si es mayor que el último valor mayor encontrado
        if (lista[i] > valor_mayor) {
            valor_mayor = lista[i];
        }
    }
    cout << "El número mayor de la lista es "<< valor_mayor << "\n";
    return 0;
}
