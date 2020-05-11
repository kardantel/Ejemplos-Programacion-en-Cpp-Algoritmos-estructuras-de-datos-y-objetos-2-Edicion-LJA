//
//  main.cpp
//  Ejemplo 6.3 | Página 226 - Libro digital
//
//  Programa que calcula el promedio de 2 números usando funciones.
//
//  Created by Aerodron Colombia on 8/7/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

double media(double x1, double x2) {
    return (x1 + x2)/2;
}

int main() {
    double num1, num2, med;
    cout << "Incerte 2 números cuales quiera: ";
    cin >> num1 >> num2;
    med = media(num1, num2);
    cout << "La media es " << med << endl;
    //return 0; //Es indiferente para el resultado del programa si se coloca o no, la sentencia 'return 0;'
}
