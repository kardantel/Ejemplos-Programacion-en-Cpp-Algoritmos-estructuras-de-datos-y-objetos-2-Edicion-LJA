//
//  main.cpp
//  Ejemplo 16.17 | Página 602 - Libro digital
//
//  Programa que muestra el uso de la función setprecision() que, en Xcode, muestra el número de dígitos de cualquier nñumero digital incluyendo los números decimales. La función precision() no existe en Xcode.
//
//  Created by Aerodron Colombia on 30/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float prueba = 814.159265;
    cout << setprecision(5) // 5 dígitos del número
         << prueba << endl;
    cout << setprecision(6) // 6 dígitos del número
         << prueba << endl;
    cout << setprecision(7) // 7 dígitos del número
         << prueba << endl;
    cout << setprecision(8) // 8 dígitos del número
         << prueba << endl;
}
