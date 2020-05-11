//
//  SumaRecursiva.cpp
//  Ejemplo 19.6 | Página 695 - Libro digital
//
//  Cálculo de la suma de los primeros N enteros positivos de forma iterativa.
//
//  Created by Aerodron Colombia on 2/05/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int CalculoSumaIter(int N) {
    int suma = 0, i;
    for (i = 1; i <= N; i++) {
        suma = suma + i;
    }
    return suma;
}

int CalculoSumaRecur(int N) {
    if (N == 1) // Test para parar o continuar (condición de salida)
        return 1;   // Caso final: se detiene la recursión
    else
        return N + CalculoSumaRecur(N - 1); // Caso recursivo: la recursión continúa con una llamada recursiva
}

int main() {
    int n, resultadoIter, resultadoRecur;
    cout << "Introduzca el entero a sumar: ";
    cin >> n;
    resultadoIter = CalculoSumaIter(n);
    cout << "La suma, de forma iterativa es " << resultadoIter << endl;
    
    resultadoRecur = CalculoSumaRecur(n);
    cout << "La suma, de forma recursiva es " << resultadoRecur << endl;
    return 0;
}
