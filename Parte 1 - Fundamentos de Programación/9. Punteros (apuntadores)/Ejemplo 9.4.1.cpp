//
//  main.cpp
//  Ejemplo 9.4.1 | Página 341 - Libro digital
//
//  Programa que visualiza el alfabeto mostrando el concepto de creación, inicialización e indirección de una variable puntero.
//
//  Created by Aerodron Colombia on 12/11/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

char c; // una variable carácter

int main() {
    char *pc; // un puntero a una variable carácter: (Creación).
    pc = &c; // Se asigna a 'pc' la dirección de la variable c (&c): (Inicialización)
    for (c = 'A'; c <= 'Z'; c++)
        cout << *pc; // Se visualiza el contenido de la variable apuntada por 'pc': (Indirección).
    cout << endl;
    return 0;
}
