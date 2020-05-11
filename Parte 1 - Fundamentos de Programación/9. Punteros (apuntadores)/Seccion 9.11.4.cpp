//
//  main.cpp
//  Sección 9.11.4 | Página 362 - Libro digital
//
//  Programa que ilustra uso de punteros a funciones.
//
//  Created by Aerodron Colombia on 10/12/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

float sumar(float x, float y);  // Se declara la función 'sumar' con 2 argumentos de paso por valor tipo float.
float restar(float x, float y); // Se declara la función 'restar' con 2 argumentos de paso por valor tipo float.
float mult(float x, float y);   // Se declara la función 'mult' con 2 argumentos de paso por valor tipo float.
float div(float x, float y);    // Se declara la función 'div' con 2 argumentos de paso por valor tipo float.
float (*f) (float x, float y);  // Se declara el puntero 'f' a cada función anterior.

int main() {
    char signo, operadores[] = {'+', '-', '*', '/'};
    float (*func[])(float, float) = {sumar, restar, mult, div}; // Se declara un array de punteros a funciones 'func', donde cada miembro devuelve un tipo float con dos parámetros tipo float. Después del igual (=): asigna la dirección de las funciones ya declaradas al array.
    float x, y, z;
    cout << " <<Calculadora>>\n Expresión: ";
    cin >> x >> signo >> y;
    for (int i = 0; i < 4; i++) {   // 4 es el tamaño del array 'operadores'.
        if (signo == operadores[i]) {
            f = func[i];    // Se pasa la dirección de la función escogida al puntero 'f'.
            z = f(x, y);    // El puntero 'f' reemplaza la función escogida antes y el valor devuelto se guarda en variable 'z'.
            cout << " Resultado: ";
            cout << x << signo << y << " = " << z;
            cout << endl;
        }
    }
}

float sumar(float x, float y) {
    return x + y;
}
float restar(float x, float y) {
    return x - y;
}
float mult(float x, float y) {
    return x * y;
}
float div(float x, float y) {
    return x / y;
}
