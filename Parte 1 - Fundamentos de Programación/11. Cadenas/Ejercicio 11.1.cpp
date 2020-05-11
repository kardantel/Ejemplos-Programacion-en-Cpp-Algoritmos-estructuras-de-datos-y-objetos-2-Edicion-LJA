//
//  main.cpp
//  Ejercicio 11.1 | Página 404 - Libro digital
//
//  Programa que convierte las primeras letras de la frase en mayúsculas. La variable 'pre' contiene el caracter leído anteriormente. El algoritmo se basa en que si 'pre' es un blanco o el caracter nueva línea, entonces el carscter siguiente 'car' será el primer caracter de la siguiente palabra. En consecuencia, 'car' se reemplaza por su caracter mayúscula equivalente: car + 'A' - 'a '.
//
//  Created by Aerodron Colombia on 7/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;
//#include <ctype>

int main() {
    char car, pre = '\0';
    while (cin.get(car)) {
        if (pre == ' ' || pre == '\n') {
            cout.put(char(toupper(car))); // La función cout.put() se utiliza para escribir en el flujo de salida cout carácter a carácter. La función toupper() devuelve el equivalente mayúscula de 'car' si 'car' es una letra minúscula.
        } else {
                cout.put(car);
        }
        pre = car;
    }
}
