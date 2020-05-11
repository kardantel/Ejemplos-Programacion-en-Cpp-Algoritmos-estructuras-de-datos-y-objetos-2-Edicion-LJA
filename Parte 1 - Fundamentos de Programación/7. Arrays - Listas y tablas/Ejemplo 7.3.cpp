//
//  main.cpp
//  Ejemplo 7.3 | Página 282 - Libro digital
//
//  Programa que asigna ocho enteros al array 'nums', mediante cin; a continuación, visualiza la suma total de los números que componen el array.
//
//  Created by Aerodron Colombia on 8/8/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

const int NUM = 8;

int main() {
    int nums[NUM];
    int total = 0;
    for (int i = 0; i < NUM; i++) {
        cout << "Por favor, introduzca el número: ";
        cin >> nums[i];
        total += nums[i];
    }
    cout << "La suma total de los números del array es: " << total << endl;
    return 0;
}
