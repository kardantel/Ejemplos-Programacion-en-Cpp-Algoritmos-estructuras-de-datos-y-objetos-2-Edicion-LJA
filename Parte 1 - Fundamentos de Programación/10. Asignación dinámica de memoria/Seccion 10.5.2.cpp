//
//  main.cpp
//  Seccion 10.5.2 | Página 383 - Libro digital
//
//  Programa que demuestra la asignación de memoria para un array de estructuras.
//
//  Created by Aerodron Colombia on 6/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;
#include <string>

struct perro {
    char raza[20];
    int edad;
    int altura;
    char color[15];
};

int main() {
    perro *pperro = new perro[3];   //  Se usa 3 para que se aparten 3 espacios de memoria para la estuctura.
    if (pperro == NULL)
        cout << "**Falta de memoria**" << endl;
    else {
        strcpy(pperro[0].raza, "Pastor aleman");
        strcpy(pperro[0].color, "Rubio");
        pperro[0].edad = 4;
        pperro[0].altura = 120;
        strcpy(pperro[1].raza, "dalmata");
        strcpy(pperro[1].color, "blanco y negro");
        pperro[1].edad = 5;
        pperro[1].altura = 130;
        strcpy(pperro[2].raza, "doberman");
        strcpy(pperro[2].color, "negro");
        pperro[2].edad = 4;
        pperro[2].altura = 155;
        for (int i = 0; i < 3; i++) {
            cout << "\nRaza: "<< pperro[i].raza << endl;
            cout << "Color: " << pperro[i].color << endl;
            cout << "Altura: "<< pperro[i].altura << endl;
            cout << "Edad: " << pperro[i].edad << endl;
        }
        delete [] pperro;
    }
}
