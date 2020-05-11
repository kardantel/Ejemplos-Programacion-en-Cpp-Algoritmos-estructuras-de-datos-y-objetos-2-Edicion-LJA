//
//  main.cpp
//  Ejercicio 7.1.1
//
//  Created by Aerodron Colombia on 8/9/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>

int main() {
    int ListaEnt[ ] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 10};
    int LongLista = sizeof(ListaEnt);
    void ordenar(int *ListaEnt, int LongLista); //prototipo de ordenar
    for (unsigned i = 0; i < LongLista; i++)
        std::cout << ListaEnt[i] << " ";
    return 0;
}
void ordenar(int *lista, int numElementos)
{
    //cuerpo de la función ordenar el array
}
