//
//  main.cpp
//  Ejemplo 16.4 | Página 587 - Libro digital
//
//  El siguiente programa solicita al usuario el nombre y apellidos. A continuación, imprime el nombre completo y el apellido en la impresora.
//
//  Created by Aerodron Colombia on 30/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    char nombre[20];
    char apellidos[30];
    cout << "¿Cuál es su nombre?" << endl;
    cin >> nombre;
    cout << "¿Cuáles son sus apellidos?" << endl;
    cin >> apellidos;
    // Enviar nombre y apellidos a la impresora
    // ofstream impresora ("PRN");
    // impresora << "Su nombre completo es: \n";
    // impresora << apellidos << ", " << nombre << endl;
    cout << "Su nombre completo es: \n";
    cout << apellidos << ", " << nombre << endl;
    return 0;
}
