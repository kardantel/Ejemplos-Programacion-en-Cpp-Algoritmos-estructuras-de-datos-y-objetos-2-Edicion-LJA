//
//  main.cpp
//  Ejercicio 10.4 | Página 392 - Libro digital
//
//  Aplicación práctica de uso de una memoria dinámica; Asignación dinámica de un array con el tamaño solicitado por el usuario; Almacenamiento de valores, en el array, introducidos por el usuario; Visualización de los valores del array y cálculo de su media aritmética.
//
//  Created by Aerodron Colombia on 6/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int suma = 0;
    int n;
    int *p;
    cout << "Introduzca número de elementos: ";
    cin >> n;
    p = new int [n]; //asignación de n enteros
    for (int i = 0; i < n; i++) {
        cout << "Introduzca elemento " << i + 1 << ": ";
        cin >> p[i];
        suma += p[i];
    }
    cout << "Elementos introducidos: ";
    for (int i = 0; i < n; i++)
        cout << p[i] << ", " ;
    cout << endl;
    cout << "Total: " << suma << endl;
    cout << "Media: " << (double) suma /n << endl;
    delete [] p; //Liberación espacio de n enteros
    return 0;
}
