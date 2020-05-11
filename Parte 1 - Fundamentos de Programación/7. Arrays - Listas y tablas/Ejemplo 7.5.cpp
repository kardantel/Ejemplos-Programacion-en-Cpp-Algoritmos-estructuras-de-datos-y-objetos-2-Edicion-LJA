//
//  main.cpp
//  Ejemplo 7.5 | Página 285 - Libro digital
//
//  Programa que visualiza un array después de introducir datos en el mismo.
//
//  Created by Aerodron Colombia on 8/8/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

// constantes y variables globales
const int MAX = 100;
int Muestra[MAX];

int main() {
    for (int i = 0; i < MAX; ++i)
        Muestra[i] = i * i;
    for (int i = 0; i < MAX; ++i)
        cout << Muestra[i] << '\t';
    cout << endl;
}
