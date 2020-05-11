//
//  main.cpp
//  Ejercicio 16.1 | Página 607 - Libro digital
//
//  El siguiente programa obtiene caracteres de la entrada estándar y los pone en el archivo copy.sal.
//
//  Created by Aerodron Colombia on 30/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <fstream>
#include <iostream>
using namespace std;

int main() {
    // abrir un archivo copi.sal para salida;
    ofstream archsal ("copi.sal");
    if (!archsal) { // apertura fallida
        cerr << "No se puede abrir copi.sal para salida:" << endl;
        return (-1);
    }
    char car;
    while (cin.get(car))
        archsal.put(car);
    return 0;
}
