//
//  main.cpp
//  Ejemplo 4.8 | Página 163 - Libro digital
//
//  Progama que indica si un caracter es una vocal o no por medio de la sentencia SWITCH.
//
//  Created by Aerodron Colombia on 8/1/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;
// Solución con Switch:
int main() {
    char car;
    cout << "Ingrese cualquier caracter: ";
    cin >> car;
    switch (car) {
        case 'a':   case 'A':
        case 'e':   case 'E':
        case 'i':   case 'I':
        case 'o':   case 'O':
        case 'u':   case 'U':
            cout << car << " es una vocal!\n";
            break;
        default:
            cout << car << " NO es una vocal!\n";
            break;
    }
    return 0;
}
// Solución con If-Else-If:
/*
int main() {
    char car;
    cout << "Ingrese cualquier caracter: ";
    cin >> car;
    if ((car == 'a') || (car == 'A')) {
        cout << "La letra " << car << ", es una vocal." << endl;
    } else if ((car == 'e') || (car == 'E')) {
        cout << "La letra " << car << ", es una vocal." << endl;
    } else if ((car == 'i') || (car == 'I')) {
        cout << "La letra " << car << ", es una vocal." << endl;
    } else if ((car == 'o') || (car == 'O')) {
        cout << "La letra " << car << ", es una vocal." << endl;
    } else if ((car == 'u') || (car == 'U')) {
        cout << "La letra " << car << ", es una vocal." << endl;
    } else {
        cout << "La letra " << car << ", no es una vocal" << endl;
    }
    return 0;
}
*/
