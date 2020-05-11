//
//  main.cpp
//  Ejemplo 11.11 | Página 414 - Libro digital
//
//  Programa que determina si una cadena es igual a otra, o mayor o menor que otra, usando la función strcmp().
//
//  Created by Aerodron Colombia on 7/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    char cad1[] = "Microsoft C++";
    char cad2[] = "Microsoft Visual C++";
    int i;
    i = strcmp(cad1, cad2); // Como cad1 en menor que cad2, i toma un valor negativo.
    cout << i << endl;
    cout << strcmp("Waterloo", "Windows") << endl;  // Como cad1 es menor que cad2, i toma un valor negativo.
    cout << strcmp("Mortimer", "Mortim") << endl;   // Como cad1 es mayor que cad2, i toma un valor positivo.
    cout << strcmp("Jeronimo", "Jeronimo") << endl; // Como cad1 es igual a cad2, i es igual a cero.
}
