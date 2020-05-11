//
//  main.cpp
//  Ejercicio 4.3 | Página 161 - Libro digital
//
//  Created by Aerodron Colombia on 8/1/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;
/*
int main() {
    int a, b, c, mayor;
    cout << "Introduzca tres números enteros positivos o negativos: ";
    cin >> a >> b >> c;
    if (a > b) {
        if (a > c) {
            mayor = a;
        } else {
            mayor = c;
        }
    } else {
        if (b > c) {
            mayor = b;
        } else {
            mayor = c;
        }
    }
    cout << "El número mayor es: " << mayor << endl;
    return 0;
}*/

// Otra forma más compacta de IF anidados:
int main() {
    int a, b, c, mayor;
    cout << "Introduzca tres números enteros positivos o negativos: ";
    cin >> a >> b >> c;
    if (a > b) {
        if (a > c) {mayor = a;}
        else {mayor = c;}
    } else {
        if (b > c) {mayor = b;}
        else {mayor = c;}
    }
    cout << "El número mayor es: " << mayor << endl;
    return 0;
}
