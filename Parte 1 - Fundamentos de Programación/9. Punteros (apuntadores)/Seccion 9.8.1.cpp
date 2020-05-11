//
//  main.cpp
//  Sección 9.8.1 | Página 350 - Libro digital
//
//  Programa que utiliza un puntero como índice de un array de caracteres y convierte caracteres minúsculas a mayúsculas.
//
//  Created by Aerodron Colombia on 14/11/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    char *p;    // Se declara la variable puntero.
    char CadenaTexto[80];
    cout << "Introduzca cadena a convertir: ";
    cin.getline(CadenaTexto, sizeof(CadenaTexto));
    // p apunta al primer carácter de la cadena (por eso se coloca cero).
    p = &CadenaTexto[0];
    // Repetir mientras *p no sea cero
    while (*p)
        // restar 32, constante de código ASCII
        if ((*p >= 'a') && (*p <= 'z')) { // Si se detecta una letra minúsucla la convierte a mayúscula
            //*p = *p - 32; // restándole 32 de código ASCII.
            *p -= 32;
            p++;
            //++(*p) = *p - 32; También se puede escribir así.
            //*p++ = *p - 32;   O así, pero el programa genera una advertencia.
            //*p++ se utiliza para acceder de modo incremental en la cadena.
        }
        else
            p++;
    cout << "La cadena convertida es:" << endl;
    cout << CadenaTexto << endl;
    cout << "Pulse Intro(Enter) para continuar";
    cin.get();
}
