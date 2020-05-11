//
//  main.cpp
//  Problema 4.2 | Página 173 - Libro digital
//
//  Programa que determina si un año es bisiesto.
//
//  Created by Aerodron Colombia on 26/02/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int anio;
    cout << "Introduzca un año: ";
    cin >> anio;
    if (anio % 100 == 0) {
        if (anio % 400 == 0) {
            cout << "El anio " << anio << " es bisiesto." << endl;
        } else {
            cout << "El anio " << anio << " NO es bisiesto." << endl;
        }
    } else if (anio % 4 == 0) {
        cout << "El anio " << anio << " es bisiesto." << endl;
    }
    else {
        cout << "El anio " << anio << " NO es bisiesto." << endl;
    }
    return 0;
}
