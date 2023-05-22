/* Datos del Estudiante
   Felix R. Navas V.
   C.I. 1716272560
   fnavas@est.ups.edu.ec
   22 de Mayo del 2023*/

#ifndef LINEA_H
#define LINEA_H

#include <punto.h>


class Linea
{
private:
    float d,m;
    Punto *p1;
    Punto *p2;
public:
    static int NUM_LINEAS;

    Linea();
    Linea(Punto *p1, Punto *p2);

    float getD() const;
    float getM() const;
    Punto *getP1() const;
    Punto *getP2() const;
};

#endif // LINEA_H
