//
//  main.cpp
//  Ejemplo 2.2 | Página 42
//
//  El programa copia un mensaje en un array de caracteres y lo imprime en la pantalla ya que 'cout' y 'strcpy()' (una función de cadena) se utilizan y se necesitan sus archivos de cabecera específicos.
//
//  Created by Aerodron Colombia on 7/31/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
#include <string.h>

int main() {
    char mensaje[20];                   // Esta y la siguiente líena se pueden sustituír por
    strcpy (mensaje, "Hola mundo\n");   // char mensaje[20] = "Hola mundo\n"
    std::cout << mensaje;
    return 0;
}
