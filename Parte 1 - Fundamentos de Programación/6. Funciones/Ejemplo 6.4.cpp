//
//  main.cpp
//  Ejemplo 6.4 | Página 235 - Libro digital
//
//  Programa que muestra cómo se asignan valores por omisión a valores parámetro.
//
//  Created by Aerodron Colombia on 8/7/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

void f(int a = 10, int b = 20, int c = 30){
    cout << "a = " << a << endl
         << "b = " << b << endl
         << "c = " << c << endl;
}

int main() {
    f();        // Utiliza los tres argumentos por defecto.
    f(1);       // Solo modifica el 1º primer valor por defecto.
    f(1, 5);    // Solo modifican los 2 primeros valores por defecto.
    f(1, 2, 3); // Se modifican los 3 valores por defecto.
    cout << "Pulse Enter para continuar.";
    cin.get();
    return 0;
    // Llamada no vádila: h(9, , , 4);
}
