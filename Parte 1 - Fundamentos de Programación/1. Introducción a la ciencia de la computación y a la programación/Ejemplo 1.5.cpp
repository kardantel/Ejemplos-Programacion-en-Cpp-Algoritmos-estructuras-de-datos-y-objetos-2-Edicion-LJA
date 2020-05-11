//
//  main.cpp
//  Ejemplo_1.5 | Página 20
//
//  Este programa obtiene una tabla de depreciaciones acumuladas y de valores reales de cada año de un determinado producto.
//
//  Created by Aerodron Colombia on 7/31/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>

int main() {
    double costo, depreciacion, valor_recuperacion, valor_actual, acumulado;
    int anio, vida_util;
    std::cout << "Introduzca costo: $";
    std::cin >> costo;
    std::cout << "Introduzca valor de recuperación: $";
    std::cin >> valor_recuperacion;
    std::cout << "Introduzca año máximo de vida útil: ";
    std::cin >> vida_util;
    std::cout << "Introduzca año actual: ";
    std::cin >> anio;
    valor_actual = costo;
    depreciacion = (costo - valor_recuperacion)/vida_util;
    acumulado = 0;
    std::cout << "\nAño | Depreciación | Depreciación acumulada:\n";
    while (anio < vida_util) {
        acumulado = acumulado + depreciacion;
        valor_actual = valor_actual - depreciacion;
        std::cout << anio << "\t" << depreciacion << "\t\t" << acumulado << "\n\n";
        anio = anio + 1;
    }
}
