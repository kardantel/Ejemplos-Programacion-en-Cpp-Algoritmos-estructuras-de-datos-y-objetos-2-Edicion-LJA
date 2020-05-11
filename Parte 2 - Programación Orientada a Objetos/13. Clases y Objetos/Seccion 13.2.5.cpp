//
//  main.cpp
//  Seccion 13.2.5 | Página 474 - Libro digital
//
//  Demostracion del uso de objetos
//
//  Created by Aerodron Colombia on 9/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;


class demoObj {
    private:
    int undato; //datos de la clase
    public:
    void fijardatos (int d) { //establecer datos. Definición de función en línea (inline).
        undato = d;
    }
    void mostrardatos () { //visualizar datos
        cout << "El dato es: " << undato << endl;
    }
};
    
int main () {
    demoObj d1, d2;
    d1.fijardatos(2005);
    d2.fijardatos(2010);
    d1.mostrardatos();
    d2.mostrardatos();
    return 0;
}
