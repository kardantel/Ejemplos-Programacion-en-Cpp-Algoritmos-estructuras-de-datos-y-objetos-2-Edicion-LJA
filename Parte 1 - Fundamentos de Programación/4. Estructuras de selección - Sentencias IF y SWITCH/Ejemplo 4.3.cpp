//
//  main.cpp
//  Ejemplo 4.3 | Página 154 - Libro digital
//
//  Created by Aerodron Colombia on 7/31/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>

int main() {
    float numero;
    std::cout << "Introduzca un número positivo o negativo: ";
    std::cin >> numero;
    if (numero > 0) {std::cout << numero << " es mayor que cero.\n";}
    if (numero < 0) {std::cout << numero << " es menor que cero.\n";}
    if (numero == 0) {std::cout << numero << " es igual a cero.\n";}
    return 0;
}
