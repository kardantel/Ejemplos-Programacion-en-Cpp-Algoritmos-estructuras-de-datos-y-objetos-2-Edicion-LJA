//
//  main.cpp
//  Ejemplo 3.4 | Página 70
//
//  Demostración de preincremento y postincremento
//
//  Created by Aerodron Colombia on 7/31/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int m = 99, n;
    n = ++m;
    cout << "m = " << m << ", n = " << n << "\n";
    n = m++;
    cout << "m = " << m << ", n = " << n << "\n";
    cout << "m = " << m++ << "\n";
    cout << "m = " << m << "\n";
    cout << "m = " << ++m << "\n";
    return 0;
}
