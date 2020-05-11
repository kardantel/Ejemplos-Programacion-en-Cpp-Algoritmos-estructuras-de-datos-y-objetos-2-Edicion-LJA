//
//  main.cpp
//  Ejemplo_1.8 | Página 28
//
//  Programa que calcula los salarios semanales y mensuales de los empleados de una empresa, calculados en base a las horas semanales y mensuales trabajadas y de acuerdo a un precio especificado del valor de la hora. Si se pasan las 40 horas semanales, las horas extras se pagan a razón de 1.5 veces la hora ordinaria.
//
//  Created by Aerodron Colombia on 7/31/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
//#define precio_hora 20000

int horas, salario;
int precio_hora = 20000;

int main() {
    std::cout << "Numero de horas trabajadas en la semana: ";
    std::cin >> horas;
    if (horas <= 40) {
        salario = horas * precio_hora;
        std::cout << "Salario a pagar por la semana: $" << salario <<"\n";
    } else {
        salario = (40 * precio_hora) + ((1.5 * precio_hora) * (horas - 40));
        std::cout << "Salario a pagar por la semana: $" << salario <<"\n";
    }
    return 0;
}
