//
//  main.cpp
//  Ejemplo 14.7 | Página 515 - Libro digital
//
//
//
//  Created by Aerodron Colombia on 20/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

class C1 {
    public:
    C1(int n);  // Contructor de la clase C1.
    ~C1();  // Destructor del contructor de la clase C1.
    private:
    int *pi, l; // Variabe puntero entero pi.
};
C1::C1(int n) :l(n) {   // Constructor de la clase derivada C1.
    cout << l << " enteros se asignan " << endl;
    pi = new int[l];
}
C1::~C1() { // Destructor del contructor de la clase derivada C1.
    cout << l << " enteros son liberados " << endl;
    delete[] pi;
}
class C2 : public C1 {
    public :
    C2(int n);  // Contructor de la clase C2.
    ~C2();  // Destructor del contructor de la clase C1.
    private :
    char *pc;   // Variabe puntero caracter pc.
    int l;
} ;
C2 ::C2(int n) :C1(n), l(n) {   // Constructor de la clase derivada C2.
    cout << l << " caracteres son asignados " << endl;
    pc = new char[l];
}
C2::~C2() { // Destructor del contructor de la clase derivada C1.
    cout << l << " caracteres son liberados " << endl;
    delete[] pc;
}

int main() {
    C2 a(50), b(100);   // C2 es la variable del constructor de la clase derivada. 'a' hace referencia a C1 y 'b' a l.
}
