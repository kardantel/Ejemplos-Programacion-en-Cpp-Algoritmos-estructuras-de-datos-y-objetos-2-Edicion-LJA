//
//  main.cpp
//  Seccion 11.4 | Página 408 - Libro digital
//
//  Paso de un array como parámetro por valor a una función. Este método no es eficiente.
//  El programa implementa una función Longitud() que calcula la longitud de una cadena terminada en nulo. El parámetro 'cad' se declara como un array de caracteres de tamaño desconocido. Este ejemplo es un caso que muestra el paso de un array por valor, método no recomendado.
//
//  Created by Aerodron Colombia on 7/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int Longitud(char cad[]) {
    int cuenta = 0;
    while (cad[cuenta++] != '\0');  // El while se ejecuta hasta que encuentra el caracter nulo '\0' al final del texto.
    return cuenta;
}

int main(void) {
    //char texto[] = "C++ es mejor que C";
    cout << "La frase 'C++ es mejor que C' tiene " << Longitud("C++ es mejor que C") << " caracteres."<< endl;
    cout << "Pulse Intro(Enter) para continuar";
    cin.get();
}
