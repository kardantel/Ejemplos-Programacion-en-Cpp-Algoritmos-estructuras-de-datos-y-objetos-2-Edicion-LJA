//
//  main.cpp
//  Seccion 15.5.4 | Página 564 - Libro digital
//
//  Programa que muestra el ejemplo de función plantilla utilizada con una clase.
//
//  Created by Aerodron Colombia on 25/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>

template <class T> T min(T a, T b) {
    if (a < b)
        return a;
    else
        return b;
}
class Numero {
    long num;
    public:
    Numero(long n):num(n)
    {}
    long Valor() {
        return num;
    }
    int operator < (Numero n2) {
        return num < n2.Valor();
    }
};

int main() {
    Numero nn1 = 15;
    Numero nn2 = 25;
    Numero nn3 = min(nn1, nn2);
}
