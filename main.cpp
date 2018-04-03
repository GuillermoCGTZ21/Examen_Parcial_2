#include <iostream>
#include "Dolar.h"
#include "Peso.h"

int main() {
    //ASIGNACIÓN DE VALOR A PESO Y A DOLAR
    Peso peso1(3);
    Peso peso2(5);
    Dolar dolar1(6);
    Dolar dolar2(9);

    //REALIZACIÓN DE LA SUMAS Y RESTAS
    Dolar dolar = dolar1 + dolar2;
    Peso peso = peso1 + peso2;
    Dolar dolar3 = dolar + peso;
    Peso peso3 = peso + dolar;
    Dolar dolar5 = dolar1 - dolar2;
    Dolar dolar6 = dolar - peso;
    Peso peso4 = peso - dolar;
    Peso peso5 = peso1 -peso2;

    //MENSAJE EN PANTALLA DONDE SE MUESTRA EL VALOR DE CADA PESO Y DOLAR
    std::cout << "Primer peso:" + peso1.to_String() + "\n";
    std::cout << "Segundo peso:" + peso2.to_String() + "\n";
    std::cout << "Primer dolar:" + dolar1.to_String() + "\n";
    std::cout << "Primer dolar:" + dolar2.to_String() + "\n";

    //PARTE DE SUMAS
    std::cout << "\n";
    //DOLAR = DOLAR1 + DOLAR2
    std::cout << "Suma de dólares: " + dolar.to_String() + "\n";
    //PESO = PESO1 + PESO2
    std::cout << "Suma de pesos: " + peso.to_String() + "\n";
    //DOLAR = DOLAR + PESO (AQUI HICE LA SUMA DEL TOTAL DE LA SUMA DE PESOS Y EL TOTAL DE LA SUMA DE DÓLARES)
    std::cout << "Suma de dolar y peso (RESULTADO EN DÓLARES): " + dolar3.to_String() + "\n";
    //DOLAR = PESO + DOLAR (ES LO MISMO QUE EL MENSAJE DE ARRIBA SOLO QUE EN DIFENRENTE ORDEN.
    std::cout << "Suma de peso y dolar (RESULTADO EN PESOS): " + peso3.to_String() + "\n";

    //PARTE DE RESTAS
    std::cout << "\n";
    //DOLAR = DOLAR - DOLAR (VALOR ABSOLUTO EN CASO DE SER NEGATIVO)
    std::cout << "Resta de dólares: " + dolar5.to_String() + "\n";
    //PESO = PESO - PESO (VALOR ABSOLUTO EN CASO DE SER NEGATIVO)
    std::cout<<"Resta de pesos: "+peso5.to_String()+"\n";
    //DOLAR = DOLAR - PESO (VALOR ABSOLUTO EN CASO DE SER NEGATIVO)
    std::cout << "Resta de dolar y peso (RESULTADO EN DÓLARES): " + dolar6.to_String() + "\n";
    //DOLAR = PESO -DOLAR (VALOR ABSOLUTO EN CASO DE SER NEGATIVO)
    std::cout << "Resta de peso y dolar (RESULTADO EN PESOS): " + peso4.to_String() + "\n";

    bool comp;
    //¿PESO MAYOR A DOLAR?
    if (peso > dolar) {
        comp = true;
    } else {
        comp = false;
    }
    std::cout << "\n"+peso.to_String() + " > " + dolar.to_String() + " = " << comp << "\n";
    //¿PESO MENOR A DOLAR?
    if(peso<dolar){
        comp = true;
    }else{
        comp = false;
    }
    std::cout<<peso.to_String() + " < " + dolar.to_String() + " = "<<comp<<"\n";
    //¿PESO MAYOR/IGUAL A DOLAR?
    if(peso>=dolar){
        comp = true;
    }else{
        comp = false;
    }
    std::cout<<peso.to_String() + " >= " + dolar.to_String() + " = "<<comp<<"\n";
    //¿PESO MENOR/IGUAL A DOLAR?
    if(peso<=dolar){
        comp = true;
    }else{
        comp = false;
    }
    std::cout<<peso.to_String() + " <= " + dolar.to_String() + " = "<<comp<<"\n";
    //¿PESO IGUAL A DOLAR?
    if(peso==dolar){
        comp = true;
    }else{
        comp = false;
    }
    std::cout<<peso.to_String() + " == " + dolar.to_String() + " = "<<comp<<"\n";
    //¿PESO DIFERENTE A DOLAR?
    if(peso!=dolar){
        comp = true;
    }else{
        comp = false;
    }
    std::cout<<peso.to_String() + " != " + dolar.to_String() + " = "<<comp<<"\n";
}