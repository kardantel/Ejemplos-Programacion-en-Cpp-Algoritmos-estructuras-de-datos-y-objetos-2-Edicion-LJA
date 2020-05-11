//
//  main.cpp
//  Seccion 19.2.1 | Página 692 - Libro digital
//
//  Programa que visualiza el alfabeto utilizando recursión mutua o indirecta.
//
//  Created by Aerodron Colombia on 2/05/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

void A(int c);
void B(int c);

int main() {
    A('Z');
    cout << endl;
    return 0;
}

void A(int c) {
    if (c > 'A')
        B(c);
    putchar(c);
}

void B(int c) {
    A(--c);
}
