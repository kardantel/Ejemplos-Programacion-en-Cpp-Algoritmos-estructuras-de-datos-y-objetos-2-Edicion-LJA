//
//  main.cpp
//  Ejemplo 10.4 | Página 379 - Libro digital
//
//  Programa que muestra la asignación dinámica de una cadena de caracteres.
//
//  Created by Aerodron Colombia on 6/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(void) {
    char *p;            // Se crea el puntero a caracter llamado 'p'.
    p = new char[80];   // Se separan 80 espacios tipo 'char' en memoria dinámica para el array y la dirección de la asignación se almacena en 'p'.
    strcpy(p, "Carchelejo está en la Sierra Magina");
    cout << p << endl;
    delete p;   // Se borra el espacio de memoria utilizada por el puntero 'p' pero no se elimina el puntero.
    cout << "Pulse Intro para continuar.";
    cin.get();
}
