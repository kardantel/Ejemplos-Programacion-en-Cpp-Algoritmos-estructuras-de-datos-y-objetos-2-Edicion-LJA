//
//  main.cpp
//  Ejemplo 5.10 | Página 206 - Libro digital
//
//  Aplicación de bucles For anidados
//  Programa que demuestra el uso de bucles FOR anidados.
//
//  Created by Aerodron Colombia on 8/2/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream> //Necesario para cout y cin
#include <iomanip>  //Necesario para setw
using namespace std;

int main() {
    // Caberera de impresión
    cout << setw(12) << " i " << setw(5) << " j " << "\n";
    for (int i = 0; i < 4; i++) {
        cout << "Externo " << setw(3) << i << "\n";
        for (int j = 0; j < i; j++) {
            cout << setw(10) << "Interno " << setw(6) << j << "\n";
        }
    }   //Fin bucle externo
    return 0;
}
