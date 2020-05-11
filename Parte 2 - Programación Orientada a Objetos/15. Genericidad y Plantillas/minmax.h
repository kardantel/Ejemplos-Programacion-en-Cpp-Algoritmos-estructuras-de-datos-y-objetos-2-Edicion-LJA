//Archivo minmax.h

#ifndef __INMAX_H
#define __INMAX_H //evitar múltiples #include

//plantilla de función max
template <class T> T max(T a, T b) {
    if(a > b)
        return a;
    else
        return b;
}
// plantilla de función min
template <class T> T min(T a, T b) {
    if(a < b)
        return a;
    else
        return b;
}
#endif // _MINMAX_H
