//
//  main.cpp
//  Ejercicios 6.1 | Página 270 - Libro digital
//
//  Programa que tiene una función lógica llamada Dígito que determina si un carácter es un dígito de 0 a 9.
//
//  Created by Aerodron Colombia on 1/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
#include <ctype.h>
using namespace std;

char digito(char);

int main() {
    char num;
    cout << "Ingrese el número: ";
    cin >> num;
    digito(num);
    return 0;
}

char digito(char d) {
    if (isdigit(d)) {cout << d << " es un número entre 0-9." << endl;}
    else {cout << d << " NO es un número entre 0-9." << endl;}
    return 0;
}
