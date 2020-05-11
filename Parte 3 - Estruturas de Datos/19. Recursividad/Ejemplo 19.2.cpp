//
//  main.cpp
//  Ejemplo 19.2 | Página 687 - Libro digital
//
//  Calculo de multiplicación de dos número enteros mayores a 1 de forma recursiva.
//
//  Created by Aerodron Colombia on 2/05/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int anterior(int a, int b) {
    int resultado = 0;
    if (a == 0 || b == 0) { resultado = 0; }
    else if (a == 1 || b == 1) { resultado = a * b; }
    //else if (a < 0 || b < 0) { resultado = -a + anterior(a, (b + 1)); }   No sirve! Daña el PC.
    else { resultado = a + anterior(a, (b - 1)); }
    return resultado;
}

int main() {
    int n1, n2;
    cout << "Ingrese los nímeros a multiplicar: ";
    cin >> n1 >> n2;
    cout << "La multiplicación recursiva de " << n1 << " y " << n2 << " es: " << anterior(n1, n2) << endl;
    return 0;
}
