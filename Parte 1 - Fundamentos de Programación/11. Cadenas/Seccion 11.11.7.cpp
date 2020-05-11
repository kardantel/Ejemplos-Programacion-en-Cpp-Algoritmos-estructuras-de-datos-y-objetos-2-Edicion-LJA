//
//  main.cpp
//  Seccion 11.11.7
//
//  Created by Aerodron Colombia on 7/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;
#include <string>

int main() {
    char cad[] = "(Pepe_Luis + Mortimer) * Mackoy";
    char separador[] = "+ * () _";
    char *ptr = cad;
    cout << cad;
    ptr = strtok(cad, separador);
    cout << " se rompe en " << ptr << endl; // Se muestra la primera subcadena en donde se rompe la búsqueda.
    while (ptr) {
        cout << ptr << endl;
        ptr = strtok(NULL, separador);
    }
}
