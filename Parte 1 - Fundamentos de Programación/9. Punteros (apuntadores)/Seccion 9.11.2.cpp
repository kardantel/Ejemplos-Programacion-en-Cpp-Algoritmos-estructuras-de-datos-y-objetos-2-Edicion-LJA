//
//  main.cpp
//  Sección 9.11.2 | Página 360 - Libro digital
//
//  Programa que ordena utilizando el algoritmo quicksort. Se proporciona una función para comparar las relaciones de elementos de arrays.
//  En este programa, la función comparar() se pasa a qsort(). La función comparar() compara entradas del array tabla y devuelve (retorna) un número negativo si arg1 es menor que arg2, devuelve cero si son iguales, o un número positivo si arg1 es mayor que arg2.
//
//  Created by Aerodron Colombia on 14/11/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
#include <search.h> // archivo de cabecera
using namespace std;

const int T = 10;   // Tamaño del array 'tabla'.

int comparar(const void *arg1, const void *arg2);   // Se declara la función 'comparar' con dos argumentos: dos punteros constantes tipo void.

int main() {
    int tabla[T] = {14, 17, 5, 21, 12, 40, 60, 55, 35, 15};
    qsort((void *) tabla, T, sizeof(int), comparar);   // 'qsort' ordena 'tabla' utilizando el algoritmo quicksort con 4 argumentos: la declaración de un puntero '(void *)' que apunta a cada elemento del array 'tabla' (también se puede quitar 'void *' y así funciona), el número de elementos en la matriz a los que apunta el puntero (en el libro está '(size_t)10'), el tamaño en bytes de cada elemento en la matriz y el llamado a una función 'camparar' que compara dos elementos.
    cout << "Lista ordenada: \n";
    for (int i = 0; i < T; i++)
        cout << tabla[i] << " " ;
    cout << endl;
    //return;
}
// Comparar dos elementos de la lista
int comparar(const void *arg1, const void *arg2) {  // La función 'qsort' llama repetidamente a esta función para comparar dos elementos.
    return *(int *) arg1 - *(int *) arg2;   // '*(int *) arg1' se lee como "puntero a una variable puntero arg1"
}

// Para más imformación de la función 'qsort' consultar en: http://www.cplusplus.com/reference/cstdlib/qsort/
