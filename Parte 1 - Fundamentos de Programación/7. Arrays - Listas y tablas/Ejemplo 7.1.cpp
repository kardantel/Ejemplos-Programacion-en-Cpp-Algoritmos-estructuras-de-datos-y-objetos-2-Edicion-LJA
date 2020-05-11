//
//  main.cpp
//  Ejemplo 7.1 | Página 279 - Libro digital
//
//  Programa que obtiene las edades de 10 alumnos, las almacena en un ARRAY y las visualiza en el mismo orden.
//
//  Created by Aerodron Colombia on 8/8/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int edad[10]; //arreglo de 10 enteros
    for (int i = 0; i < 10; i++) {  // For para introducir los valores a la lista.
        cout << "Introduzca edad del alumno: ";
        cin >> edad[i];
    }
    for (int i = 0; i < 10; i++) {  // For para mostrar los valores de la lista.
        cout << "las edades son " << edad[i] << endl;
    }
    return 0;
}
