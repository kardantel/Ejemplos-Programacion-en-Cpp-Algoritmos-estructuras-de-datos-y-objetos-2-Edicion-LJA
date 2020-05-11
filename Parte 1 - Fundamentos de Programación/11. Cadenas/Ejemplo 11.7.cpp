//
//  main.cpp
//  Ejemplo 11.7
//
//  Created by Aerodron Colombia on 7/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    char f[100] = "Buenos días Sr. Carlos", d[100];
    strcpy(d, f);
    strcpy(d + 12, " Mr. C++"); // Copia la frase 'Mr. C++' 12 caracteres después de la frase copidad en 'd'
    cout << f << endl << d << endl;
}
