//
//  main.cpp
//  Ejemplo Sección 6.4.3 | Página 232 - Libro digital
//
//  Aplicación de la diferencia entre los parámetros por valor y por referencia.
//
//  Created by Aerodron Colombia on 29/02/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

void intercambio1(int, int);
void intercambio2(int&, int&);

int main() {
    int a, b;
    a = 10; b = 20;
    intercambio1(a, b);
    cout << a << " " << b << endl;
    intercambio2(a, b);
    cout << a << " " << b << endl;
}

void intercambio1(int primero, int segundo) {   // Función que pasa pasa parámetros por valor.
    int aux;
    aux = primero;
    primero = segundo;
    segundo = aux;
}

void intercambio2(int& primero, int& segundo) { // Función que pasa pasa parámetros por referencia.
    int aux;
    aux = primero;
    primero = segundo;
    segundo = aux;
}
