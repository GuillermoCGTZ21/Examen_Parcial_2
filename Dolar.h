//
// Created by el_me on 02/04/2018.
//

#ifndef EXAMEN_PARCIAL_2_DOLAR_H
#define EXAMEN_PARCIAL_2_DOLAR_H
#include <string>

class Dolar {
protected:
    double numerodolar;

public:
    Dolar(double numerodolar);
    friend Dolar operator + (const Dolar &n1, const Dolar &n2);
    friend Dolar operator - (const Dolar &n1, const Dolar &n2);
/*
    friend bool operator > (const Dolar &n1);
    friend bool operator < (const Dolar &n1);
    friend bool operator >= (const Dolar &n1);
    friend bool operator <= (const Dolar &n1);
    friend bool operator == (const Dolar &n1);
    friend bool operator != (const Dolar &n1);
*/
    std::string to_String();


};


#endif //EXAMEN_PARCIAL_2_DOLAR_H
