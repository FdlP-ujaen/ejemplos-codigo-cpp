/**
File: calculo-factura-sin-interfaz.cpp
Autor: Víctor M. Rivas Santos <vrivas@ujaen.es>
Fecha: 22-sep-2025
Descripción: Pide los datos necesarios al usuario para calcular el importe de una factura
*/
#include <iostream>
using namespace std;

const double IVA=21.0;
int main() {
    // Declaro las variables que voy a pedir al usuario
    double precioUnitario;
    int cantidad;
    double porcentajeDescuento;
    
    // Pido los datos
    cin >> precioUnitario;
    cin >> cantidad;
    cin >> porcentajeDescuento;
    
    // Calculo resultados intermedios y resultados finales
    double precioTodos = precioUnitario*cantidad;
    double importeADescontar = precioTodos*(porcentajeDescuento/100);
    double subTotal = precioTodos-importeADescontar;
    double ivaCalculado = subTotal*(IVA/100);
    double total = subTotal + ivaCalculado;
    
    // Imprimo el resultado final
    cout <<  total;

    return 0;
}
