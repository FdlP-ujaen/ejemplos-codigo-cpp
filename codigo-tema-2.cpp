/*
 * @file codigo-tema-2.cpp
 * @author Victor M. Rivas <vrivas@ujaen.es>
 * @date 19-sep-2024
 * @desc Ejemplo de código que contiene conceptos explicados en el tema 2
 *       Al final del código, puede verse la salida que deberíamos obtener en pantalla.
 *       Disponible en https://github.com/FdlP-ujaen/ejemplo-codigo-tema-2/blob/main/codigo-tema-2.cpp
*/

#include <iostream>
using namespace std;

// Definición de constantes.
// Conviene hacerlo FUERA de la función main
const double RAIZ_DE_2 = 1.4142135623730951;
const int MAXIMO_MULTIPLICADOR_SALARIO_MINIMO = 20;
const char SI = 'S';
const bool VERDAD = true;


int main() {
    // Definición de variables.
    // Debe hacerse dentro de la función donde se van a usar.

    // Declaración + inicialización
    int suma=0;

    // Declaración y, posteriormente, inicialización
    int producto;
    producto=1;

    // Declaración de muchas variables en un sola línea; algunas necesitan inicializarse, otras no.
    double salarioMinimo=1134.10, salarioMedio, salarioMaximo;
    char respuestaUsuario='?', ultimaRespuestaUsuario;
    bool necesitoVacaciones;

    // Utilización de expresiones
    cout << "El salario mínimo multiplicado por 1.21 vale " << salarioMinimo*1.21 << endl;
    necesitoVacaciones=VERDAD or false;
    salarioMaximo=salarioMinimo*MAXIMO_MULTIPLICADOR_SALARIO_MINIMO;

    // Precedencia
    suma = 10;
    suma = suma*5+4; // En suma se almacena el valor 54
    cout << "Suma vale " << suma << endl;

    suma = 10;
    suma = suma*(5+4); // En suma se almacena el valor 90
    cout << "Suma vale " << suma << endl;

    bool testPrecedencia;
    testPrecedencia=!true && false; // En testPrecedencia se almacena el valor false
    cout << "testPrecedencia vale " << testPrecedencia << endl;
    testPrecedencia=!(true && false); // En testPrecedencia se almacena el valor true
    cout << "testPrecedencia vale " << testPrecedencia << endl;


    // Conversión de tipos
    suma = 23;
    cout << suma << " divivido por 7 es " << suma/7
        << endl;  // Resultado: 3
    cout << suma << " dividido por 7.0 es " << suma/7.0
        << endl; // Resultado 3.28571
    cout << suma << " conviertiendo su contenido a double y dividido por 7 es " << (double)suma/7
        << endl; // El resulado es 3.28571

    cout << suma << " dividido por 8.1 es " << suma/8.1
         << endl; // El resultado es 83951
    cout << suma << " dividido por 8.1 covertido en int es " << suma/(int)8.1
         << endl; // El resultado es 2

    // Fin del programa
    return 0;
}


/*
 Salida que devuelve el programa en pantalla:

El salario mínimo multiplicado por 1.21 vale 1372.26
Suma vale 54
Suma vale 90
testPrecedencia vale 0
testPrecedencia vale 1
23 divivido por 7 es 3
23 dividido por 7.0 es 3.28571
23 conviertiendo su contenido a double y dividido por 7 es 3.28571
23 dividido por 8.1 es 2.83951
23 dividido por 8.1 covertido en int es 2

Process finished with exit code 0

 */