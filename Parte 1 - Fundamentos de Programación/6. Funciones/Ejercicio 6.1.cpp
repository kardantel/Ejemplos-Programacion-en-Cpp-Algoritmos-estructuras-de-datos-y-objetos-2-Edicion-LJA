//
//  main.cpp
//  Ejercicio 6.1 | Página 238 - Libro digital
//
//  Programa que calcula el volumen de un cono usando funciones en línea (inline).
//
//  Created by Aerodron Colombia on 8/7/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

const float pi = 3.141592;

inline float VolCono(float radio, float altura) {
    return (pi * pow(radio, 2) * altura)/3;
}

int main() {
    float radio, altura, volumen;
    cout << "Introduzca el radio del cono: ";
    cin >> radio;
    cout << "Introduzca la altura del cono: ";
    cin >> altura;
    volumen = VolCono(radio, altura);
    cout << "El volumen del cono es: " << volumen << endl;
    return 0;
}
