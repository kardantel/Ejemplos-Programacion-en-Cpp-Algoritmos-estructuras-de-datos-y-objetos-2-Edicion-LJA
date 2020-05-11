//
//  main.cpp
//  Seccion 11.2.1 | Página 403 - Libro digital
//
//  El siguiente programa lee y escribe el nombre, dirección y teléfono de un usuario.
//
//  Created by Aerodron Colombia on 7/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    char Nombre[32];
    char Direccion[32];
    char Ciudad[27];
    char Departamento[27];
    char CodigoPostal[15];
    char Telefono[15];
    // Leer cadenas nombre y dirección
    cout << "Ingrese sus datos personales.\n";
    cout << "Nombre: ";
    cin.getline(Nombre, sizeof(Nombre)+2);
    cout << "Dirección: ";
    cin.getline(Direccion, sizeof(Direccion)+2);
    cout << "Ciudad: ";
    cin.getline(Ciudad, sizeof(Ciudad)+2);
    cout << "Departamento: ";
    cin.getline(Departamento, sizeof(Departamento)+2);
    cout << "CodigoPostal: ";
    cin.getline(CodigoPostal, sizeof(CodigoPostal)+2);
    cout << "Telefono: ";
    cin.getline(Telefono, sizeof(Telefono)+2);
    // Visualizar cadenas nombre y dirección
    cout << "\nLos datos ingresados son:\n";
    cout << "Nombre: " << Nombre << endl;
    cout << "Direccion: " << Direccion << endl;
    cout << "Ciudad: " << Ciudad << endl;
    cout << "Departamento: " << Departamento << endl;
    cout << "CodigoPostal: " << CodigoPostal << endl;
    cout << "Telefono: " << Telefono << endl;
    return 0;
}
