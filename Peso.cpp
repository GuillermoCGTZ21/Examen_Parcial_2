//
// Created by el_me on 02/04/2018.
//

#include "Peso.h"
Peso::Peso(double numeropeso){
    this->numeropeso = numeropeso;
}
Peso operator + (const Peso &n1, const Peso &n2) {

    int numerototalpeso = n1.numeropeso + n2.numeropeso;

    Peso resultado = *new Peso(numerototalpeso);
}
/*
    Peso operator - (const Peso &n1){

    Peso resultado = *new Peso (n1.numeropeso);
}
 */
std::string  Peso:: to_String(){
    std::string num;

    num = std::to_string(numeropeso);
    return "$"+num+ " MXN";
}
