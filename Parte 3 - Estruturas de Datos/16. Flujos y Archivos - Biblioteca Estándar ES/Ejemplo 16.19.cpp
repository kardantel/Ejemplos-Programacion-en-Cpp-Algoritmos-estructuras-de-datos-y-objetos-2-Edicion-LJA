//
//  main.cpp
//  Ejemplo 16.19 | Página 605 - Libro digital
//
//
//
//  Created by Aerodron Colombia on 30/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;
#include <iomanip>

int main() {
    const float p = 3.14159;
    // Visualizar números reales con diversos manipuladores
    cout << setiosflags(ios::showpos|ios::scientific)   // showpos: Visualiza números enteros positivos precedidos del signo +. scientific: Notación científica en los números en coma flotante.
         << "El valor de PI es"
         << setprecision(3) // Muestra 3 dígitos decimales del número.
         << setw(15) << setfill('*')    // Configura la salida para 15 espacios y rellena el resto con '*'.
         << setiosflags(ios::right) // Los datos se alinean a la derecha.
         << p << endl;
}
