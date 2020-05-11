//
//  main.cpp
//  Sección 10.5.1 | Página 382 - Libro digital.
//
//  Demuestra la asignación de memoria interactivamente. Cuando se ejecuta el programa, se pide al usuario teclear el tamaño de un array, para imprimir el array que contiene el número de números consecutivos que se han solicitado.
//
//  Created by Aerodron Colombia on 6/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    cout << "¿Cuántas entradas de su array? ";
    int lon;
    cin >> lon;
    int* miArray = new int[lon];
    for (int n = 0; n < lon; n++)
        miArray[n] = n + 1; // En principio se guarda el valor de 1 en miArray[0]; 2 en miArray[1] y así...-
    for (int n = 0; n <= lon; n++)  // Se usa '<=' para que imprima el número de entradas del array.
        cout << '\n' << miArray[n];
    delete [] miArray;
    return 0;
}
