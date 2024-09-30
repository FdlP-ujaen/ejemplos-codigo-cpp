/**
 * @file Media, máxima y mínima temperaturas
 * @author Victor M. Rivas <vrivas@ujaen.es
 * @date 30-sep-2024
 * @desc Ejercicio número 5 de la relación de prácticas de estructuras de control cíclicas.
 * 5. Escribe un programa que tome cada 4 horas la temperatura
 * exterior, leyéndola durante un período de 24 horas.
 * Es decir, debe leer 6 temperaturas. Calcule la temperatura media del día, la temperatura más alta y la más baja.
 */
#include <iostream>
using namespace std;
int main() {
    double nuevaTemperatura, media=0, minima, maxima;
    for( int hora=0; hora<24; hora=hora+4 ) {
        // Pedimos el nuevo dato
        cout << "Indique la temperatura de las " << hora << " horas: ";
        cin >> nuevaTemperatura;

        // Actualizamos la suma para la media
        media=media+nuevaTemperatura;

        // Comprobamos si es la primera temperatura que incluimos
        // O si la nueva temperatura es menor que la mínima hasta el momento
        if( hora==0 or nuevaTemperatura<minima ) {
            minima=nuevaTemperatura;
        }
        // Comprobamos si es la primera temperatura que incluimos
        // O si la nueva temperatura es mayor que la máxima hasta el momento
        if( hora==0 or nuevaTemperatura>maxima ) {
            maxima=nuevaTemperatura;
        }
    }

    // Terminamos de calcular la media
    media=media/6;

    // Imprimimos resultados
    cout << "La mínima de las temperaturas es: "
         << minima << " grados." << endl;
    cout << "La media de las temperaturas es: "
         << media << " grados." << endl;
    cout << "La máxima de las temperaturas es: "
         << maxima << " grados." << endl;


}



