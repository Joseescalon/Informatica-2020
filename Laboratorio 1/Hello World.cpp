#include <iostream>

#include "mensaje.hh"
#include "valor3.hh"
#include "valor1.hh"
#include "valor2.hh"
#include "valor3.hh"


int main(){

    /*
    Se utiliza el prefijo std para aceder a los
    metodos incluidos en el lenguaje
    */
    std::printf(MENSAJE);
    std::printf("%s , %i\n", MENSAJE, VALOR3);
    char c;
    std::cin >> c;

    /*
    Retornams el valor 0 para indicar que
    el programa se ejecuto sin errores.
    */
    return 42;
}