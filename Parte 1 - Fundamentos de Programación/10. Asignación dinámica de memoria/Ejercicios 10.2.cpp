//
//  main.cpp
//  Ejercicios 10.2
//
//  Created by Aerodron Colombia on 6/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    double suma = 0;
    double* pd;
    cout << "Introduzca los 10 elementos." << endl;
    pd = new double [10]; //4 elementos double
    for (int i = 0; i < 10; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> pd[i];
        suma += pd[i];
    }
    cout << "Elementos introducidos: ";
    for (int i = 0; i < 10; i++)
        cout << pd[i] << " " ;
    cout << endl;
    cout << "Total: " << suma << endl;
    delete [] pd; //Liberación espacio de n enteros
    return 0;
}

