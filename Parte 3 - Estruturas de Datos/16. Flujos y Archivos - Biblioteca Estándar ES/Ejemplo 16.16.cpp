//
//  main.cpp
//  Ejemplo 16.16 | Página 600 - Libro digital
//
//  Programa que demuestra el uso de la función setw() que alinea a derechas y de la función cout.width() que agrega espacios de izquierda a derecha. También se  muestra el uso de la función fill() que rellena con un caracter, definido por usuario, los espacios en blanco.
//
//  Created by Aerodron Colombia on 30/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
#include <iomanip>  // ¡Es estrictamente necesario su uso!
using namespace std;

int main() {
    cout << "Uso de setw()" << endl;
    cout << setw(10) << "M" << setw(10) << "N" << endl;
    cout << setw(10) << 1 << setw(10) << 7.77 << endl;
    cout << setw(10) << 10 << setw(10) << 77.77 << endl;
    cout << setw(10) << 100 << setw(10) << 777.77 << endl;
    
    cout << "\nUso de cout.width()" << endl;
    cout.width(8);
    cout << "ABC" << "DEF" << "GHI" << endl;
    
    cout << "\nUso de fill()" << endl;
    cout << "12345678901234567890" << endl;
    cout.width(15);
    cout.fill('*');
    cout << "Hola Mackoy" << endl;
    float Z = 99.99;
    cout.width(15);
    cout << Z << endl;
    
    cout << "\nUso de fill() 2.0" << endl;
    char Relleno;
    Relleno = cout.fill('*');
    cout.width(15);
    cout.fill(Relleno); // Se recupera el antiguo carácter de relleno
    cout << "Hola Mackoy" << endl;
}
