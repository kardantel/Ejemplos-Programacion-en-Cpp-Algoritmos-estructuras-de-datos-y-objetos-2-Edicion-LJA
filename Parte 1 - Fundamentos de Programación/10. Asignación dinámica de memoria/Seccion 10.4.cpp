//
//  main.cpp
//  Seccion 10.4 | Página 379 - Libro digital.
//
//  Asignación dinámica de una cadena de caracteres
//
//  Created by Aerodron Colombia on 6/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int tama_cadena;
    char *p;
    cout << "¿Cuántos caracteres se asignan?: ";
    cin >> tama_cadena;
    cin.ignore(1);
    p = new char[tama_cadena];
    strcpy(p, "Carchel también está en Sierra Magina");
    cout << p << endl;
    delete p;
    cout << "Pulse Intro para continuar";
    cin.get();
}
