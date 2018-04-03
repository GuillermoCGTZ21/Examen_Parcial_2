//
// Created by el_me on 02/04/2018.
//

#ifndef EXAMEN_PARCIAL_2_PESO_H
#define EXAMEN_PARCIAL_2_PESO_H
#include <string>
class Dolar;

class Peso {

public:
    double numeropeso;
//to_string
    std::string to_String();
//constructores
    Peso();
    Peso(double numeropeso);
//suma
    friend Peso operator + (const Peso& n1, const Peso& n2);
    friend Peso operator + (const Peso& n2, const Dolar& n3);
//resta
    friend Peso operator - (const Peso& n4, const Dolar& n5);
    friend Peso operator - (const Peso &n4, const Peso &n5);
//comparación
    friend bool operator > (const Peso &n6, const Dolar &n7);
    friend bool operator < (const Peso &n6, const Dolar &n7);
    friend bool operator >= (const Peso &n6, const Dolar &n7);
    friend bool operator <= (const Peso &n6, const Dolar &n7);
    friend bool operator == (const Peso &n6, const Dolar &n7);
    friend bool operator != (const Peso &n6, const Dolar &n7);

};


#endif //EXAMEN_PARCIAL_2_PESO_H
