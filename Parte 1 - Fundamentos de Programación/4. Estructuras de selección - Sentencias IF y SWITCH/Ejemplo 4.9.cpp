//
//  main.cpp
//  Ejemplo 4.9 | Página 164 - Libro digital
//
//  Programa que ilustra la sentencia SWITHC.
//
//  Created by Aerodron Colombia on 8/1/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    char nota;
    cout << "Ingrese la calificación (A - F): ";
    cin >> nota;
    switch (nota) {
        case 'A':   cout << "¡Excelente! Examen superado.\n";
            break;
        case 'B':   cout << "Notable. Suficiencia.\n";
            break;
        case 'C':   cout << "Aprobado.\n";
            break;
        case 'D':
        case 'F':   cout << "Suspendido.\n";
            break;
        default:    cout << "No es posible esta nota.\n";
            //break;
    }
    cout << "Fin del programa!\n";
    return 0;
}
