//
//  MaximoComunDivisor.cpp
//  Problema 19.3 | Página 698 - Libro digital
//
//  MCD de dos números enteros.
//
//  Created by Aerodron Colombia on 2/05/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int mcd(int, int);

int main() {
    // datos locales
    int m, n;
    cout << "* --- MÁXIMO COMÚN DIVISOR --- *" << endl;
    cout << "Introduzca dos enteros positivos: ";
    cin >> m >> n;
    cout << endl;
    cout << "El máximo común divisor es: " << mcd (m, n) << endl;
}

// Función recursiva mcd
int mcd(int m, int n) {
    // m y n han de ser mayores > 0
    // devuelve el máximo común divisor de m y n
    if (n <= m && m % n == 0)   // mcd(m, n) es n, si (n <= m) y n divide a m.
        return n;
    else if (m < n) // es mcd(n, m) si m < n.
        return mcd(n, m);
    else
        return mcd(n, m % n);   // es mcd(n, resto de m dividido por n) en caso contrario.
} // final de mcd
