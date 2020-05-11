//
//  main.cpp
//  Ejemplo 6.5 | Página 236 - Libro digital
//
//  Programa que, al igual que el Ejemplo 6.5, muestra cómo se asignan valores por omisión a valores parámetro.
//
//  Created by Aerodron Colombia on 8/7/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

void escribir_char(char c, int num = 1, bool lineas_independientes = false){
    for (int i = 0; i < num; i++) {
        cout << c;
        if (lineas_independientes) {
            cout << endl;
        }
    }
}

int main() {
    escribir_char('x');     // Escribe una sola x porque valor por defecto en función es num = 1.
    cout << endl;
    escribir_char('#', 5);  // Escribe 5 veces el caracter en la mísma línea pq x defecto es 'false'.
    cout << endl;
    escribir_char('%', 5, true);    // Escribe cinco caracteres, cada uno en líneas independientes
    cout << endl;
    cout << "Pulse Enter para continuar.";
    cin.get();
    return 0;
}
