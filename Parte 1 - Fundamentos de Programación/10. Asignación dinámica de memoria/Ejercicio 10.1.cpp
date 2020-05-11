//
//  main.cpp
//  Ejercicio 10.1 | Página 380 - Libro digital.
//
//  Reserva de memoria para tipos reales (double) y al que se le asigna un valor 4.5
//
//  Created by Aerodron Colombia on 6/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
//#include <cstring>    // Función strlen que en Xcode no es necesario usar.
using namespace std;

int main() {
    char cad[] = "Mi pueblo es Bucaramanga en Santander.";
    unsigned long lon = strlen(cad);    // Obtiene longitud de cad.
    char * p;   // Puntero a char.
    p = new char [lon+1];   // Memoria a 'cad' + '\0'
    strcpy (p, cad);    // Copia 'cad' a 'p'.
    cout << "p = " << p << endl;    // 'p' está ahora en 'cad'.
    delete [] p;    // Se borra el espacio de memoria utilizada por el puntero 'p' pero no se elimina el puntero.
    return 0;
}
