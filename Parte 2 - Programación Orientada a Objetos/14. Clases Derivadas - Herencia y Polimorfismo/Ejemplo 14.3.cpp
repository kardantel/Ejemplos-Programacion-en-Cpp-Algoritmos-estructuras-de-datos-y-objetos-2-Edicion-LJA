//
//  main.cpp
//  Ejemplo 14.3 | Página 511 - Libro digital
//
//  Ejemplo del uso de los tipos de herencia y cómo son acesibles.
//
//  Created by Aerodron Colombia on 20/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

class Base {
    public:
    int i1;
    protected:
    int i2;
    private:
    int i3;
};
class D1 : private Base {
    void f();
};
class D2 : protected Base {
    void g();
};
class D3 : public Base {
    void h();
};
class D4 : protected Base { // Al declarar i1 en la sección pública de D4 también hace a i1 público en D4.
    public:
    using Base::i1; // declaración de acceso permitido.
};
class D5 : private Base {   //De modo similar se puede hacer a i2 protegido en D5 nombrando i2 en la sección protegida de D5.
    protected:
    using Base::i2; // declaración de acceso
};

/*
Ninguna de las subclases tienen acceso al miembro i3 de la clase Base. Las tres clases pueden acceder a los miembros i1 e i2. En la definición de la función miembro f() se tiene:
*/
void D1::f() {
    i1 = 0; // Correcto
    i2 = 0; // Correcto
 // i3 = 0; // Error: 'i3' es un miembro privado de 'Base'.
};
//El acceso a i1, i2 e i3 desde el exterior de las tres clases se muestra en el siguiente programa:
int main() {
    Base b;
    b.i1 = 0; // Correcto
 // b.i2 = 0; // ERROR: 'i2' is a protected member of 'Base'
 // b.i3 = 0; // ERROR: 'i3' is a private member of 'Base'
    D1 d1;
 // d1.i1 = 0; // ERROR: 'i1' is a private member of 'Base'
 // d1.i2 = 0; // ERROR: 'i2' is a private member of 'Base'
 // d1.i3 = 0; // ERROR: 'i3' is a private member of 'Base'
    D2 d2;
 // d2.i1 = 0; // ERROR: 'i1' is a protected member of 'Base
 // d2.i2 = 0; // ERROR: 'i2' is a protected member of 'Base'
 // d2.i3 = 0; // ERROR: 'i3' is a private member of 'Base'
    D3 d3;
    d3.i1 = 0; // Correcto
 // d3.i2 = 0; // ERROR: 'i2' is a protected member of 'Base'
 // d3.i3 = 0; // ERROR: 'i3' is a private member of 'Base'
    D4 d4;
    d4.i1 = 10; // CORRECTO
    cout << d4.i1 << endl;
    D5 d5;
 // d5.i2 = 10; // ERROR: 'i2' is a protected member of 'D5'
};
