//
//  main.cpp
//  Ejemplo 16.2
//
//  Created by Aerodron Colombia on 25/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    while (cin >> n)    // Para salir del cin se ejecuta combinación 'control(^)'+'command(⌘)'+Y
        suma += n;
    cout << "La suma parcial es " << suma << endl;
    cin.clear();
    while (cin >> n)
        suma += n;
    cout << "La suma total es " << suma << endl;
    return 0;
}
