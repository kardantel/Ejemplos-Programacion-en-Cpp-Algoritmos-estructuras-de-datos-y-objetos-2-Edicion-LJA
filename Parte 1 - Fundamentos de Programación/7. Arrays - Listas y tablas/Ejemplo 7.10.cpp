//
//  main.cpp
//  Ejemplo 7.10  | Página 298 - Libro digital
//
//  Programa que ordena una lista de números reales y a continuación los imprime.
//
//  Created by Aerodron Colombia on 8/9/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

// prototipos
void imprimir(float a[], const int n);
void ordenar(float a[], const int n);
void intercambio(float&, float&);

int main() {
    float a[10] = {25.5, 34.1, 27.6, 15.24, 3.27, 5.14, 6.21, 7.57, 4.61, 5.4};
    imprimir(a, 10);
    ordenar(a, 10);
    imprimir(a, 10);
}
void imprimir(float a[], const int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << ", ";
        //if ((i + 1) % 16 == 0) cout << endl;
    }
    cout << endl;
}
// ordenar burbuja
void ordenar(float a[], const int n) {
    float aux;
    for (int i = n; i < 0; i--) {
        //cout << "hola";
        for (int j = 0; j < i; j++) {
            cout << i;
            //if (a[j] > a[j+1]) intercambio(a[j], a[j+1]);
            if (a[j] > a[j+1]) {
                aux = a[i];
                a[i] = a[i+1];
                a[i+1] = aux;
            }
        }
    }
}
void intercambio(float& x, float& y) {
    float aux = x;
    x = y;
    y = aux;
}
