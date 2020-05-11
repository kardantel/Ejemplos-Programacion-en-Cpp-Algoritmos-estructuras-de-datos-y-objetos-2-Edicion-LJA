//
//  main.cpp
//  Ejercicio 10.3
//
//  Created by Aerodron Colombia on 6/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    double* pd = new double [4]; //4 elementos double
    pd[0] = 7.5;
    pd[1] = 4.25;
    pd[2] = 0.45;
    pd[3] = 1.23;
    cout << " pd[1] es: " << pd[1] << "\n";
    pd = pd + 1; // incrementar el puntero
    cout << "ahora pd [1] es" << pd[1];
    //delete [] pd; // liberar la memoria
    return 0;
}
