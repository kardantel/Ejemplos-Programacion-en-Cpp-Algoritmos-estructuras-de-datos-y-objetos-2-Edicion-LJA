//
//  main.cpp
//  Ejercicio 5.2 \ Página 196 - Libro digital
//
//  Aplicación simple de un bucle WHILE: seleccionar una opción de saludo al usuario dentro de un progama.
//
//  Created by Aerodron Colombia on 8/2/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    char opcion;
    do {
        cout << "¡Hola!\n";
        cout << "¿Desea otro tipo de saludo?\n";
        cout << "Pulse s para SI y n para NO.\n";
        cout << "Y acontinuación pulse intro: ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');
    cout << "¡Adios!\n";
    return 0;
}
