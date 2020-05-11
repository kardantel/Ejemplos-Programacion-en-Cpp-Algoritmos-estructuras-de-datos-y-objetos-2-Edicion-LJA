//
//  main.cpp
//  Ejercicio 8.2 | Página 330 - Libro Digital
//
//  El siguiente programa muestra el uso de la enumeración 'enum Boolean'.
//
//  Created by Aerodron Colombia on 11/11/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream> // E/S de C++
using namespace std;

// enumeración boolean
enum Boolean {
    FALSE, TRUE
};
// la función Vocal devuelve TRUE si se pasa una vocal a una función y devuelve FALSE en caso contrario
Boolean Vocal (char c) {
    switch (c)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return TRUE;
        default:
            return FALSE;
    }
}

int main() {
    char car;
    do {
        cout << "introduzca una letra consonante para fin: ";
        cin >> car;
    } while (Vocal (car));
}
