/* Datos del Estudiante
   Felix R. Navas V.
   C.I. 1716272560
   fnavas@est.ups.edu.ec
   22 de Mayo del 2023*/

#include "punto.h"

int Punto::getX() const{
    return x;
}

int Punto::getY() const{
    return y;
}

string Punto::toString()
{
    return "P("+to_string(x)+","+
            to_string(y)+")";
}

Punto::Punto(){
}

Punto::Punto(int x, int y) : x(x),y(y){
}
