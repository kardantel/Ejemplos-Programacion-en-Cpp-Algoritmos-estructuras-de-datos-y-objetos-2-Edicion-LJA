//
//  main.cpp
//  Ejercicio 14.2 | Página 509 - Libro digital
//
//  Programa que calcula el área de un círculo y de un cuadrado usando clases base y heredadas
//
//  Created by Aerodron Colombia on 18/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

const float PI = 3.14159265;

class obj_geom {
    public:
    obj_geom(float x = 0, float y = 0) : xC(x), yC(y) {}
    void imprimircentro() const {
        cout << "(" << xC << ", " << yC << ")" << endl;
    }
    protected:
    float xC, yC;
};

class circulo : public obj_geom {
    public:
    circulo(float x_C, float y_C, float r) : obj_geom(x_C, y_C) {
        radio = r;
    }
    float area() const {return PI * radio * radio;}
    private:
    float radio;
};
class cuadrado : public obj_geom {
    public :
    cuadrado(float x_C, float y_C, float x, float y) : obj_geom(x_C, y_C) {
        x1 = x;
        y1 = y;
    }
    float area() const {
        float a, b;
        a = x1 - xC;
        b = y1 - yC;
        return 2 * (a * a + b * b);
        }
    private:
    float x1, y1;
};

int main() {
    circulo C(2, 2.5, 2);   // Se definen: posición del centro del círuclo en X, en Y y el radio.
    cuadrado Cuad(3, 3.5, 4.37, 3.85);  // Se definen: posición del centro del cuadrado en X, en Y y posición aleatoria en X y Y.
    cout << "centro del circulo: "; C.imprimircentro();
    cout << "centro del cuadrado: "; Cuad.imprimircentro();
    cout << "Area del circulo: " << C.area() << endl;
    cout << "Area del cuadrado: " << Cuad.area() << endl;
    return 0;
}
