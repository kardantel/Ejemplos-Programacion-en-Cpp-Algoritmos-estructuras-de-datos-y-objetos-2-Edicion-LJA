//
//  main.cpp
//  Ejemplo 16.14 | Página 599 - Libro digital
//
//  Programa que demuestra el uso de manipuladores dec, oct y hex.
//
//  Created by Aerodron Colombia on 30/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
//#include <iomanip>    // Colocarlo es opcional.
using namespace std;


int main() {
    cout << "Valor hex de " << 40 << " en decimal es: "
         << hex << 40 << endl;
    cout << "Valor octal de " << hex << 34 << " en hexadecimal es: "
         << oct << 34 << endl;
    cout << dec << endl; // Se restablece la numeración decimal
}
