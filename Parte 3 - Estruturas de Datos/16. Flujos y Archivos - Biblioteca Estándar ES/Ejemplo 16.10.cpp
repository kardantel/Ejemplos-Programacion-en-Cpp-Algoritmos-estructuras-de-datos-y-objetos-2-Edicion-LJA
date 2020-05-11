//
//  main.cpp
//  Ejemplo 16.10 | Página 592 - Libro digital
//
//  Lectura de caracteres de forma grupal de una cadena de caracteres con la función cin.get() como paso por referencia.
//
//  Created by Aerodron Colombia on 30/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    char c;
    while (cin.get(c))
        cout << c;
    cout << endl;
}
