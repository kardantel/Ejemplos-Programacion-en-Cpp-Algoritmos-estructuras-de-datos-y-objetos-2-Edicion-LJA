//
//  main.cpp
//  Ejemplo 15.2 | Página 547 - Libro digital
//
//  Programa que usa el archivo 'minmax.h' que declara dos plantillas de funciones: min() y max(). Este tipo de plantillas se usaron en Parte 1 - Funciones - Ejemplo Seccion 6.19.2
//
//  Created by Aerodron Colombia on 23/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
#include "minmax.h"

/*
// Las 3 siguientes muestran cómo sería cada función si no se usaran las platillas de funciones.
int max(int a, int b);
double max(double a, double b);
char max(char a, char b);
*/

int main() {
    int e1 = 100, e2 = 200;
    double d1 = 3.141592, d2 = 2.718283;
    char c1 = 'g', c2 = 'H';
    std::cout << "max(e1, e2) es igual a: " << max(e1, e2) << '\n';
    std::cout << "max(d1, d2) es igual a: " << max(d1, d2) << '\n';
    std::cout << "max(c1, c2) es igual a: " << max(c1, c2) << '\n';
    // Agregado por programador:
    std::cout << "min(e1, e2) es igual a: " << min(e1, e2) << '\n';
    std::cout << "min(d1, d2) es igual a: " << min(d1, d2) << '\n';
    std::cout << "min(c1, c2) es igual a: " << min(c1, c2) << '\n';
    return 0;
}
