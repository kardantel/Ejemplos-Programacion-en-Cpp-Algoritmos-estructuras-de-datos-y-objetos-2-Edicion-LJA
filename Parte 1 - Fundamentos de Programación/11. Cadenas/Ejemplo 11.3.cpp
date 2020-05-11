//
//  main.cpp
//  Ejemplo 11.3 | Página 402 - Libro digital
//
//
//
//  Created by Aerodron Colombia on 7/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    char nombre[80];
    cout << "Introduzca su nombre: ";
    cin.getline(nombre, sizeof(nombre)-2);
    cout << "Hola " << nombre << ", ¿cómo estás?" << endl;
    return 0;
}
