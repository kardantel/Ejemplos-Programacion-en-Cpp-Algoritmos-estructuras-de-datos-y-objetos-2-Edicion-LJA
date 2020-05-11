//
//  main.cpp
//  Ejemplo 14.6 || Página 514 - Libro digital
//
//  Programa que muestra el uso del constructor de una clase derivada Punto3D.
//
//  Created by Aerodron Colombia on 20/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

class Punto {
    public:
    Punto(int xv, int yv);
    // ...
};
class Punto3D: public Punto {
    public:
    Punto3D(int xv, int yv, int zv);
    void FijarZ();
    private:
    int z;
};
Punto3D ::Punto3D(int xv, int yv, int zv): Punto(xv, yv) { // Constructor de una clase derivada Punto3D.
    FijarZ();
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
