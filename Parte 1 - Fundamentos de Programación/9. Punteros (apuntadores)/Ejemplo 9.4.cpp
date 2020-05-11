//
//  main.cpp
//  Ejemplo 9.4 | Página 339 - Libro digital
//
//  Programa que demuestra el uso de puntero (*p) a una variable (n). También pone a prueba el concepto de Puntero a Puntero: puntero *p a puntero **p (sección 9.4 Libro digital, página 344).
//
//  Created by Aerodron Colombia on 12/11/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int n = 75;
    int *p = &n; // Se declara un puntero de enteros. Y 'p' (que es el puntero) contiene la dirección de la variable n.
    /*
     Lo anterior también se puede escribir así:
     int n = 75;//declara una variable n
     int *p;    //declara un puntero a un entero p
     p = &n;    //asigna la dirección de n a p
     */
    cout << "Valor de n = " << n << endl;
    cout << "Dirección de &n = " << &n << endl;
    cout << "Valor variable puntero p (dirección de memoria de n) = " << p << endl;
    cout << "Dirección de variable puntero &p = " << &p << endl; // La variable p se denomina puntero debido a que su valor «apunta» a la posición en memoria de otro valor.
    
    int **pp = &p;  // Concepto de puntero a puntero.
    cout << "Valor variable puntero a puntero pp (dirección de memoria de puntero p) = " << pp << endl;
    cout << "Dirección de variable puntero a puntero &pp = " << &pp << endl;
    **pp = 100; // Se asigna el nuevo valor 100 a la variable n.
    cout << "El nuevo valor de n = " << n << endl;
}

// Usos en C++ para el caracter &:
//
// &n               Se utiliza para devolver la dirección de memoria de esa varible.
//                  Cuando se utiliza como sufijo de un tipo en una declaración de parámetros de una función...
// int& r = n;      1) se declara la variable como sinónimo de la variable que se ha inicializado; o,
// funcion(int& n)  2) declara el parámetro referencia de la variable que se pasa a la función.
