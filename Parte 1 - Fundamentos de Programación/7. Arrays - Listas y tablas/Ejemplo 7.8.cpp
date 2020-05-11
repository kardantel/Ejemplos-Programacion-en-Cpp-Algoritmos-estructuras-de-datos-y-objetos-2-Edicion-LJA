//
//  main.cpp
//  Ejemplo 7.8 | Página 295 - Libro digital
//
//  Programa que demuestra el uso de un segundo argumento en la función para delimitar el array.
//
//  Created by Aerodron Colombia on 8/9/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int SumaDeEnteros(int* ArrayEnteros, int NoElementos) { //El segundo argumento, NoElementos, es un valor entero que indica a la función SumaDeEnteros cuántos elementos se procesarán en el array ArrayEnteros. (*): método de paso por referencia, mediante punteros estilo C. Si se desea cambiar a estilo C++, se coloca 'ArrayEnteros[]' y se elimina el caracter '*'.
    int i, Total = 0;
    for (i = 0; i < NoElementos; i++)
        Total += ArrayEnteros[i];
    return Total;
}

int main() {
    int Items[10];
    int Total, i;
    cout << "Introduzca 10 números enteros:" << endl;
    for (i = 0; i < 10; i++)
        cin >> Items[i];
    Total = SumaDeEnteros(Items, 10);   // Suma del array
    cout << "La suma es: " << Total << endl;  // Visualizar el resultado
    return 0;
}
