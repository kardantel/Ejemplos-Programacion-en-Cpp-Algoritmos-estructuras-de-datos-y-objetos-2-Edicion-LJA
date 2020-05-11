//
//  main.cpp
//  Ejemplo 14.2 | Página 503 - Libro digital
//
//  Este ejemplo no hace nada. Solo es informativo.
//
//  Created by Aerodron Colombia on 18/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

class Prestamo {
    protected:
    float capital;
    float tasa_interes;
    public:
    Prestamo(float, float);
    virtual int CrearTablaPagos(float[MAX_TERM][NUM_COLUMNAS]) = 0;
};

class Pago_fijo : public Prestamo {
    private:
    float pago; // cantidad mensual a pagar por cliente
    public:
    Pago_fijo (float, float, float);
    int CrearTablaPagos(float, [MAX_TERM][NUM_COLUMNAS]);
};
class Hipoteca : public Prestamo {
    private:
    int num_recibos;
    int recibos_por_anyo;
    float pago;
    public:
    Hipoteca(int, int, float, float, float);
    int CrearTablaPagos(float [MAX_TERN][NUM_COLUMNAS]);
};
