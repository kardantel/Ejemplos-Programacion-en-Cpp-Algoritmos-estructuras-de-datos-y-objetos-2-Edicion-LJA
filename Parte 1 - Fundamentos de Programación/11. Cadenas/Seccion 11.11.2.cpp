//
//  main.cpp
//  Seccion 11.11.2 | Página 421 - Libro digital
//
//  La función strrchr localiza la última ocurrencia del patrón c en la cadena s. La búsqueda termina con la primera ocurrencia de un carácter coincidente. Si no se encuentra el carácter c en la cadena s, la función produce un resultado NULL.
//
//  Created by Aerodron Colombia on 7/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(void) {
    char cadena[] = "----x----";
    char *resultado;
    resultado = strchr(cadena, 'x'); // Cuando encuentra el caracter 'x' se acaba la búsqueda y muestra el resto de la cadena.
    cout << "Valor devuelto: " << resultado << endl;
}
