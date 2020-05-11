//
//  main.cpp
//  Ejemplo 5.4 | Pagina 190 - Libro digital
//
//  Programa que usa ciclo For para sumar los 10 primero números.
//
//  Created by Aerodron Colombia on 28/02/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main()  {
    int suma = 0, total;
    cout << "Ingresa la cantdad de números a sumar: ";
    cin >> total;
    for (int n = 1; n <= total; n++)
        suma += n;
    cout << "La suma de los " << total << " números es: " << suma << endl;
    return 0;
}

/* ORIGINAL:
int main()  {
    int suma = 0;
    for (int n = 1; n <= 10; n++)
        suma = suma + n;
    cout << "La suma de los números 1 a 10 es: " << suma << endl;
    return 0;
}
*/
