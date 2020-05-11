//
//  main.cpp
//  Seccion 15.3.4
//
//  Created by Aerodron Colombia on 23/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>

template <class T>
void intercambio(T& a, T& b) {
    T aux = a;
    a = b;
    b = aux;
}

template <class T>
void ordenar(T* v, int n) {
    for (int intervalo = n/2; intervalo > 0; intervalo /=2)
        for(int i = intervalo; i < n; i++)
            for(int j = i - intervalo; j >= 0 && v[j+intervalo] < v[j];j -= intervalo)
                return intercambio(v[j], v[j+intervalo]);
}

extern int rango_ent[30];
extern std::string lista_cadena[10];

int main() {
    ordenar(rango_ent, 30); //llama a ordenar(int *, int);
    ordenar(lista_cadena, 10);//llama a ordenar (string *, int);
    return 0;
}
