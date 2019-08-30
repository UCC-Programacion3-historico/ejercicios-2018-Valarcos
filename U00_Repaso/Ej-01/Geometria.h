#ifndef REPASO_GEOMETRIA_H
#define REPASO_GEOMETRIA_H

#include "Color.h"

class Geometria {
    protected:			/*Los constructores y destructores NO SE HEREDAN, pero desde un constructor de subclase puedo invocar
						el constructor de la clase padre*/
        int alto;
        int ancho;
        char color;

    public:
        Geometria(int, int, char);

        void setAlto(int);
        void setAncho(int);
        void getColor(char);
        int getAlto();
        int getAncho();
        char getColor();


        virtual int getSuperficie()= 0;
        virtual int getPerimetro()= 0;
        //el ser virtual y que sea PURA(que el metodo sin parametro este igualado a 0) significa que
        //	no puedo definirlo ahora, va a ser definido en lasclases derivadas

        //el que una funcion tenga la palabra clave VIRTUAL significa que las subclases de esta estaran
        //ligadas dinamicamente significa que el linkeo de ciertos metodos no se realiza en el momento de
        //compilacion, sino que se liga en el momento justo en el cual se va a usar


//una CLASE ABSTRACTA es una clase que tiene al menos un metodo virtual pura

//una clase ABSTRACTA no permite que se instancien objetos de ella

//una clase ABSTRACTA solo sirve para usarla como base para otras bases

//cualquier metodo en una clase puede ser redefinido00

};


#endif //REPASO_GEOMETRIA_H
