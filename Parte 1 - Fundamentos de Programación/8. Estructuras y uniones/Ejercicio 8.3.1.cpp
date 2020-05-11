//
//  main.cpp
//  Ejercicio 8.3.1 | Página 319 - Libro digital
//
//  Programa que contiene estructuras anidadas y que contiene información de operaciones financieras.
//
//  Created by Aerodron Colombia on 3/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

enum tipo_de_operacion {DEPOSITO, RETIRADA};    // Tema: estructura 'enum' tratado en página 328.

struct registro_operacion {
    long número_cuenta;
    float cantidad;
    tipo_de_operacion tipo_operacion;
    struct {
        int mes, dia, anyo;
    } fecha;    // Estructura 'fecha' anidada en estructura 'registro_operacion'.
    struct {
        int horas, minutos;
    } tiempo;   // Estructura 'tiempo' anidada en estructura 'registro_operacion'.
};

int main() {
    struct registro_operacion operacion;
    operacion.cantidad = 500.00;
    operacion.tipo_operacion = DEPOSITO;
    operacion.fecha.mes = 10;
    operacion.fecha.dia = 25;
    cout << "Ingrese el año de la operación: ";
    cin >> operacion.fecha.anyo;
    operacion.tiempo.horas = 8;
    operacion.tiempo.minutos = 45;
    cout << "Cantidad: " << operacion.cantidad << endl;
    cout << "Tipo de operación: " << operacion.tipo_operacion << endl;
    cout << "Día: " << operacion.fecha.dia << endl;
    cout << "Mes: " << operacion.fecha.mes << endl;
    cout << "Año: " << operacion.fecha.anyo << endl;
    cout << "Minutos: " << operacion.tiempo.minutos << endl;
    cout << "Horas: " << operacion.tiempo.horas << endl;
}
