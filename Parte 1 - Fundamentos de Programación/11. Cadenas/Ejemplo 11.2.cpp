//
//  main.cpp
//  Ejemplo 11.2 | Página 401 - Libro digital
//
//  Entrada y salida de cadenas. Lectura de palabras en una memoria intermedia (bufer) de 79 caracteres. Al ejecutar este programa el número de veces que se repite el bucle while dependerá del número de palabras introducidas, incluido el carácter de control que termina el bucle (Control-D), ˆD).
//
//  Created by Aerodron Colombia on 7/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    char palabra[80];
    cout << "Introduzca cualquier frase:\n";
    do {
        cin >> palabra;
        if (*palabra) cout << "\t\"" << palabra << "\"\n";
    } while (*palabra);
}
