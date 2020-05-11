//
//  main.cpp
//  Ejemplo 7.4 | Página 285 - Libro digital
//
//  Programa que rellena con datos una lista.
//
//  Created by Aerodron Colombia on 8/8/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

// constantes y variables globales
const int MAX = 10;
int Muestra[MAX];

int main() {
    cout << "Introduzca una lista de " << MAX << " elementos y pulse la tecla Intro(ENTER) después de cada entrada:\n";
    for (int i = 0; i < MAX; ++i) {
        cin >> Muestra[i];
    }
    for (int i = 0; i < 10; i++) {  // For para mostrar los valores de la lista.
        cout << Muestra[i] << " ";
    }
    cout << endl;
    return 0;
}
