//
//  main.cpp
//  Ejemplo 14.4 | Página 513 - Libro digital
//
//  Ejemplo de creación de constructor de clase derivada D que accede a las clases base B1 y B2.
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
class D : public B1, B2 {   // Clase derivada D de las clases base B1 y B2.
    public:
    D() { cout << "C-D" << endl; }  // Constructor de la clase derivada D que accede a las clases base B1 y B2.
};
D d1;   // Definimos 'd1' como la variable de la clase derivada D.

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    return 0;
}
