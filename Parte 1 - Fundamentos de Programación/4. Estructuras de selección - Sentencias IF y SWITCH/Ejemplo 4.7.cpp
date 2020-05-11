//
//  main.cpp
//  Ejemplo 4.7 | Página 159 - Libro digital
//
//  Programa que comprueba si un número es mayor, menor o igual a cero con IF anidadas (else-if).
//
//  Created by Aerodron Colombia on 8/1/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Introduzca un número positivo o negativo: ";
    cin >> a;
    if (a > 0) {
        cout << a << " es mayor que cero.\n";
        cout << "Pruebe de nuevo: introduzca un número negativo.\n";
    } else if (a < 0) {
        cout << a << " es menor que cero.\n";
        cout << "Pruebe de nuevo introduciendo un número positivo.\n";
    }
    else {
        cout << a << " es igual a cero.\n";
        cout << "¿Porqué no introduces un número negativo?\n";
    }
    return 0;
}

/*
// Otra forma de IF anidados:
int main() {
    int a;
    cout << "Introduzca un número positivo o negativo: ";
    cin >> a;
    if (a > 0) {
        cout << a << " es mayor que cero.\n";
        cout << "Pruebe de nuevo: introduzca un número negativo.\n";
    } else {
        if (a < 0) {
            cout << a << " es menor que cero.\n";
            cout << "Pruebe de nuevo introduciendo un número positivo.\n";
        }
        else {
            cout << a << " es igual a cero.\n";
            cout << "¿Porqué no introduces un número negativo?\n";
        }
    }
    return 0;
}
*/
