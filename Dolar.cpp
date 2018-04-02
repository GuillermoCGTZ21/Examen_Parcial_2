//
// Created by el_me on 02/04/2018.
//

#include <string>
#include "Dolar.h"

Dolar::Dolar(double numerodolar){
    this->numerodolar = numerodolar;
}
Dolar operator + (const Dolar &n1, const Dolar &n2){

    int numerototaldolar = n1.numerodolar+n2.numerodolar;

    Dolar resultado = *new Dolar (numerototaldolar);
}
/*
Dolar operator - (const Dolar &n1){

    Dolar resultado = *new Dolar (n1.numerodolar*18.50);
}
 */
std::string  Dolar:: to_String(){
    std::string nume;

    nume = std::to_string(numerodolar);
    return "$"+nume+ " USD";
}
