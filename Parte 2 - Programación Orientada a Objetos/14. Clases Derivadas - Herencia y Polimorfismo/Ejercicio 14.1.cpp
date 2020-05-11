//
//  main.cpp
//  Ejercicio 14.1 | Página 505 - Libro digital
//
//  Representar la jerarquía de clases de publicaciones que se distribuyen en una librería: revistas, libros, etc.
//
//  Created by Aerodron Colombia on 18/03/20.
//  Copyright © 2020 Carlos Daniel Pimentel Díaz. All rights reserved.
//

#include <iostream>
using namespace std;

class Publicacion {
    public:
    void NombrarEditor(const char *s);
    void PonerFecha(unsigned long fe);
    private:
    string editor;
    unsigned long fecha;
};
class Revista : public Publicacion {
    public:
    void NumerosPorAnyo(unsigned n);
    void FijarCirculacion(unsigned long n);
    private:
    unsigned numerosPorAnyo;
    unsigned long circulacion;
};
class Libro : public Publicacion {
    public:
    void PonerISBN(const char *s);
    void PonerAutor (const char *s);
    private:
    string ISBN;
    string autor;
};

int main() {
    Libro L;
    L.NombrarEditor("McGraw-Hill");
    L.PonerFecha(990606);
    L.PonerISBN("84-481-2015-9");
    L.PonerAutor("Mackoy, José Luis");
    
    Revista R;
    R.NumerosPorAnyo(12);
    R.FijarCirculacion(300000L);
}
