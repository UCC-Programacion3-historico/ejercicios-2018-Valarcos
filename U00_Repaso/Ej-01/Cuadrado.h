#ifndef REPASO_CUADRADO_H
#define REPASO_CUADRADO_H

#include "Geometria.h"

class Cuadrado: public Geometria{
protected:

public:
    Cuadrado(int alto, int ancho, char color):Geometria(alto, ancho, color){}

    int getDiagonal();
};


#endif //REPASO_CUADRADO_H
