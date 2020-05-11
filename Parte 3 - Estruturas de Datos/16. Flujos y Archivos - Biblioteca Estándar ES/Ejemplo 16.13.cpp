//
//  main.cpp
//  Ejemplo 16.13 | Página 598 - Libro digital
//
//  Este programa lee y escribe Nombre, Dirección y Teléfono del usuario.
//
//  Created by Aerodron Colombia on 30/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

/*
int main() {
    //Definición de arrays de caracteres
    char Nombre[40];
    char Calle[30];
    char Ciudad[30];
    char Provincia[30];
    char CodigoPostal[10];
    char Telefono[11];
    //Lectura de datos
    cin.getline(Nombre, 40);
    cin.getline(Calle, 30);
    cin.getline(Ciudad, 30);
    cin.getline(Provincia, 30);
    cin.getline(CodigoPostal, 10);
    cin.getline(Telefono, 11);
    //Visualizar datos
    cout << endl;
    cout << Nombre << endl;
    cout << Calle << endl;
    cout << Ciudad << endl;
    cout << Provincia << endl;
    cout << CodigoPostal << endl;
    cout << Telefono << endl;
}
*/

int main() {
    char Auxiliar[2];
    char Nombre[30];
    int Edad;
    cout << "Introduzca edad:";
    cin >> Edad; // Lectura de datos numéricos
    cout << Edad;
    cin.getline(Auxiliar, 2); // Limpiar buffer de teclado
    cout << "Introduzca el nombre:";
    cin.getline(Nombre, 30); // Leer datos de cadena
    cout << Nombre;
}
