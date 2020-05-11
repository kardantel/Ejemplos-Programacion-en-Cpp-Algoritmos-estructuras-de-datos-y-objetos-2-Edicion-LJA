//
//  main.cpp
//  Ejemplo 16.11 | Página 592 - Libro digital
//
//  Otra aplicación de get() con parámetro referencia.
//
//  Created by Aerodron Colombia on 30/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    char a, b, c;   // Se crean tres variables tipo caracter.
    cout << "Introduzca tres letras: ";
    cin.get(a).get(b).get(c);   // se llama tres veces a cin.get() y se pone la primera letra en a y vuelve a cin, de modo que se llama a cin.get(b) y se pone la siguiente letra en b. Lo mismo con c.
    cout << "a: " << a << "\nb: " << b << "\nc: " << c << endl;
    return 0;
}
