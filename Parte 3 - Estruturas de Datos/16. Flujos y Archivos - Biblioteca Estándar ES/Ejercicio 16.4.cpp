//
//  main.cpp
//  Ejercicio 16.4
//
//  Created by Aerodron Colombia on 30/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;
#include <fstream>

int main() {
    ofstream sal ("demo.txt");
    if (!sal) {
        cout << "No se puede abrir el archivo" << endl;
        return 1;
    }
    sal << 10 << " " << 325.45 << endl;
    sal << "Ejemplo de archivo de texto" << endl;
    sal.close();
return 0;
}
