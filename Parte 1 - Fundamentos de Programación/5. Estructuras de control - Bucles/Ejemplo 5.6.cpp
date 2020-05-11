//
//  main.cpp
//  Ejemplo 5.6 | Página 112.
//
//  Programa 1: muestra cómo implementar un FOR como si fuera un WHILE.
//  Programa 2: implementa un FOR infinito que solo se puede romper con un IF-ELSE-BREAK.
//
//  Created by Aerodron Colombia on 8/2/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
/*
//  Programa 1
int main() {
    int contador = 0, n;
    std::cout << "Introduzca el número de veces que realiza el bucle: ";
    std::cin >> n;
    for (; contador < n;) { //Dejando la primera y tercera sentencia vacía el FOR se comporta como un WHILE.
        contador++;
        std::cout << "¡Bucle!\t";
    }
    std::cout << "\nContador en: " << contador << "\n";
    return 0;
}*/

//  Programa 2
int main() {
    int contador = 0, max;
    std::cout << "¿Cuántos HOLAS?: ";
    std::cin >> max;
    for (;;) { //FOR en bucle infinito hasta que la condición de IF es falsa y se termina con BREAK.
        if (contador < max) {
            std::cout << "¡HOLA!\t";
            contador++;
        } else {
            break;
        }
    }
    std::cout << "\nContador en: " << contador << "\n";
    return 0;
}
