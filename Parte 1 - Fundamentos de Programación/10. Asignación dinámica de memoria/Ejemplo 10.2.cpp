//
//  main.cpp
//  Ejemplo 10.2 | Página 376 - Libro digital
//
//  Programa que comprueba aproximadamente cuánta memoria se puede asignar (está disponible).
//  Se recimienda no ejecutar porque los PC's modernos tiene mucha memoria y esto puede tardar.
//
//  Created by Aerodron Colombia on 6/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    char *p;
    for (int i = 1; ; i++) {
        p = new char[10000];
        if (p == 0) break;
        cout << "Asignada: " << 10 * i << "kB\n";
    }
}
