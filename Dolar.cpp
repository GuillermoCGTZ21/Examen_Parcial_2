//
// Created by el_me on 02/04/2018.
//

#include <string>
#include "Dolar.h"
#include "Peso.h"
//constructor
Dolar::Dolar(){
    this->numerodolar=0;
}
Dolar::Dolar(double numerodolar) {
    this->numerodolar = numerodolar;
}
//suma de dolar + dolar
Dolar operator + (const Dolar &n1, const Dolar &n2){

    double numerototal1 = n1.numerodolar+n2.numerodolar;

    Dolar resultado = *new Dolar(numerototal1);
}
//suma de dola + peso
Dolar operator + (const Dolar &n1, const Peso &n2){
    Dolar dolarconpeso;
    dolarconpeso.numerodolar = (n1.numerodolar)+(n2.numeropeso/18.5);

    return dolarconpeso;
}
//resta de dola - dolar
Dolar operator - (const Dolar &n3, const Dolar &n4){
    double numerototal2 = abs(n3.numerodolar-n4.numerodolar);

    Dolar resultado = *new Dolar(numerototal2);
}
//resta de dolar - peso
Dolar operator - (const Dolar &n3, const Peso &n4){
    Dolar dolarconpeso;
    dolarconpeso.numerodolar = (n3.numerodolar)-(n4.numeropeso/18.5);
    if(dolarconpeso.numerodolar < 0){
        dolarconpeso.numerodolar = dolarconpeso.numerodolar*(-1);
    }
    return dolarconpeso;
}
//to_string a dolares
std::string  Dolar:: to_String(){
    std::string nume;

    nume = std::to_string(numerodolar);
    return "$"+nume+ " USD";
}

