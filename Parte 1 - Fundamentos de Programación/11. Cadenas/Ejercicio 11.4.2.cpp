//
//  main.cpp
//  Seccion 11.4.2 | Página 409 - Libro digital
//
//  Uso de punteros cuando se pasan arrays a funciones. En las declaraciones de parámetros de la función 'extraer', ningún array está definido, sino punteros de tipo 'char'. En la llamada a la función 'extraer' se utiliza el operador '&' para obtener la dirección de las cadenas fuente y destino.
//
//  Created by Aerodron Colombia on 7/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

// Función 'extraer' copia 'num_cars' caracteres de la cadena fuente a la cadena destino.
int extraer(char *dest, char *fuente, int num_cars) {
    int cuenta;
    for(cuenta = 1; cuenta <= num_cars; cuenta++)
        *dest++ = *fuente++;    // Punteros usados para acceder a las cadenas fuente y destino, respectivamente.
    *dest = '\0';
    return cuenta; // devuelve número de caracteres
}

int main(void) {
    int n;
    cout << "Ingresa el número de caracteres a escoger en la frase: ";
    cin >> n;
    char s1[40] = "Sierra de Cazorla";  // Cadena fuente.
    char s2[40];                        // Cadena destino.
    extraer(&s2[0], &s1[0], n);         // 8: número de caracteres a tener en cuenta.
    cout << "La frase queda: '" << s2 << "'.\n";
    cout << "Pulse Intro para continuar.";
    cin.get();
}
