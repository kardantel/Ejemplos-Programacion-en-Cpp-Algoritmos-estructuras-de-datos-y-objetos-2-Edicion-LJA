//
//  main.cpp
//  Ejemplo 9.5 | Página 349 - Libro digital
//
//  Programa que
//
//  Created by Aerodron Colombia on 13/11/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int longitud(const char*); // Se declara la función 'longitud' utilizando un puntero.

int main() {
    static char alfa[ ] = "Universidad Pontificia";
    //static char alfa[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *p;
    p = &alfa[0];
    for (int i = 0; i < longitud(alfa); i++) {
        cout << *p;
        p = p+1;
    }
    cout << endl;
}

int longitud(const char *alfa) {
    int cuenta = 0;
    while (*alfa++) cuenta++;   // *cad++ es la variable puntero al array cad[] que aumenta en 1 la posición de la cadena de caracteres y el While se ejecuta hasta que llega al final (detecta '\0') en dicha cadena cadena).
    return(cuenta);
}
