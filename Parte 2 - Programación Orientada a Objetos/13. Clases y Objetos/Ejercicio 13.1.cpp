//
//  main.cpp
//  Ejercicio 13.1 | Página 476 - Libro digital
//
//  Programa que Define una clase 'DiaAnyo' que contiene los atributos día, mes y año; y una función miembro Visualizar. El mes se registra como un valor entero en mes (1, Enero, 2, Febrero, etc.). El día del mes se registra en la variable entera día, el año igual. Escribir un programa que haga uso de la clase y ver su salida.
//
//  Created by Aerodron Colombia on 9/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

class DiaAnyo {
    public:
    int mes;
    int dia;
    int anyo;
    void visualizar() {
        cout << dia << "/" << mes << "/" << anyo << endl;
    }
};

// programa que usa DiaAnyo
int main() {
    DiaAnyo hoy, cumpleanyos;   // Definición de objetos de la clase.
    cout << "Introduzca fecha del dia de hoy.\n";
    cout << " Introduzca el dia de hoy: ";
    cin >> hoy.dia;
    cout << " Introduzca el numero del mes: ";
    cin >> hoy.mes;
    cout << " Introduzca el año: ";
    cin >> hoy.anyo;
    cout << "\nIntroduzca su fecha de nacimiento.\n";
    cout << " Introduzca el dia: ";
    cin >> cumpleanyos.dia;
    cout << " Introduzca el numero del mes: ";
    cin >> cumpleanyos.mes;
    cout << " Introduzca el año: ";
    cin >> cumpleanyos.anyo;
    cout << "\nLa fecha de hoy es: ";
    hoy.visualizar(); // llamada a la función visualizar
    cout << "Su fecha de nacimiento es: ";
    cumpleanyos.visualizar();
    cout << "Este año cumples " << (hoy.anyo - cumpleanyos.anyo) << " años." << endl;
    if(hoy.mes == cumpleanyos.mes && hoy.dia == cumpleanyos.dia)
        cout << "¡Feliz cumpleaños! \n";
    else
        cout << "¡Feliz día! \n";
    return 0;
}
