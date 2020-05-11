//
//  main.cpp
//  Ejemplo 9.10 | Página 363 - Libro digital
//
//  Programa que ilustra uso de punteros a estructuras.
//
//  Created by Aerodron Colombia on 10/12/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

struct persona {
    char nombre[30];
    int edad;
    int altura;
    int peso;
};
void mostrar_persona(persona *ptr); // Se declara la función 'mostrar_persona' y como argumento, un puntero 'ptr' a estructura 'perona'.

int main() {
    persona empleados[] = { {"Mortimer, Pepe", 47, 182, 85},
                            {"García, Luis", 39, 170, 75},
                            {"Jiménez, Tomás",18, 175, 80} };
    persona *p; // Crea puntero 'p' a estructura 'persona'.
    p = empleados;  // Guarda en 'p' la direción del array 'empleados'.
    for (int i = 0; i < 3; i++, p++)
        mostrar_persona(p); // La función 'mostrar_persona' utiliza como parámetro cada una de las posiciones del array 'empleados' representados por el puntero 'p'.
}

void mostrar_persona(persona *ptr) {
    cout << "Nombre: " << ptr -> nombre
         << " | Edad: " << ptr -> edad
         << " | Altura: " << ptr -> altura
         << " | Peso: " << ptr -> peso << endl;
}
