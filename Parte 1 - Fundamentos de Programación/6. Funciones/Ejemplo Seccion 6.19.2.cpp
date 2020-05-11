//
//  main.cpp
//  Ejemplo Seccion 6.19.2 | Página 268 - Libro digital
//
//  Se utiliza el archivo de cabecera minmax.h para declarar dos plantillas de funciones minimo() y maximo(); y al mismo tiempo, demuestra la sobrecarga de funciones (polimorfismo). El uso de plantillas de funciones en archivos separados se usarán en Parte 2 - Genericidad y Plantillas - Ejemplo 15.2
//
//  Created by Aerodron Colombia on 29/02/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream> // Indica al compilador de C++ que iostream es una biblioteca estándar.
#include "minmax.h" // Indica que el nombre del archivo entre comillas, es una biblioteca definida por el programador.
using namespace std;

/*// Aunque está en el libro, en Xcode no es necesario colocar éste código. Igualmente compila.
int max(int a, int b);
double max(double a, double b);
char max(char a, char b);
*/

int main() {
    int e1 = 400; int e2 = 500;
    double d1 = 2.718283; double d2 = 3.141592;
    char c1 = 'X'; char c2 = 't';
    cout << "maximo (e1, e2) = " << maximo(e1, e2) << endl;
    cout << "maximo (d1, d2) = " << maximo(d1, d2) << endl;
    cout << "maximo (c1, c2) = " << maximo(c1, c2) << endl;
    return 0;
}

/*// Así el código también funciona.
template <class T> T maximo(T a, T b) {
    if (a > b) {return a;}
    else {return b;}
}

template <class T> T minimo(T a, T b) {
    if (a < b) {return a;}
    else {return b;}
}

int main() {
    int e1 = 400; int e2 = 500;
    double d1 = 2.718283; double d2 = 3.141592;
    char c1 = 'X'; char c2 = 't';
    cout << "maximo (e1, e2) = " << maximo(e1, e2) << endl;
    cout << "maximo (d1, d2) = " << maximo(d1, d2) << endl;
    cout << "maximo (c1, c2) = " << maximo(c1, c2) << endl;
    return 0;
}
*/
