//
//  main.cpp
//  Seccion 15.3.3 | Página 545 -  Libro digital
//
//  Programa que muestara el uso de la Plantilla de Función 'class' diseñando una plantilla que calcule el menor valor de dos datos dados.
//
//  Created by Aerodron Colombia on 23/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
//using namespace std;  //Esta línea no se debe usar cuando se crea/usa una plantilla con 'class'.

template <class T>
T min(T a, T b) {
    if(a <= b)
        return a;
    else
        return b;
}

int main() {
    int ea = 1, eb = 5;
    std::cout << "(int): " << min(ea, eb) << std::endl;
    long la = 10000, lb = 5000;
    std::cout << "(long): " << min(la, lb) << std::endl;
    char ca = 'a', cb = 'x';
    std::cout << "(char): " << min(ca, cb) << std::endl;
    double da = 423.654, db = 789.12;
    std::cout << "(double): " << min(da, db) << std::endl;
    return 0;
}

/*
template <class T>
T max(T x, T y) {
   return (x > y) ? x : y;
};

int main() {
    int a=3, b=5;
    char f='a', g='k';
    std::cout << "El mayor es: " << max(a,b) << std::endl;
    std::cout << "El mayor es: " << max(f,g) << std::endl;
    return 0;
}
*/
