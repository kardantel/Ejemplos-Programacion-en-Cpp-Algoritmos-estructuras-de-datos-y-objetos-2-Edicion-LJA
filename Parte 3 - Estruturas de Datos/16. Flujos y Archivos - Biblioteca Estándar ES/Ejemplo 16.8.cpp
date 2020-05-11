//
//  main.cpp
//  Ejemplo 16.8 | Página 590 - Libro digital
//
//  Lectura de caracteres de forma individual de una cadena de caracteres con la función cin.get() como paso por valor.
//
//  Created by Aerodron Colombia on 30/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    char c;
    while ((c = cin.get())!= EOF) { // EOF significa "end of file".
        cout << "c:" << c << endl;
    }
    cout << "La constante EOF finaliza con el valor de: " << EOF << endl;
    cout << "¡Programa terminado!\n";
    return 0;
}
