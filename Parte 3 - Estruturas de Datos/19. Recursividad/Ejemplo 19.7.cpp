//
//  main.cpp
//  Ejemplo 19.7 | Página 699 - Libro digital
//
//  Programa con función recursiva que calcula la suma de los cuadrados de los N primeros números positivos.
//
//  Created by Aerodron Colombia on 2/05/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int SumaCuadrados(int n);

int main() {
    int resultado = 0, num;
    cout << "Introduzca un entero : ";
    cin >> num;
    resultado = SumaCuadrados(num);
    cout << "La suma de los cuadrados de los " << num << " primeros números positivos es " << resultado << endl;
    return 0 ;
}

// definición recursiva de la función de Fibonacci
int SumaCuadrados(int n) {
    if (n == 1) //test para parar o continuar (condición de salida)
        return 1; //caso final se detiene la recursión
    else
        return n*n + SumaCuadrados(n - 1); //caso recursivo la recursión continúa con llamada recursiva
}
