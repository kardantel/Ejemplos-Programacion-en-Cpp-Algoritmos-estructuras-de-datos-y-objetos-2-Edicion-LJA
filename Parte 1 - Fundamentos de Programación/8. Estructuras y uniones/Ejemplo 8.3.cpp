//
//  main.cpp
//  Ejemplo 8.3 | Página 321 - Libro digital
//
//  Una librería desea catalogar su inventario de libros. El siguiente programa crea un array de 100 estructuras, donde cada estructura contiene diversos tipos de variables, incluyendo arrays.
//
//  Created by Aerodron Colombia on 11/11/19.
//  Copyright © 2019 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;

struct inventario {
    char titulo[25];
    char fecha_publi[20];
    char autor[30];
    int num;
    int pedido;
    float precio_venta;
};

int main() {
    inventario libro[100];  //En el libro está así: struct inventario libro[100]; Igual funciona.
    int total = 0;
    char respuesta;
    do {
        cout << "Total libros " << (total+1) << "\n";
        cout << "¿Cuál es el título?: ";
        cin >> libro[total].titulo;
        cout << "¿Cuál es la fecha de publicación?: ";
        cin >> libro[total].fecha_publi;
        cout << "¿Quién es el autor?: ";
        cin >> libro[total].autor;
        cout << "¿Cuántos libros existen? ";
        cin >> libro[total].num;
        cout << "¿Cuántos ejemplares existen pedidos? ";
        cin >> libro[total].pedido;
        cout << "¿Cuál es el precio de venta? ";
        cin >> libro[total].precio_venta;
        fflush(stdin);
        cout << "\n¿Hay más libros? (S/N)";
        cin >> respuesta;
        fflush(stdin);
        respuesta = toupper(respuesta);
        if (respuesta == 'S') {
            total++;
            continue;
        }
    } while (respuesta == 'S');
    return 0;
}
