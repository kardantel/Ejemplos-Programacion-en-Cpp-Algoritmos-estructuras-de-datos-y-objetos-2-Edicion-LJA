//
//  main.cpp
//  Ejemplo 11.17 - Ejemplo 11.18 - Ejemplo 11.19 | Página 418 - Libro digital
//
//  La función 'atoi' convierte una cadena de caracteres a un valor entero.
//  La función 'atof' convierte una cadena de caracteres a un valor de coma flotante.
//  La función 'atol' convierte una cadena de caracteres a un valor largo (long).
//
//  Created by Aerodron Colombia on 7/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    char cadena1[] = "453423";
    char cadena2[] = "453.423";
    char cadena3[] = "45743212";
    int valor1 = atoi(cadena1);
    float valor2 = atof(cadena2);
    long valor3 = atol(cadena3);
    cout << "Valor entero: " << valor1 << endl;
    cout << "Valor decimal: " << valor2 << endl;
    cout << "Valor entero largo: " << valor3 << endl;
}
