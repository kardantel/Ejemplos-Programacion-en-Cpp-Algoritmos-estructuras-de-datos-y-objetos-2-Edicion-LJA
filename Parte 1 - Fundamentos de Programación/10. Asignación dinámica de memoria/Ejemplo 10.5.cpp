//
//  main.cpp
//  Ejemplo 10.5 | Página 387 - Libro digital
//
//  Gestión de desbordamiento de memoria: set_new_handler()
//
//  Created by Aerodron Colombia on 6/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    void desborde();
    set_new_handler (desborde);
    long tamanyo;
    int *dir;
    int nbloque;
    cout << "¿Tamaño (longitud) deseado?";
    cin >> tamanyo;
    for (nbloque = 1; ; nbloque++) {
        dir = new int[tamanyo];
        cout << "Asignación bloque número:" << nbloque << endl;
    }
}

void desborde() {
    cout << "Memoria insuficiente-parar ejecución" << endl;
    exit(1);
}
