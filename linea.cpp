#include "linea.h"

float Linea::getD() const
{
    return d;
}

float Linea::getM() const
{
    return m;
}

Punto *Linea::getP1() const
{
    return p1;
}

Punto *Linea::getP2() const
{
    return p2;
}

Linea::Linea()
{

}

Linea::Linea(Punto *p1, Punto *p2) : p1(p1),
    p2(p2)
{}
