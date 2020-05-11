//
//  polifunc2.cpp
//  Ejemplo Seccion 6.17.2 | Página 263 - Libro digital
//
//  Programa que demuestra la sobrecarga de funciones (polimorfismo).
//
//  Created by Aerodron Colombia on 29/02/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

// Prototipos de la función sobrecargada.
void seletipo(int i);
void seletipo(char *s);
void seletipo(float f);
void seletipo(char);
void seletipo(int i, int j);

int main() {
    seletipo(5);
    seletipo('Cadena'); // Originalmente es: "Cadena"; pero si lo cambio a 'Cadena' la función reconoce el parámetro como entero, por lo que el compilador C++ escoge la función 'void seletipo(int i)' en vez de la función 'void seletipo(char *s)'.
    seletipo(3.65f);
    seletipo('A');
    seletipo(4, 5);
}

void seletipo(int i) {
    cout << i << " es un entero.\n";
}
void seletipo(char *s) {
    cout << s << " es una cadena.\n";
}
void seletipo(float f) {
    cout << f << " es un tipo float.\n";
}
void seletipo(char c) {
    cout << c << " es un tipo carácter.\n";
}
void seletipo(int i, int j) {
    cout << i << " y " << j << " son 2 enteros.\n";
}
