//
//  main.cpp
//  Ejemplo_1.10 | Página 30
//
//  Programa que determina si la suma de caulquier pareja de 3 números es igual al tercer número. Si cumple con la condición escribe "iguales" y, en caso contrario, escribe "distintas".
//
//  Created by Aerodron Colombia on 7/31/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>

int A,B,C;

int main() {
    std::cout << "Introduzca los tres números:\n";
    std::cin >> A;
    std::cin >> B;
    std::cin >> C;
    
    if ((A+B)==C) {
        std::cout << "IGUALES\n";
    } else {
        if ((A+C)==B) {
            std::cout << "IGUALES\n";
        } else {
            if ((B+C)==A) {
                std::cout << "IGUALES\n";
            } else {
                std::cout << "DISTINTAS\n";
            }
        }
    }
    return 0;
}
