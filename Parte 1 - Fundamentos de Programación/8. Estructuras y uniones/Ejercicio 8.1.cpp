//
//  main.cpp
//  Ejercicio 8.1 | Página 320 - Libro digital
//
//  El siguiente programa muestra el uso de estructuras anidadas.
//
//  Created by Aerodron Colombia on 11/11/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

struct Fecha {
    unsigned int dia; // enteros positivos
    unsigned int mes;
    unsigned int anyo;
};

struct Persona {
    char nombre[20]; // entero positivo
    unsigned int edad;
    float altura;
    float peso;
    Fecha fec;
};

struct PersonaEmpleado {
    Persona persona;
    unsigned int salario;
    unsigned int horas_por_semana;
};

int main() {
    // definimos 'pe' como la variable de la estructura 'PersonaEmpleado'.
    PersonaEmpleado pe;
    // establecer miembros
    cout << "Introduzca su nombre: "; cin >> pe.persona.nombre;
    cout << "Introduzca su edad: "; cin >> pe.persona.edad;
    cout << "Introduzca su altura: "; cin >> pe.persona.altura;
    cout << "Introduzca su peso: "; cin >> pe.persona.peso;
    cout << "Introduzca su fecha de nacimiento.\n";
    cout << "Día: "; cin >> pe.persona.fec.dia;
    cout << "Mes: "; cin >> pe.persona.fec.mes;
    cout << "Año: "; cin >> pe.persona.fec.anyo;
    cout << "Introduzca su salario: ";
    cin >> pe.salario;
    cout << "Introduzca número de horas: ";
    cin >> pe.horas_por_semana;
    // salida
    cout << endl;
    cout << "Nombre: " << pe.persona.nombre << endl;
    cout << "Edad: " << pe.persona.edad << endl;
    cout << "Altura: " << pe.persona.altura << endl;
    cout << "Peso: " << pe.persona.peso << endl;
    cout << "Fecha de nacimiento: ";
    cout << pe.persona.fec.dia << "-" << pe.persona.fec.mes << "-" <<pe.persona.fec.anyo << endl;
    cout << "Salario: " << pe.salario << endl;
    cout << "Número de horas: " << pe.horas_por_semana << endl;
};
