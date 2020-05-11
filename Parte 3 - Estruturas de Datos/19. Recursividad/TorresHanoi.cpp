//
//  TorresHanoi.cpp
//  Seccion 19.5.1 | Página 700 - Libro digital
//
//  Algoritomo que realiza el juego de las torres de Hanoi por medio de una función recursiva.
//  El número de movimientos se calcula como 2^N -1.
//
//  Created by Aerodron Colombia on 3/05/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

void Hanoi(char, char, char, int);

int main() {
    int N;
    cout << "Ingrese el número de discos: ";
    cin >> N;
    //mov = (pow(2,N)) - 1;
    Hanoi('A', 'C', 'B', N);
    cout << "La cantidad de movimientos fueron: " << pow(2,N) - 1 << endl;
    return 0;
}

void Hanoi(char varinicial, char varfinal, char varcentral, int n) {
    if (n == 1)
        cout << "Mover disco 1 de varilla " << varinicial << " a varilla " << varfinal << endl;
    else {
        
        Hanoi(varinicial, varcentral, varfinal, n - 1);
        cout << "Mover disco " << n << " de varilla " << varinicial <<" a varilla " << varfinal << endl;
        Hanoi(varcentral, varfinal, varinicial, n - 1);
    }
}
