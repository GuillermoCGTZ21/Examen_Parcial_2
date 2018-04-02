#include <iostream>
#include "Peso.h"
#include "Dolar.h"
int main() {
    Peso peso1 (3);
    Peso peso2 (5);
    Dolar dolar1 (5);
    Dolar dolar2 (6);

    Dolar dolar = dolar1 + dolar2;
    Peso peso = peso1 + peso2;
    Dolar dolar3 = peso + dolar;


    std::cout<<dolar.to_String()+"\n";
    std::cout<<peso.to_String()+"\n";


}