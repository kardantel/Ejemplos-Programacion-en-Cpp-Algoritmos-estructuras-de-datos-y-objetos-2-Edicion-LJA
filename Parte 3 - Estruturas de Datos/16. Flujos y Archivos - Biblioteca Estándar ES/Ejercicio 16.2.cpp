//
//  main.cpp
//  Ejercicio 16.2 | Página 608 - Libro digital
//
//  El siguiente programa lee un archivo especificado por el usuario y escribe su contenido en la salida estándar.
//
//  Created by Aerodron Colombia on 30/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    cout << "nombre archivo: ";
    char nombre_arch[80];
    cin >> nombre_arch;
    // abrir un archivo copy.sal para entrada
    ifstream ArchEn (nombre_arch);
    if (!ArchEn) {
        cerr << "Incapaz abrir archivo de entrada: "
             << nombre_arch << ". Precaución de salida.\n";
        return (-1);
    }
    char car;
    while (ArchEn.get(car))
        cout.put (car);
    return 0;
}
