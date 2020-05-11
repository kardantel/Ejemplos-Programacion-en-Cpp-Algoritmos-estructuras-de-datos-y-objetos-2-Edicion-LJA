//
//  main.cpp
//  Ejercicio 15.1 | Página 542 - Libro digital
//
//  Programa que muestra el funcionamiento completo de una plantilla de función que realiza el intercambio de los valores de dos variables.
//
//  Created by Aerodron Colombia on 23/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;
//definir una plantilla de función, intercambio
template <class T>
void intercambio (T& v1, T& v2) {
    T aux;
    aux = v1;
    v1 = v2;
    v2 = aux;
}

int main() {
    int numero1 = 5, numero2 = 8;
    cout << "valores originales: " << numero1 << " y " << numero2 << endl;
    intercambio (numero1, numero2);
    cout << "valores intercambiados: " << numero1 << " y " << numero2 << endl;
    //intercambio de caracteres
    char car1 = 'L' , car2 = 'J' ;
    cout << "valores especiales: " << car1 << " " << car2 << endl;
    intercambio (car1, car2);
    cout << "valores intercambiados: " << car1 << " " << car2 << endl;
    return 0;
}
