//
//  main.cpp
//  Ejercicio 8.2.1 | Página 330 - Libro digital
//
//  Programa que extrae el tamaño de una estructura (struc) y una unión (unión) con miembros iguales.
//
//  Created by Aerodron Colombia on 12/11/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

// declarar una unión TipoUnión
union TiposUnion {
    char c;
    int i;
    float f;
    double d;
};
// declarar una estructura TipoEstructura
struct TiposEstructura {
    char c;
    int i;
    float f;
    double d;
};

int main() {
    // Se visualiza el tamaño en bytes de cada bloque.
    cout << "Tamaño 'TiposStructura': " << sizeof(TiposEstructura) << ' ' << "bytes" << endl;
    cout << "Tamaño 'TiposUnion': " << sizeof(TiposUnion) << ' ' << "bytes" << endl;
    if (sizeof(TiposEstructura) > sizeof(TiposUnion)) {
        cout << "Esto demuestra que usar una estructura 'union' ahorra más espacio en el disco." << endl;
    } else {
        cout << "Esto demuestra que usar una estructura 'struct' ahorra más espacio en el disco." << endl;
    }
}
