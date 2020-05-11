//
//  main.cpp
//  Ejemplo 6.1 | Página 221 - Libro digital
//
//  Programa que utiliza la función 'cuadrado()' calcula los cuadrados de números enteros sucesivos a partir de un número cuadrado (n), parámetro de la función, hasta obtener un único cuadrado que sea mayor que 1000.
//
//  Created by Aerodron Colombia on 8/7/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

float cuadrado (float n) {    // Función llamada
    float cuadrado = 0;
    while (cuadrado <= 1000) {
        cuadrado = n*n;
        cout << "El cuadrado de " << n << " es " << cuadrado << endl;
        n++;
    }
    return 0;
}

int main() {
    float x;
    cout << "Ingrese cualquier numero (entero o decimal): ";
    cin >> x;
    cuadrado(x);    // Función llamadora
}

// Calcula la suma de un número dado (parámetros) de elementos de un array de datos.

/*
float suma (int num_elementos) {
    float total = 0;
    int Datos[] = {1,2,3,4,5,6,7,8,9,10};
    for(int indice = 0; indice <= num_elementos; indice++) {
        total += Datos[indice];    // Array de datos, cap.7
        //cout << "\nCasilla " << indice << " La suma de elementos del array es: " << total << endl;
    }
    return total;
}

int main () {
    int x;
    cout << "Ingrese la cantidad de datos del array (digite 9): ";
    cin >> x;
    //int vector[] = {1,2,3,4,5,6,7,8,9,10};
    //int x = (sizeof(vector)/sizeof(vector[0]));
    suma(x);
    cout << "\nLa suma de elementos del array es: " << suma(x) << endl;
    return 0;
}
*/
