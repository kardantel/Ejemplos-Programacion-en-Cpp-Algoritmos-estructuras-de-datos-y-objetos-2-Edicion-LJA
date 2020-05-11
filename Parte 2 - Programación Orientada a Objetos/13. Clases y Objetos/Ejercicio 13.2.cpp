//
//  main.cpp
//  Ejercicio 13.2 | Página 485 - Libro digital
//
//  Programa que muestra el diseño y construcción una clase contador que cuente cosas. (Cada vez que se produzca un suceso el contador se incrementa en 1.) El contador puede ser consultado para encontrar la cuenta actual.
//
//  Created by Aerodron Colombia on 18/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

class Contador {
    private:
    unsigned int cuenta; // contar
    public:
    Contador() {cuenta = 0;} // Constructor llamado 'Contador' que tiene el mismo nombre de la clase.
    void inc_cuenta() {cuenta++;} // cuenta
    int leer_cuenta() {return cuenta;} // devuelve cuenta
};

int main() {
    Contador c1, c2; // define e inicializa
    cout << "\nc1 = " << c1.leer_cuenta();  // La primera vez que se lee 'cuenta' está en cero.
    cout << "\nc2 = " << c2.leer_cuenta();  // Igual aquí.
    c1.inc_cuenta(); // incrementa c1 de 0 a 1.
    c2.inc_cuenta(); // incrementa c2 de 0 a 1.
    c2.inc_cuenta(); // incrementa c2 de 1 a 2.
    cout << "\nc1 = " << c1.leer_cuenta(); // Muesta el valor incrementado de 'c1'.
    cout << "\nc2 = " << c2.leer_cuenta() << endl;
}
