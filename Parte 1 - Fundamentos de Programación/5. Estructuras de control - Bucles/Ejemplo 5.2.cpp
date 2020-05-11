//
//  main.cpp
//  Ejemplo 5.2 | Página 181 - Libro digital
//
//  Ejemplo de bucle controlados por centinela.
//  Programa que calcula la cantidad de calorías consumidas según cantidad de alimentos.
//
//  Created by Aerodron Colombia on 8/1/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int num_de_elementos, cuenta, calorias_por_alimeto, calorias_totales;
    cout << "¿Cuántos alimentos has comido hoy?: ";
    cin >> num_de_elementos;
    calorias_totales = 0;
    cuenta = 1; // inicializa la condición.
    cout << "Introducir el número de calorias de cada uno de los " << num_de_elementos << " amilentos tomados: ";
    while(cuenta++ <= num_de_elementos) {
        cin >> calorias_por_alimeto;
        calorias_totales += calorias_por_alimeto;   //Es lo mismo que: calorias_totales = calorias_totales + calorias_por_alimeto;
    }
    cout << "Las calorias totales consumidas hoy son: " << calorias_totales << " calorias.\n";
    return 0;
}
