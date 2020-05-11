//
//  main.cpp
//  Problema 5.15 | Página 213 - Libro digital
//
//  Programa que muestra esta figura:
//  *
//  **
//  ***
//  ****
//  *****
//  ...
//  Ingresando como variable la cantidad de filas. Además muestra la cantidad de elementos que forman la figura.
//
//  Created by Aerodron Colombia on 28/02/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int lineas;
int n = 0;

int main() {
    cout << "Ingrese la cantidad de filas que desea ver: ";
    cin >> lineas;
    for (int i = 1; i <= lineas; i++) {
        for (int j = 0; j < i; n++, j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << "Figura formada con " << n << " elementos." << endl;
    return 0;
}
