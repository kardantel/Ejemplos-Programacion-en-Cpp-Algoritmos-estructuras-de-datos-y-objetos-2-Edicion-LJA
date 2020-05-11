//
//  main.cpp
//  Ejemplo 14.5 | Página 513 - Libro digital
//
//  Programa que muestra cómo los constructores de las clases base se invocan antes del constructor de la clase derivada; los constructores de la clase base se invocan en la secuencia en que están especificados.
//
//  Created by Aerodron Colombia on 20/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

class B1 {
    public:
    B1() { cout << "C-B1" << endl; }
};
class B2 {
    public:
    B2() { cout << "C-B2" << endl; }
};
class D1 : public B1 {
    public :
    D1() { cout << "C-D1" << endl; }    // Constructor de la clase derivada D1 que accede a las clase base B1.
};
class D2 : public D1, public B2 {
    public:
    D2() { cout << "C-D2" << endl; }    // Constructor de la clase derivada D2 que accede a la clases derivada D1 y a la clase base B2.
};
D2 d2;  // Definimos 'd2' como la variable de la clase derivada D2.

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
