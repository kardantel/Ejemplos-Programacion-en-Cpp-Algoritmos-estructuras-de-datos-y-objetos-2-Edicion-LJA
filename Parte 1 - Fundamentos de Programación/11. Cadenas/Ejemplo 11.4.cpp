//
//  main.cpp
//  Ejemplo 11.4 | Página 403 - Libro digital
//
//  Programa que cuenta las ocurrencias de las letras 't' y 'T' en el flujo de entrada.
//
//  Created by Aerodron Colombia on 7/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    char car;
    int cuenta = 0;
    while (cin.get(car)) {
        if (car == 't' || car == 'T') {++cuenta;}
        else if (car == '0') {
            break;
        }
    }
    cout << "La frase tiene " << cuenta << " letras t.\n";
    return 0;
}
//Tato te trompeó la trompa con trampa tonto taradof
