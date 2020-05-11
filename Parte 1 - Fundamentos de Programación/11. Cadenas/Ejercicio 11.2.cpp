//
//  main.cpp
//  Ejercicio 11.2 | Página 404 - Libro digital
//
//  El programa siguiente usa una función que extrae los enteros del flujo de entrada.
//  Informaicón sobre cin.ignore():
//  http://www.math.uaa.alaska.edu/~afkjm/csce211/handouts/ReadingLineOfText
//  http://www.cplusplus.com/reference/istream/istream/ignore/
//  Informaicón sobre cin.putback():
//  http://www.cplusplus.com/reference/istream/istream/putback/
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
    while (cin.get(car))
        if (car >= '0' && car <= '9') { // Si 'car' es un dígito, el número completo se lee y se guarda en 'n' hasta que encuentra un espacio, una letra o un salto de línea.
            cin.putback(car);
            cin >> n;
            break;
        }
    return n;
}
