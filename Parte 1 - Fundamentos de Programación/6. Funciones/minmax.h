//minmax.h
#ifndef __MINMAX_H
#define __MINMAX_H // Evita inclusiones múltiples

template <class T> T maximo(T a, T b) {
    if (a > b) {return a;}
    else {return b;}
}
template <class T> T minimo(T a, T b) {
    if (a < b) {return a;}
    else {return b;}
}
#endif
