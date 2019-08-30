#ifndef REPASO_TRIANGULO_H
#define REPASO_TRIANGULO_H

#include "Geometria.h"


class Triangulo: public Geometria{
protected:
    int angulo;
public:
    Triangulo(int alto, int ancho, char color, int ang):Geometria(alto, ancho, color){angulo=ang;}

    int getAngulo();

};


#endif //REPASO_TRIANGULO_H
