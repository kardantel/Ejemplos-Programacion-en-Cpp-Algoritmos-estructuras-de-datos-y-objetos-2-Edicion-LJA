//
//  main.cpp
//  Ejemplo 5.7 | Página 196 - Libro digital
//
//  Este bucle se realiza mientras se introduzcan dígitos y se termina cuando se introduzca un carácter que no sea un dígito de '0' a '9'.
//
//  Created by Aerodron Colombia on 28/02/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int digito;
    do {
        cout << "Introduzca un dígito (0-9): ";
        cin >> digito;
    } while ((digito < '0') || ('9'< digito));
    cout << "Adios\n";
    return 0;
}
