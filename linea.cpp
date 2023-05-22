/* Datos del Estudiante
   Felix R. Navas V.
   C.I. 1716272560
   fnavas@est.ups.edu.ec
   22 de Mayo del 2023*/

#include "linea.h"

float Linea::getD() const{
    float aux;
    aux=sqrt((pow((p1->getX()-p2->getX()),2)+pow((p1->getY()-p2->getY()),2)));
    return aux;
}

float Linea::getM() const{
    float aux;
    aux=(p2->getY()-p1->getY())/(p2->getX()-p1->getX());
    return aux;
}

Punto *Linea::getP1() const{
    return p1;
}

Punto *Linea::getP2() const{
    return p2;
}

Linea::Linea(){
}

Linea::Linea(Punto *p1, Punto *p2) : p1(p1),p2(p2){
}
