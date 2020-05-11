//
//  main.cpp
//  Sección 14.6.1 | Página 526 - Libro digital
//
//  Programa que muestra las diferencias entre ligadura estática y dinámica.
//
//  Created by Aerodron Colombia on 22/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

// define una clase A con dos funciones que imprimen sus nombres
class A {
    public:
    A() { }
    virtual void Dinamica() {
        cout << "Función dinámica de la clase A." << endl;
    }
    void Estatica() {
        cout << "Función estática de la clase A." << endl;
    }
};
// define una clase B, derivada de A, redefiniendo ambas funciones
class B : public A {
    public:
    B() { }
    void Dinamica() {
        cout << "Función dinámica de clase B." << endl;
    }
    void Estatica() {
        cout << "Función estática de clase B." << endl;
    }
};

int main() {
    A *a;   // Definimos 'a' como la variable puntero de la clase base 'A'.
    B *b;   // Definimos 'b' como la variable puntero de la clase base 'B'.
    a = new A();    // Se asigna dirección de memoria del contructor 'A()' en variable puntero 'a'.
    b = new B();    // Se asigna dirección de memoria del contructor 'B()' en variable puntero 'b'.
    cout << "Funciones del objeto a de la clase A:" << endl;
    // Ejemplo de ligadura estática:
    a -> Dinamica();    // Variable puntero 'a' apunta a función 'Dinamica()' de clase 'A'.
    a -> Estatica();    // Variable puntero 'b' apunta a función 'Estatica()' de clase 'A'.
    cout << endl;
    cout << "Funciones del objeto b de la clase B:" << endl;
    b -> Dinamica();    // Variable puntero 'b' apunta a función 'Dinamica()' de clase 'B'.
    b -> Estatica();    // Variable puntero 'b' apunta a función 'Estatica()' de clase 'B'.
    cout << endl;
    // Ejemplo de propiedad de polimorfismo:
    a = b;  // 'a' toma como valor un puntero a un objeto de la clase 'B'.
    cout << "Funciones del objeto 'a' de la clase A al que se ha asignado un valor de la clase B" << endl;
    a -> Dinamica();    // Llamada a la función virtual de la clase B.
    a -> Estatica();    // Llamada a la función no virtual de la clase B
}
