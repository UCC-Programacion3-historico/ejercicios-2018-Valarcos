#ifndef REPASO_CIRCULO_H
#define REPASO_CIRCULO_H

#include "Geometria.h"


class Circulo: public Geometria{
protected:
    int radio;
public:
    Circulo(int alto, int ancho, char color, int r):Geometria(alto, ancho, color){radio=r;}

    int getRadio();

};


#endif //REPASO_CIRCULO_H
