//
//  main.cpp
//  Seccion 13.2.4 | Página 472 - Libro digital
//
//  Programa que demuestra la declaración de las funciones dentro de una clase, definición por fuera de la clase y uso de las funcion 'main'.
//
//  Created by Aerodron Colombia on 9/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

class radioMP3 {
    private:
        float frecuencia;
        int volumen;
    public:
        void iniciar();
        void AumentarFrecuencia();
        void DisminuirFrecuencia();
        void BajarVolumen();
        void SubirVolumen();
};
void radioMP3::iniciar() {
    // inicializar atributos de frecuencia y volumen
    cout << "¡RADIO ENCENDIDA!" << endl;
    cout << "Digita la frecuencia incial: ";
    cin >> frecuencia;
    cout << "Digita el volumen incial: ";
    cin >> volumen;
    //frecuencia = 99.7;
    //volumen = 10;
    cout << "\nFrecuencia inicial: " << frecuencia << endl;
    cout << "Volumen inicial: " << volumen << endl;
    
    cout << "\nIngresa: '+' -> Aumentar volumen."
         << "\n\t\t '-' -> Disminuir volumen."
         << "\n\t\t 'm' -> Aumentar frecuencia."
         << "\n\t\t 'n' -> Disminuir frecuencia. Y luego digita ENTER." << endl;
    cout << endl;
}
void radioMP3::SubirVolumen() {
    // Incrementar en una unidad el volumen
    cout << "Volumen: " << ++volumen << endl;
}
void radioMP3::BajarVolumen() {
    // Disminuir en una unidad el volumen
    cout << "Volumen: " << --volumen << endl;;
}
void radioMP3::DisminuirFrecuencia() {
    // disminuir frecuencia 1 MHz
    cout << "Frecuencia: " << --frecuencia << endl;
}
void radioMP3::AumentarFrecuencia() {
    // aumentar la frecuencia 1 MHz
    cout << "Frecuencia: " << ++frecuencia << endl;
}


int main() {
    char Auxiliar[2];
    radioMP3 miEstacion;    // Se crea el objeto de la clase 'radioMP3' llamado 'miEstacion'.
    miEstacion.iniciar();
    cin.getline(Auxiliar, 2);   // Limpiar buffer de teclado.
    char c;
    while ((c = cin.get()) != EOF) {    // También funciona la función getchar()
        switch (c) {
                case '+':
                    miEstacion.SubirVolumen();
                    cin.getline(Auxiliar, 2);
                    break;
                case '-':
                    miEstacion.BajarVolumen();
                    cin.getline(Auxiliar, 2);
                    break;
                case 'm':
                    miEstacion.AumentarFrecuencia();
                    cin.getline(Auxiliar, 2);
                    break;
                case 'n':
                    miEstacion.DisminuirFrecuencia();
                    cin.getline(Auxiliar, 2);
                    break;
                default:
                    cout << "!Dígito no válido!" << endl;
                    cin.getline(Auxiliar, 2);
        }
    }
    cout << "¡RADIO APAGADA!" << endl;
    return 0;
}

/*
int main() {
    radioMP3 miEstacion;    // Se crea el objeto de la clase 'radioMP3' llamado 'miEstacion'.
    miEstacion.iniciar();
    miEstacion.SubirVolumen();
    miEstacion.BajarVolumen();
    miEstacion.AumentarFrecuencia();
    miEstacion.DisminuirFrecuencia();
}
*/
