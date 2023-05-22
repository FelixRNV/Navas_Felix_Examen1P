/* Datos del Estudiante
   Felix R. Navas V.
   C.I. 1716272560
   fnavas@est.ups.edu.ec
   22 de Mayo del 2023*/

#include <iostream>
#include <string>
#include <linea.h>
#include <punto.h>

using namespace std;

int main()
{
    Punto p1(3,4),p2(9,17);
    Linea lin(&p1,&p2);
    cout << "Examen del 1er Parcial" << endl;
    cout << "Alumno: Felix R. Navas V." << endl;
    cout << endl;

    cout << "Para línea se tiene: \n";
    cout << "L1["<<lin.getP1()->toString()<<" - "<<lin.getP2()->toString();
    cout << ", d= " << lin.getD() << ", m= " << lin.getM()<< endl << endl;
    return 0;
}
