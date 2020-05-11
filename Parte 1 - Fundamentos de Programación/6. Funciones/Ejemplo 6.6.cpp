//
//  main.cpp
//  Ejemplo 6.6 | Página 246 - Libro digital
//
//  Programa que solicita iniciales y comprueba que son correctas por medio de la función 'isalpha'.
//
//  Created by Aerodron Colombia on 8/7/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
#include <ctype.h>  // Esta función no hay necesidad de colocarla en Xcode.
using namespace std;

int main() {
    char inicial;
    cout << "¿Cuál es la letra de su primer nombre?: ";
    cin >> inicial;
    while (isalpha(inicial)) {  //Función 'isalpha': página 142.
        cout << "¡Caracter valido!\n";
        cout << "¿Cuál es su siguiente inicial?: ";
        cin >> inicial;
    }
    cout << "¡Caracter no válido! Programa Terminado.\n";
    return 0;
}
