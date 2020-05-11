//
//  main.cpp
//  Seccion 11.4.1 | Página 408 - Libro digital
//
//  Paso de un array como parámetro por referencia. Se ha utilizado typedef debido a que el compilador no acepta 'char cad[]'.
//
//  Created by Aerodron Colombia on 7/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

typedef char cad80[80];

int Longitud(cad80 &cad) {
    int cuenta = 0;
    while (cad[cuenta++] != '\0');
    return cuenta;
}

int main() {
    cad80 s = "C++ es mejor que C"; // Guarda la cadena en 's'.
    cout << "La frase '" << s << "' tiene " << Longitud(s) << " caracteres." << endl;
    cout << "Pulse Intro(Enter) para continuar";
    cin.get();
}
