#include "Geometria.h"

Geometria::Geometria(int alto1, int ancho1, char color1){
    alto= alto1;
    ancho= ancho1;
    color= color1;
}

void Geometria::setAlto(int alto1){
    alto= alto1;
}
void Geometria::setAncho(int ancho1){
    ancho= ancho1;
}
void Geometria::getColor(char color1){
    color= color1;
}
int Geometria::getAlto(){
    return alto;
}
int Geometria::getAncho(){
    return ancho;
}
char Geometria::getColor(){
    return color;
}