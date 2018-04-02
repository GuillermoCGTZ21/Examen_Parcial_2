//
// Created by el_me on 02/04/2018.
//

#ifndef EXAMEN_PARCIAL_2_COMPARATIVA_H
#define EXAMEN_PARCIAL_2_COMPARATIVA_H


#include "Peso.h"
#include "Dolar.h"

class Comparativa {
protected:
    double numeropeso;

public:
    Comparativa(double numeropeso, double numero);

    //friend Comparativa operator + (const Peso &n1,const Dolar &n2);
    //friend Comparativa operator - (const Peso &n1, const Dolar &n2);
/*
    friend bool operator > (const Peso &n1, const Dolar &n2);
    friend bool operator < (const Peso &n1, const Dolar &n2);
    friend bool operator >= (const Peso &n1, const Dolar &n2);
    friend bool operator <= (const Peso &n1, const Dolar &n2);
    friend bool operator == (const Peso &n1, const Dolar &n2);
    friend bool operator != (const Peso &n1, const Dolar &n2);
    */
};


#endif //EXAMEN_PARCIAL_2_COMPARATIVA_H
