//
//  main.cpp
//  Ejercicio 10.1 | Página 374 - Libro digital
//
//  Created by Aerodron Colombia on 6/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
#include <string>   // Uso de strcpy()
using namespace std;

int main() {
    char cad[] = "Sierras de Cazorla, Segura y Magina";
    unsigned long lon = strlen(cad);
    char *ptr;  //Crea un puntero a caracter llamado 'ptr'.
    ptr = new char[lon+1];  // Se escribe 'lon+1' para incluír el operador nulo '\0' al final del array.
    strcpy(ptr, cad); // Copia 'cad' a nueva área de memoria apuntada por 'ptr'.
    cout << "ptr = " << ptr << endl; // 'Cad' esta ahora en 'ptr'.
    delete ptr; // Libera memoria de ptr
}
