//
//  main.cpp
//  Problema Resuelto 5.4 | Página 214 - Libro digital.
//
//  Programa que muestra esta secuencia de números:
//  ...
//  1 2 3 4 5 6
//  1 2 3 4 5
//  1 2 3 4
//  1 2 3
//  1 2
//  1
//  Ingresando como variable el número más grande.
//
//  Created by Aerodron Colombia on 28/02/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>

using namespace std;

int num_mayor;
int n = 0;

int main() {
    cout << "Ingrese el número mayor que desea ver: ";
    cin >> num_mayor;
    for (int i = 1; i <= num_mayor; i++) {
        for (int j = 1; j <= (num_mayor - n); j++) {
            cout << j << "\t";
        }
        n++;
        cout << endl;
    }
    return 0;
}
