//
//  main.cpp
//  Ejemplo 11.15 | Página 416 - Libro digital
//
//  Programa que invierte el orden de la cadena "Hola mundo".
//  Nota: la función strrev() solo funciona en C, no en C++. Se dejó un ejemplo de inversión de cadena encontrado en: https://www.geeksforgeeks.org/reverse-a-string-in-c-cpp-different-methods/
//
//  Created by Aerodron Colombia on 7/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    string str = "Hola mundo";
    reverse(str.begin(), str.end());
    cout << str << endl;
    return 0;
}
