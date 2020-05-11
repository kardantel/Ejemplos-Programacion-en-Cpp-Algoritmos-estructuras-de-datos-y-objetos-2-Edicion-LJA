//
//  main.cpp
//  Seccion 10.5 | Página 380 - Libro digital
//
//  Programa que demuestra la asignación de memoria para un array.
//
//  Created by Aerodron Colombia on 6/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int* Dias = new int[3]; // Se crea un puntero a entero llamado 'Dias' y se definen 3 espacios tipo 'int' en memoria dinámica para el array así como la dirección de la asignación se almacena en la varialbe puntero.
    Dias[0] = 22;
    Dias[1] = 12;
    Dias[2] = 1620;
    cout << "Bucaramanga fue fundada el "
         << Dias[0] << "/"
         << Dias[1] << "/"
         << Dias[2] << endl;
    delete [] Dias; // Libera memoria
    return 0;
}
