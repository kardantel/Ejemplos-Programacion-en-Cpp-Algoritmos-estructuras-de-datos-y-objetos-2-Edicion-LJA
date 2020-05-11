//
//  main.cpp
//  Ejercicio 11.3 | Página 413 - Libro digital
//
//  El programa añade la cadena s2 al final de la cadena s1 por medio de la función strcat().
//  Nota: cuando el programa corre, se genera una error (no se porqué).
//
//  Created by Aerodron Colombia on 7/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
#include <string> // también <cstring>
using namespace std;

int main() {
    char s1[] = "ABCDEFGH";
    char s2[] = "XYZ";
    cout << "Antes de strcat(s1, s2): \n";
    cout << "\ts1 = [" << s1 << "], longitud = " << strlen(s1) << endl;
    cout << "\ts2 = [" << s2 << "], longitud = " << strlen(s2) << endl;
    strcat(s1, s2);
    cout << "Después de strcat(s1, s2):\n";
    cout << "\ts1 = [" << s1 << "], longitud = " << strlen(s1) << endl;
    cout << "\ts2 = [" << s2 << "], longitud = " << strlen(s2) << endl;
    //return 0;
}
