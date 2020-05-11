//
//  main.cpp
//  Seccion 11.11.3
//
//  La función strspn cuenta el número de caracteres que se repiten de la 'cadena1' en la 'cadena2'.
//
//  Created by Aerodron Colombia on 7/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(void) {
    char cadena1[] = "123456";
    char cadena2[] = "abc123";
    unsigned long longitud;
    longitud = strspn(cadena1, cadena2);
    cout << "Longitud =" << longitud << endl;
    return 0;
}
