//
//  main.cpp
//  Ejemplo 5.5 | Página 194 - Libro digital
//
//  Programa que muestra el uso de bucle For infinito con sentencia de terminación if-break.
//
//  Created by Aerodron Colombia on 8/1/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    for (;;) {
        int num;
        cout << "Introduzca un número: ";
        cin >> num;
        if (num == -999) break;
        cout << "El ciclo For sigue..." << endl;
}
    cout << "El ciclo For terminó por sentencia de terminación." << endl;
    return 0;
}
//------------------------------------------------------------------------------------------------------
//
//  Sección 5.3.3 | Página 194 - Libro digital
//
//  Programa que muestra el uso de sentencias nulas en bucles For. Esta forma es igual a un While.
//
/*
int main() {
    int contador = 0;
    for (; contador < 5;) {
        contador++;
        cout << "¡Bucle! ";
    }
    cout << "\nContador: " << contador << " \n";
    return 0;
}
*/

