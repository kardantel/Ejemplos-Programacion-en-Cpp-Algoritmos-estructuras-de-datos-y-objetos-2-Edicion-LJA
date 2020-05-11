//
//  main.cpp
//  Seccion 15.3.6 | Página 549 - Libro digital
//
//  Programa que diseña una plantilla de función para calcular el máximo de dos datos y un programa que haga uso de esa plantilla.
//
//  Created by Aerodron Colombia on 23/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>

template <class Tipo>
Tipo max2(Tipo primero, Tipo segundo) {
    return primero > segundo? primero: segundo;
}
template <class Tipo>
Tipo max3(Tipo primero, Tipo segundo, Tipo tercero) {
    return max2(max2 (primero, segundo), tercero);
}

int main() {
    std::cout << max2(6, 4) << "\n";
    std::cout << max3(10, 40, 20) << "\n";
    std::cout << max3(9.99, 4.45, 3.1416) << "\n";
    std::cout << max3('M', 'A', 'S') << "\n";
}
