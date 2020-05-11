//
//  main.cpp
//  Ejemplo 3.5 | Página 127
//
//  Orden de evaluación no predecible en expresiones.
//
//  Created by Aerodron Colombia on 25/02/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int n = 5, t;
    t = ++n * --n;
    cout << "n= " << n << ", t = " << t << endl;
    cout << ++n << " " << ++n << " " << ++n << endl;
}
