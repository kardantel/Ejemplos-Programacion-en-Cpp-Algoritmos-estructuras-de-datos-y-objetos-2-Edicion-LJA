//
//  main.cpp
//  Ejemplo 16.15 | Página 599 - Libro digital
//
//  Programa que demuestra el uso de manipuladores dec, oct y hex.
//
//  Created by Aerodron Colombia on 30/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    const int n = 100;
    cout << "Dec" << "\t\t"
         << "Oct" << "\t\t"
         << "Hex" << endl;
    // visualizar los resultados en distintas bases
    cout << n << "\t\t"
         << oct << n << "\t\t"
         << hex << n << endl;
}
