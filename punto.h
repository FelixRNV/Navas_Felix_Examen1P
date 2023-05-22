/* Datos del Estudiante
   Felix R. Navas V.
   C.I. 1716272560
   fnavas@est.ups.edu.ec
   22 de Mayo del 2023*/

#ifndef PUNTO_H
#define PUNTO_H

#include <cmath>
#include <string>

using namespace std;
class Punto
{
private:
    int x,y;
public:
    Punto();
    Punto(int x, int y);
    int getX() const;
    int getY() const;
    string toString();
};

#endif // PUNTO_H
