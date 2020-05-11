//
//  main.cpp
//  Ejemplo 5.3 | Página 183 - Libro digital
//
//  Ejemplo de bucle controlados por indicador (bandera).
//  Programa que lee dígitos tipo 'caracter' introducidos por teclado mediante un bucle WHILE y se debe terminar el bucle si se lee un dato tipo 'dígito' entre 0 y 9.
//
//  Created by Aerodron Colombia on 8/1/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    char car;
    bool digito_leido = false;  // Dígito bandera.
    while (!digito_leido) { // La varibla 'digito_leido' se cambia a True para que le bucle se ejecute.
        cout << "Introduzca un caractér: ";
        cin >> car;
        digito_leido = (('0' <= car) && (car <= '9'));  // La operación AND hace que 'digito_leido' sea True cuando se ingrese un dígito de 0 a 9.
        cout << "¡Caractér válido!\n";
    }
    cout << "¡Caractér NO válido, vuelve a comenzar!\n";
    return 0;
}
