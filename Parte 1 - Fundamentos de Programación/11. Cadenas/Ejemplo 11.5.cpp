//
//  main.cpp
//  Ejemplo 11.5 | Página 405 - Libro digital
//
//  Similar a Ejercicio 11.2 pero demostrando el uso de la función 'cin.peek()' que se puede utilizar en lugar de las funciones get() y putback().
//  La expresión 'car = cin.peek()' copia el siguiente carácter en 'car'. A continuación, si 'car' es un dígito, el entero completo se lee en 'n' y se devuelve. En caso contrario, el carácter se elimina de cin y continúa el bucle. Si se encuentra el final del archivo, la expresión car = cin.peek() devuelve 0, y se detiene el bucle.
//  Informaicón sobre cin.peek():
//  http://www.cplusplus.com/reference/istream/istream/peek/
//
//  Created by Aerodron Colombia on 7/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int siguienteEntero();

int main() {
    int m = siguienteEntero(), n = siguienteEntero();
    cin.ignore(80,'\n');    // Salta (ignora) 80 caracteres o, salta al comienzo de la siguiente línea dependiendo de si se encuentra un caracter de nueva línea antes de que se salten 80 caracteres (leídos y descartados).
    cout << m << " + " << n << " = " << m + n << endl;
}

int siguienteEntero() {
    char car;
    int n = 0;
    while ((car = cin.peek()))
        if (car >= '0' && car <= '9') {
            cin >> n;
            break;
        }
        else cin.get(car);
    return n;
}
