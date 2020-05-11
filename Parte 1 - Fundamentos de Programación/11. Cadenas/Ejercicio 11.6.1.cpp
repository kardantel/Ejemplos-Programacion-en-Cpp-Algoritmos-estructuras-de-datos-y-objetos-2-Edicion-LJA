//
//  main.cpp
//  Seccion 11.6.1 | Página 411 - Libro digital
//
//  Programa que usa la función strlen() para calcular el tamaño de una cadena.
//
//  Created by Aerodron Colombia on 7/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    char s[] = "ABCDEFG";
    cout << "strlen(" << s << ") = " << strlen(s) << endl;
    cout << "strlen(' " << "') = " << strlen("") << endl;
    char bufer[80];
    cout << "Introduzca cadena: "; cin >> bufer;
    cout << "strlen(" << bufer << ") = " << strlen(bufer) << endl;
}
