//
//  main.cpp
//  Ejercicio 5.3 | Página 118
//
//  Aplicación de bucles For anidados
//  Programa que visualiza un triángulo isósceles con modificaciones hechas por el autor.
//
//  Created by Aerodron Colombia on 8/2/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // Datos locales...
    int num_lineas;
    char elCar;
    const char blanco = ' ';
    
    cout << "¿Cuán alto deseas el triángulo?: ";
    cin >> num_lineas;
    cout << "¿Qué caracter deseas usar?: ";
    cin >> elCar;
    
    //Bucle externo: dibuja cada línea (fila).
    for (int fila = 1; fila <= num_lineas; fila++) {
        // Primer bucle interno: imprime espacios en blanco.
        for (int blancos = num_lineas - fila; blancos > 0; blancos--) {
            cout << blanco;
        }
        // Segundo bucle interno: imprime los caracteres deseados que forman el triángulo.
        for (int cuenta_car = 1; cuenta_car < 2 * fila; cuenta_car++) {
            cout << elCar;
        }
        //Terminar línea...
        cout << endl;
    }//Fin del bucle externo.
    return 0;
}
