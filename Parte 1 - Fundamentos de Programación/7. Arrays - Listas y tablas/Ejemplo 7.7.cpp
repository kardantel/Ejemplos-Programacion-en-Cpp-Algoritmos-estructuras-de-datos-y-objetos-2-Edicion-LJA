//
//  main.cpp
//  Ejemplo 7.7 + Ejercicio 7.2 | Página 293, 294 - Libro digital
//
//  Programa que muestra el uso de arrays en funciones.
//
//  Created by Aerodron Colombia on 8/8/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

//FORMA 1: Del libro. Dejando en 'main()' varias impresiones en pantalla.
/*
const int c = 100;  //Variable global a todo el código
void leerArray(double a[], int& n);
void imprimirArray (const double a[], const int n);
double Suma(const double a[], const int n);

int main() {
    double a[c];    //Indispensable aquí para declarar el array.
    int n;          //Indispensable aquí para que la función reconozca el tamaño del array.
    leerArray(a, n);
    cout << "El array tiene " << n << " elemento(s) que son:\n";   //El nuevo valor de 'n' viene de 'LeerArray' ya que se pasa (o declara) por referencia.
    imprimirArray(a, n);
    cout << "La suma de los elementos del array es: " << Suma(a, n) << endl;
}

void leerArray(double a[], int& n) {    //Se sitúa un segundo argumento que indica el número de elementos del array ya que la función receptora no puede conocer cuántos elementos existen en el array.
    n = 0;  //Aunque no es necesario este valor, el libro lo coloca como ejemplo de que la variable puede ser cambiada dentro de la función y usar ese nuevo valor por fuera de ella, ya que se pasa por referencia.
    cout << "Introduzca tantos datos como quiera. Para terminar introduzca 0:\n";
    for (n = 0; n < c; n++) {   //En este bucle 'for' es donde se cambia el valor de la variable 'n'.
        cout << "Dato " << n << ": ";
        cin >> a[n];    //No es necesario retornar el valor de a[n] porque las listas/tablas se pasan por referencia por lo que al terminar el 'for' la lista/tabla declarada en main ya tiene sus valores.
        if (a[n] == 0) break;
    }
}

void imprimirArray(const double a[], const int n) { //Aquí el valor de 'n' no cambia porque es constante.
    for (int i = 0; i < n; i++)
        cout << "Fila " << i << ": " << a[i] << endl;
}

double Suma(const double a[], const int n) {  //Aquí el valor de 'n' no cambia porque es constante.
    double s = 0.0;
    for (int i = 0; i < n; i++)
        s += a[i];
    return s;
}
*/

//FORMA 2: Forma ideal. Dejando en 'main()' únicamente el llamado a las funciones.
const int c = 100;
void leerArray(double a[], int& n);
void imprimirArray (const double a[], const int n);
void Suma(const double a[], const int n);

int main() {
    double a[c];
    int n;
    leerArray(a, n);
    imprimirArray(a, n);
    Suma(a, n);
}

void leerArray(double a[], int& n) {
    n = 0;
    cout << "Introduzca tantos datos como quiera. Para terminar introduzca 0:\n";
    for (n = 0; n < c; n++) {
        cout << "Dato " << n << ": ";
        cin >> a[n];
        if (a[n] == 0) break;
    }
    cout << "El array tiene " << n << " elemento(s) que son:\n";
}

void imprimirArray(const double a[], const int n) {
    for (int i = 0; i < n; i++)
        cout << "Fila " << i << ": " << a[i] << endl;
}

void Suma(const double a[], const int n) {
    int s = 0;
    for (int i = 0; i < n; i++)
        s += a[i];
    cout << "La suma de los elementos del array es: " << s << endl;
}
