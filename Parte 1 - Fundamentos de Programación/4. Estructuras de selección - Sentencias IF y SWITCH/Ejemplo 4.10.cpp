//
//  main.cpp
//  Ejemplo 4.10 | Página 165 - Libro digital
//
//
//
//  Created by Aerodron Colombia on 26/02/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int tipo_vehículo, peaje;
    cout << "Introduzca el tipo de vehículo: ";
    cin >> tipo_vehículo;
    switch (tipo_vehículo) {
        case 1:
            cout << "turismo" << endl;
            peaje = 500;
            break;
        case 2:
            cout << "autobús" << endl;
            peaje = 3000;
            break;
        case 3:
            cout << "motocicleta" << endl;
            peaje = 300;
            break;
        default:
            cout << "vehículo no autorizado" << endl;
    }
}
