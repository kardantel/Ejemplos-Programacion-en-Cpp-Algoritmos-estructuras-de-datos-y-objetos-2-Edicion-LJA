//
//  main.cpp
//  Ejemplo 6.7 | Página 247 - Libro digital
//
//  Programa que comprueba si la entrada es una letra V o una letra H.
//
//  Created by Aerodron Colombia on 29/02/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
#include <ctype.h>
using namespace std;

int main() {
    char resp; //respuesta del usuario
    cout << "¿Es un varón o una hembra (V/H): ?";
    cin.get(resp);
    resp = toupper(resp);   // Función toupper(): Convierte a letras mayúsculas.
    switch (resp) {
        case 'V':
            cout << "Es un enfermero. \n";
            break;
        case 'H':
            cout << "Es una maestra. \n";
            break;
        default:
            cout << "No es ni enfermero ni maestra. \n";
            break;
    }
    return 0;
}
