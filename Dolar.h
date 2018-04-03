//
// Created by el_me on 02/04/2018.
//

#ifndef EXAMEN_PARCIAL_2_DOLAR_H
#define EXAMEN_PARCIAL_2_DOLAR_H
#include <string>

class Peso;


class Dolar{

public:
    double numerodolar;
//constructores
    Dolar();
    Dolar(double numerodolar);
//suma
    friend Dolar operator + (const Dolar &n1, const Dolar &n2);
    friend Dolar operator + (const Dolar &n1, const Peso &n2);
//resta
    friend Dolar operator - (const Dolar &n3, const Dolar &n4);
    friend Dolar operator - (const Dolar &n3, const Peso &n4);
//incremento
    friend Dolar operator ++ (const Dolar &n5);
    friend Dolar operator ++ (const Dolar &n5, int);

    //to_string
    std::string to_String();


};


#endif //EXAMEN_PARCIAL_2_DOLAR_H
