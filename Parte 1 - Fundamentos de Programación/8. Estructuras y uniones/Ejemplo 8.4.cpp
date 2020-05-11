//
//  main.cpp
//  Ejemplo 8.4 | Página 325 - Libro Digital
//
//  Declaración de una estructura con miembros dato y función. Se utiliza el paso por referencia.
//
//  Created by Aerodron Colombia on 11/11/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

struct Punto {
    // miembros dato
    double x, y, z;
    // funciones miembro
    void sumar (const Punto& p1, const Punto& p2) {
        x = p1.x + p2.x;
        y = p1.y + p2.y;
        z = p1.z + p2.z;
    }
    void Restar (const Punto& p1, const Punto& p2) {
        x = p1.x - p2.x;
        y = p1.y - p2.y;
        z = p1.z - p2.z;
    }
};

int main() {
    Punto p1, p2, p3;
    p1.x = 1.0; p1.y = 2.0; p1.z = 3.0;
    p2.x = 8.0; p2.y = 9.0; p2.z = 10.0;
    p3.x = 0.0; p3.y = 0.0; p3.z = 0.0;
    // Se muestra que los valores de 'p3' en x, y, z es cero (0).
    cout << "Sin operación:" << endl;
    cout << "p3.x: " << p3.x << endl;
    cout << "p3.y: " << p3.y << endl;
    cout << "p3.z: " << p3.z << endl;
    // Se aplica la función 'sumar' de la estructura 'Punto'.
    p3.sumar (p1, p2);
    cout << "Resultado suma:" << endl;
    cout << "p3.x: " << p3.x << endl;
    cout << "p3.y: " << p3.y << endl;
    cout << "p3.z: " << p3.z << endl;
    // Se aplica la función 'Restar' de la estructura 'Punto'.
    p3.Restar (p1, p2);
    cout << "Resultado resta:" << endl;
    cout << "p3.x: " << p3.x << endl;
    cout << "p3.y: " << p3.y << endl;
    cout << "p3.z: " << p3.z << endl;
}
