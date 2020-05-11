//
//  main.cpp
//  Ejemplo 8.3.1 | Página 324 - Libro digital
//
//  Programa que pasa una estructura a una función, utilizando el método de paso por valor.
//
//  Created by Aerodron Colombia on 11/11/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

// Definir el tipo estructura InfoPersona
struct InfoPersona {
    char nombre[30];
    char direccion[30];
    char ciudad[25];
    char departamento[25];
    char pais[25];
    char codigoPostal[9];
};

void verInfo(InfoPersona Datos) {
    cout << Datos.nombre << endl
    << Datos.direccion << endl
    << Datos.ciudad << ", " << Datos.departamento << ", " << Datos.pais << endl
    << Datos.codigoPostal << endl;
}

int main(void) {
    //Definir RegistroDatos como tipo estructura
    InfoPersona RegistroDatos = {"Carlos Daniel Pimentel Díaz","Carrera 22 # 90 - 28","Bucaramanga","Santander","Colombia","68001000"};
    verInfo(RegistroDatos);
    cout << "Pulsa Intro(Enter) para continuar";
    cin.get();
}
