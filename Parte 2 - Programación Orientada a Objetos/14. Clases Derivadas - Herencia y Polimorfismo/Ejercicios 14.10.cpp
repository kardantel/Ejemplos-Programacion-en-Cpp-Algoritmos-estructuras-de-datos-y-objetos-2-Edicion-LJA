//
//  main.cpp
//  Ejercicios 14.10 | Página 533 - Libro digital
//
//
//
//  Created by Aerodron Colombia on 22/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

class Base {
    public:
    virtual void f() {cout << "f(): clase base-!" << endl;}
    void g() {cout << "g():clase base-!" << endl;}
};
class Derivada1:public Base {
    public:
    virtual void f() {cout <<"f(): clase Derivada-!" << endl;}
    void g() {cout << "g() :clase Derivada-!" << endl;}
};
class derivada2 : public Derivada1 {
    public:
    virtual void f() {cout << "f(): clase Derivada2-!" << endl;}
    void g() {cout << "g() :clase Derivada2-!" << endl;}
};

int main() {
    Base b;
    Derivada1 d1;
    Derivada1 d2;
    Base *p = &b;
    p -> f();
    p -> g();
    p = &d1;
    p -> f();
    p -> g();
    p = &d2;
    p -> f();
    p -> g();
}
