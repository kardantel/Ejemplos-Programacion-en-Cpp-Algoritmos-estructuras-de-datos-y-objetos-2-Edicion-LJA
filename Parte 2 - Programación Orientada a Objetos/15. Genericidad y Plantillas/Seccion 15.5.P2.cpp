//
//  main.cpp
//  Seccion 15.5.P2
//
//  Created by Aerodron Colombia on 25/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

//#ifndef PILAGEN4_H
//#define PILAGEN4_H

#include <iostream>

template <class Tipo>
class Pila {
    public :
    Pila();
    Pila(const unsigned n);
    ~Pila() {delete[] valor;}
    //Pila();
    void Vaciar();
    void poner(const Tipo & x);
    Tipo quitar();
    Tipo Cima() const;
    bool Vacía() const;
    bool Llena() const;
    private:
    unsigned max ;
    unsigned cima;
    Tipo * valor;
};

template <class Tipo>
    Pila<Tipo>::Pila():
    max(100),
    cima(0),
    valor(new Tipo[max])
{}

template <class Tipo>
Pila<Tipo>::Pila(const unsigned n):
    max(n),
    cima(0),
    valor(new Tipo[max])
{}

/*
template <class Tipo>
Pila<Tipo> :: ~Pila() {
    delete []valor;
}
*/

template <class Tipo>
void Pila<Tipo>::Vaciar() {
    cima = 0;
}
template <class Tipo>
void Pila<Tipo>::poner(const Tipo & x) {
    valor[cima++] = x;
}
template <class Tipo>
Tipo Pila<Tipo>::quitar() {
    return valor[--cima];
}
template <class Tipo>
Tipo Pila<Tipo>::Cima() const {
    return cima == 0;
}
template <class Tipo>
bool Pila<Tipo>::Llena() const {
    return (cima >= max) ;
}
//#endif // PILAGEN4_H

int main() {
    // Pila de enteros
    Pila <int> p1(6);
    p1.poner(6);
    p1.poner(12);
    p1.poner(18);
    //std::cout << "Número de elementos: " << p1.num_elementos() << std::endl;
    p1.visualizar();
    std::cout << "Quitar 1: " << p1.quitar() << std::endl;
    std::cout << "Quitar 2: " << p1.quitar() << std::endl;
    std::cout << "Quitar 3: " << p1.quitar() << std::endl;
   // std::cout << "Número de elementos: " <<p1.num_elementos() << std::endl;
    std::cout << "Quitar 4: " << p1.quitar() << std::endl;
    std::cout << std::endl ;
    // Pila de enteros largos
    Pila <long> p2(6);
    p2.poner(60000L);
    p2.poner(1000000L);
    p2.poner(2000000L);
    //std::cout <<"Número de elementos:" << p2.num_elementos() << std::endl;
    p2.visualizar();
    std::cout <<"Quitar 1 : " << p2.quitar() << std::endl;
    std::cout <<"Quitar 2 : " << p2.quitar() << std::endl;
    std::cout <<"Quitar 3 : " << p2.quitar() << std::endl;
    //std::cout <<"Número de elementos :" << p2.num_elementos() << std::endl;
    std::cout <<"Quitar 4 : " << p2.quitar() << std::endl;
    Pila <double> p3(6);
    p3.poner(6.6);
    p3.poner(12.12);
    p3.poner(18.18);
    //std::cout <<"Número de elementos : " << p3.num_elementos() << std::endl;
    p3.visualizar();
    std::cout << "Quitar 1 : " <<p3.quitar() << std::endl;
    std::cout << "Quitar 2 : " <<p3.quitar() << std::endl;
    std::cout << "Quitar 3 : " <<p3.quitar() << std::endl;
    std::cout << "Número de elementos :" << p3.num_elementos()<< std::endl;
    std::cout << "Quitar 4 : " <<p3.quitar() << std::endl;
}
