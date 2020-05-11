//
//  main.cpp
//  Ejemplo_1.9 PROGRAMA NO TERMINADO!
//
//  Created by Aerodron Colombia on 7/31/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
#include <string.h>

int i, total = 0;
int numero[] = {5, 3, 0, 2, 4, 4, 0, 0, 2, 3, 6, 0, 2};
int nElementos;

int main() {
    nElementos = sizeof(numero)/sizeof(numero[0]);
    std::cout << nElementos << "\n";
//    std::cin >> numero;
    for ( i = 0; numero[i] == 0; i++ ) {
        std::cout << numero[i] << "\n";
//        if (numero[i] == 0) {
            total++;
            std::cout << total;
//          }
    }
//    std::cout << "\nLa cantidad de ceros en el número es " << total << "\n\n";
    return 0;
}
/*if (numero[i] == 0) {
 total++;
 std::cout << total;
 }*/
