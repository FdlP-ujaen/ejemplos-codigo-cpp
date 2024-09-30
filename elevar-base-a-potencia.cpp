/**
 * @file Media, máxima y mínima temperaturas
 * @author Victor M. Rivas <vrivas@ujaen.es
 * @date 30-sep-2024
 * @desc Ejercicio 7 de la relación de bucles
 Escribe un programa que calcule xy, donde tanto x como y son enteros positivos, sin
utilizar la función pow.
 */
#include <iostream>
using namespace std;
int main() {
    int base, exponente, resultado;
    cout << "Indique un número para la base: ";
    cin >> base;

    cout << "indique un número para el exponente: ";
    cin >> exponente;
    resultado=1;
    for( int i=1; i<=exponente; ++i) {
        resultado=resultado*base;
    }
    cout << "El resultado es " << resultado << endl;
}