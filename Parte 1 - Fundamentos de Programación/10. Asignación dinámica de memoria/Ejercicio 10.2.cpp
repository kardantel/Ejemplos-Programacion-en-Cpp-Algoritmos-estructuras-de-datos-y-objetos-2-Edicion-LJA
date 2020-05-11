//
//  main.cpp
//  Ejercicio 10.2 | Página 381 - Libro digital
//
//  Programa que reserva memoria para una estructura; rellena sus campos, visualiza y libera la memoria reservada.
//
//  Created by Aerodron Colombia on 6/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

struct ficha_p {
    int numero;
    char nombre [30];
};

int main (void) {
    struct ficha_p *unaficha;   // Se crea el puntero 'unaficha' a la estructura 'ficha_p'.
    unaficha = new struct ficha_p;  // Se reserva memoria de la estructura 'ficha_p' en la variable puntero.
    cout << "Introduzca el número de cliente: " ;
    cin >> unaficha -> numero;
    cout << "Introduzca un nombre: ";
    cin >> unaficha -> nombre;
    cout << "\nNúmero: " << unaficha -> numero;
    cout << "\nNombre: " << unaficha -> nombre << endl;
    delete unaficha;    // Se libera memoria del puntero 'unaficha'.
}
