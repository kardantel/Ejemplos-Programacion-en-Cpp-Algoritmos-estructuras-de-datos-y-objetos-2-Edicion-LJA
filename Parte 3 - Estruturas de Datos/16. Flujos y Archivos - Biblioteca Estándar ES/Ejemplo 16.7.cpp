//
//  main.cpp
//  Ejemplo 16.7 | Página 589 - Libro digital
//
//  Programa que demuestra el uso de lectura de datos cadena.
//
//  Created by Aerodron Colombia on 30/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    char nombre[30];
    int edad;
    float salario;
    cout << "Introduzca nombre, edad y salario: \n";
    cin >> nombre >> edad >> salario;
    cout << "\nNombre: "
    << nombre
    << "\nEdad: "
    << edad
    << "\nSalario: "
    << salario
    << endl;
    return 0;
}
