//
// Created by el_me on 02/04/2018.
//

#include "Peso.h"
#include "Dolar.h"
//constructor
Peso::Peso(){
    this->numeropeso=0;
}
Peso::Peso(double numeropeso) {
    this->numeropeso = numeropeso;
}
//suma de peso + peso
Peso operator + (const Peso& n1, const Peso& n2){

    double numerototal1 = n1.numeropeso+n2.numeropeso;

    Peso resultado = *new Peso(numerototal1);
}
//suma de peso + dolar
Peso operator + (const Peso& n1, const Dolar& n2){
    double numerototal1 = n1.numeropeso+n2.numerodolar*18.5;

    Peso resultado = *new Peso(numerototal1);
}
//resta de peso - peso
Peso operator - (const Peso& n4, const Peso& n5) {
    Peso pesocondolar;
    pesocondolar.numeropeso = (n4.numeropeso)-(n5.numeropeso);
    if(pesocondolar.numeropeso < 0){
        pesocondolar.numeropeso = pesocondolar.numeropeso*(-1);
    }
    return pesocondolar;
}
//resta de peso - dolar
Peso operator - (const Peso& n4, const Dolar& n5) {
    Peso pesocondolar;
    pesocondolar.numeropeso = (n4.numeropeso)-(n5.numerodolar*18.5);
    if(pesocondolar.numeropeso < 0){
        pesocondolar.numeropeso = pesocondolar.numeropeso*(-1);
    }
    return pesocondolar;
}
//mayor que
bool operator > (const Peso &n6, const Dolar &n7){
    double peso = n6.numeropeso;
    double dolar = (n7.numerodolar)*18.50;

    bool comparacion = peso>dolar;
    return comparacion;
}
//menor que
bool operator < (const Peso &n6, const Dolar &n7){
    double peso = n6.numeropeso;
    double dolar = (n7.numerodolar)*18.50;

    bool comparacion = peso<dolar;
    return comparacion;
}
//mayor igual que
bool operator >= (const Peso &n6, const Dolar &n7){
    double peso = n6.numeropeso;
    double dolar = (n7.numerodolar)*18.50;

    bool comparacion = peso>=dolar;
    return comparacion;
}
//menor igual que
bool operator <= (const Peso &n6, const Dolar &n7){
    double peso = n6.numeropeso;
    double dolar = (n7.numerodolar)*18.50;

    bool comparacion = peso<=dolar;
    return comparacion;
}
//igual que
bool operator == (const Peso &n6, const Dolar &n7){
    double peso = n6.numeropeso;
    double dolar = (n7.numerodolar)*18.50;

    bool comparacion = peso==dolar;
    return comparacion;
}
//diferente a
bool operator != (const Peso &n6, const Dolar &n7){
    double peso = n6.numeropeso;
    double dolar = (n7.numerodolar)*18.50;

    bool comparacion = peso!=dolar;
    return comparacion;
}
//to_string
std::string  Peso:: to_String() {
    std::string nume;

    nume = std::to_string(numeropeso);
    return "$" + nume + " MXN";
}



