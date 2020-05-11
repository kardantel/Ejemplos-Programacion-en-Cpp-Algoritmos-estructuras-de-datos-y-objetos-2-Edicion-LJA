//
//  main.cpp
//  Ejemplo 10.6 | Página 387 - Libro digital
//
//  El siguiente programa ejecuta un bucle que consume memoria en incrementos de 10.000 bytes, hasta que se agota la memoria. Entonces, se detiene la asignación de memoria y se visualiza la cantidad total de memoria actualmente asignada y se imprime el mensaje "Almacenamiento libre vacío".
//
//  Created by Aerodron Colombia on 6/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;
#include <stdlib.h>
#include <new.h>

int agotada_mem(size_t tamanyo);

int main() {
    set_new_handler(agotada_mem);
    long total = 0;
    while (1) {
        char *EspMem = new char[10000];
        total += 10000;
        cout << "Gasto de 10000 bytes" << total << endl;
    }
}

int agotada_mem(size_t tamanyo) {
    cerr << "\n Almacenamiento libre vacío \n";
    exit(1);
    return 0;
}
