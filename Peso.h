//
// Created by el_me on 02/04/2018.
//

#ifndef EXAMEN_PARCIAL_2_PESO_H
#define EXAMEN_PARCIAL_2_PESO_H

#include <string>
class Peso {

protected:
    double numeropeso;

public:
    std::string to_String();
    Peso(double numeropeso);
    friend Peso operator + (const Peso &n1, const Peso &n2);
    friend Peso operator - (const Peso &n1, const Peso &n2);

/*
    friend bool operator > (const Peso &n1);
    friend bool operator < (const Peso &n1);
    friend bool operator >= (const Peso &n1);
    friend bool operator <= (const Peso &n1);
    friend bool operator == (const Peso &n1);
    friend bool operator != (const Peso &n1);
    */

};


#endif //EXAMEN_PARCIAL_2_PESO_H
