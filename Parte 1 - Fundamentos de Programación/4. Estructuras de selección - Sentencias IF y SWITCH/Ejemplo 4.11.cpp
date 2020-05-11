//
//  main.cpp
//  Ejemplo 4.11 | Página 94
//
//  Programa que compara el uso de sentencia IF-ELSE con operador '?:'
//
//  Created by Aerodron Colombia on 8/1/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    float n1, n2;
    cout << "Intoroduzca 2 números enteros P o N: ";
    cin >> n1 >> n2;
    // Uso de IF-ELSE:
    cout << "Uso de IF-ELSE:\n";
    if (n1 > n2) {
        cout << n1 << " > " << n2 << "\n";
    } else {
        cout << n2 << " > " << n1 << "\n";
    }
    // Operador condicional '?:':
    cout << "Uso del operador condicional '?:':\n";
    n1 > n2 ? cout << n1 << " > " << n2 << "\n" : cout << n2 << " > " << n1 << "\n";
    return 0;
}
