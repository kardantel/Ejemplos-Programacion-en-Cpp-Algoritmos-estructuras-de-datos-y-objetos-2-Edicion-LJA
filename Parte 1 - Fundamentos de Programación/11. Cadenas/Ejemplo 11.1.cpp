//
//  main.cpp
//  Ejemplo 11.1 | Ejemplo 11.1 - Libro digital
//
//  Programa que muestra que el caracter NULL ('\0') se añade a la cadena.
//
//  Created by Aerodron Colombia on 10/12/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;
/*
int main() {
    char S[] = "ABCD";
    for (int i = 0; i < 5; i++)
        cout << "S[" << i << "] = '" << S[i] << "'\n";
}
*/
int main() {
    char S[] = "ABCD";
    for (int i = 0; i < 5; i++)
        if (i != 4) {
            cout << "S[" << i << "] = '" << S[i] << "'\n";
        } else {
            cout << "S[" << i << "] = '" << S[i] << "' <- Caracter NULL al final de la cadena.\n";
        }
}
