//
//  main.cpp
//  Ejemplo 7.10.1 | Página 299 - Libro digital
//
//  Programa que utiliza la función 'burbuja' para ordenar, por el método de la burbuja, del array Lista, que es el parámetro de entrada/salida.
//
//  Created by Aerodron Colombia on 8/9/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

const int t = 10;
void burbuja(float lista[], const int t);
void imprimirArray(float lista[], const int t);

int main() {
    //float lista[t] = {25.5, 34.1, 27.6, 15.24, 3.27, 5.14, 6.21, 7.57, 4.61, 5.4};
    float lista[t] = {5, 6, 4, 7, 3, 8, 2, 9, 1, 10};
    burbuja(lista, t);
    imprimirArray(lista, t);
}

void burbuja(float lista[], const int t) {
// lista[], parámetro de entrada/salida
// n, parámetro de entrada, número de elementos
    int i,  //
    paso,   //número de pasadas a través del array
    aux,    //variable auxiliar utilizada en el intercambio
    ordenado;   //variable que implica si el orden es correcto
    paso = 1;
    do {
        ordenado = 1;   // se supone que el array está ordenado hasta que se encuentra una pareja desordenada
        for (i = 0; i < t-paso; ++i) { //Realiza una pasada a través de elementos desordenados
            if (lista[i] > lista[i+1]) {    //El símbolo > ordena de mayor a menor.
                // Intercambio de parejas de variables desordenadas
                aux = lista[i];
                lista[i] = lista[i+1];
                lista[i+1] = aux;
                ordenado = 0;
            }
        }
        ++paso;
    } while (!ordenado);
}

void imprimirArray(float lista[], const int t) { //Aquí el valor de 'n' no cambia porque es constante.
    cout << "Mostrando array ordenado..." << endl;
    cout << "{ ";
    for (int i = 0; i < t; i++) {
        //cout << lista[i] << endl;
        cout << lista[i] << " ";
    }
    cout << "}" << endl;
}
