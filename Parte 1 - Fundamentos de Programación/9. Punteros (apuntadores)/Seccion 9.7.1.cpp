//
//  main.cpp
//  Sección 9.7.1 Punteros frente a arrays | Página 348 - Libro digital
//
//  Programa que implementa una función para contar el número de caracteres de una cadena. En el primer programa la cadena se describe utilizando un array; y en el segundo, se describe utilizando un puntero.
//
//  Created by Aerodron Colombia on 13/11/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

// Implementación con un array
/*
int longitud(const char cad[ ]); // Se declara la función 'longitud'.

int main() {
    static char cad[ ] = "Universidad Pontificia";
    cout << "La longitud de '" << cad << "' es de " << longitud(cad) << " caracteres." << endl;
}

int longitud(const char cad[ ]) {
    int posicion = 0;
    while (cad[posicion] != '\0') { // '\0' es la marca de Final del array de caracteres. El While se ejecuta hasta que llega a la posición final del array y se sale.
        posicion++;
    }
    return posicion;
}
*/

// Implementación un puntero para contar los caracteres de la cadena.
int longitud(const char*); // Se declara la función 'longitud' utilizando un puntero.

int main() {
    static char cad[ ] = "Universidad Pontificia";
    cout << "La longitud de '" << cad << "' es de " << longitud(cad) << " caracteres." << endl;
}

int longitud(const char* cad) {
    int cuenta = 0;
    while (*cad++) cuenta++;    // *cad++ es la variable puntero al array cad[] que aumenta en 1 la posición de la cadena de caracteres y el While se ejecuta hasta que llega al final (detecta '\0') en dicha cadena. Se explica mejor en Ejemplo 9.5, página 350, libro digital.
    return(cuenta);
}
