//
//  main.cpp
//  Ejemplo 7.11 | Página 301 - Libro digital
//
//  Programa que busca un elemento y la posición que ocupa en la lista o array.
//
//  Created by Aerodron Colombia on 8/12/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

// Ejemplo adaptado al estilo del programador.
#define LONG 9

void buscar(int& encontrado, int& posicion, int a[], int n, int destino);

int main() {
    int a[LONG]= {11, 22, 33, 44, 55, 66, 77, 88, 99}, destino, encontrado, pos;
    do {
        cout << "Destino: ";
        cin >> destino;
        buscar(encontrado, pos, a, LONG, destino);
        if (encontrado) {
            cout << destino << " está en a[" << pos << "].\n";
        } else {
            cout << destino << " no se encuentra.\n";
        }
    } while (destino != 0);
}
// Búsqueda lineal:
// En la función 'buscar' la variable 'n' recibe e indica el tamaño del array.
void buscar(int& encontrado, int& posicion, int a[], int n, int destino) {
    encontrado = posicion = 0;
    // El siguiente While pregunta si la variable 'encontrado' es cero; si sigue siendo cero, produce un Verdadero (1 lógico) o TRUE. Al mismo tiempo, pregunta si la variable 'posicion' es menor que el tamaño del array; si sigue siendo menor, produce un Verdadero (TRUE). Si ambas opciones son al mismo tiempo TRUE obliga a siguir realizando el bucle hasta que alguna de ellas produzca un FALSE: ya sea porque encontró el número o porque no lo encontró.
    while ((!encontrado) && (posicion < n)) {   // Mientras 'encontrado' sea igual a 0 Y(&&) 'posicion' sea menor que 'n' (menor al tamaño del array)...
        encontrado = (a[posicion++] == destino);    // ...compare el valor de la variable 'destino' con el valor actual del array. Si son diferentes, se sigue ejecutando el While porque 'encontrado' sigue siendo 0 (FALSE); si son iguales, 'encontrado' se hace TRUE (1) y eso hace que se salga del While.
    cout << posicion << " ";
    }
    --posicion;
}

/*
// Ejemplo tal cual como está en el libro digital.
void buscar(int& encontrado, int& posicion, int a[], int n, int destino);

int main() {
    int a[]= {25, 24, 65, 99, 77, 44, 33, 88, 66}, destino, encontrado, pos;
    do {
        cout << "Destino: ";
        cin >> destino;
        buscar(encontrado, pos, a, 9, destino);
        if(encontrado) cout << destino << " está en a[" << pos << "].\n";
        else cout << destino << " no se encuentra.\n";
    } while (destino != 0);
}
// Búsqueda lineal:
void buscar(int& encontrado, int& posicion, int a[], int n, int destino) {
    encontrado = posicion = 0;
    while (!encontrado && posicion < n)
        encontrado = (a[posicion++] == destino);
    --posicion;
}*/
