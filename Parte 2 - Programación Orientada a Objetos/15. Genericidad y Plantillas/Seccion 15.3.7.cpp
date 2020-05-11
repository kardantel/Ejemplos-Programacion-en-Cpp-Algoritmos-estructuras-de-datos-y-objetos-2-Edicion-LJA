//
//  main.cpp
//  Seccion 15.3.7 | Página 550 - Libro digitial
//
//  Created by Aerodron Colombia on 23/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>

template <class T> T min (T a, T b) {
    if (a < b)
        return a;
    else
        return b;
}
int main() {
    char c1 = 'J', c2 = '1';
    int n1 = 25, n2 = 65;
    long n3 = 50000;
    float n4 = 84.25, n5 = 9.999;
    std::cout << min(c1, c2) << '\n'; // correcto
    std::cout << min(n1, n2) << '\n'; // correcto
    std::cout << min(n4, n5) << '\n'; // correcto
    // min(c1, n1); // error: c1 y n1 tipos distintos
    // min(n3, n4); // error: n3 y n4 tipos distintos
    // min(n2, n3); // error: n2 y n3 tipos distintos
}
