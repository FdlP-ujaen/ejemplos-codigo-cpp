// Ejercicio sobre vectores de structs con un índice para ordenar
// asociado.
#include <iostream>
using namespace std;

// Defino el struct
struct Automovil {
    string nombre;
    string matricula;
};

// Constante para los vectores
const int MAX_COCHES = 20;
int main() {
    // Vector de structs inicializado
    Automovil coches[MAX_COCHES]= {
            {"Víctor", "H5332B"},
            {"Ana", "7876GFH"},
            {"Juan Carlos", "0006MML"}
    };

    // Número de elementos en el vector
    int numCoches=3;

    // Imprimo el vector inicial
    cout << "Vector inicial: "<<endl;
    for( int i=0; i<numCoches; ++i ) {
        cout << coches[i].nombre<<" "<<coches[i].matricula<<endl;
    }
    cout << endl;

    // Pido un nuevo automóvil y lo añado al final
    cout << "Indique un nuevo nombre: ";
    getline( cin >> ws,  coches[numCoches].nombre);
    cout << "Indique una nueva matrícula: ";
    getline( cin >> ws,  coches[numCoches].matricula);
    ++numCoches;
    cout << endl;

    // Imprimo el vector con el nuevo elemento
    cout << "Vector con el nuevo elemento: "<<endl;
    for( int i=0; i<numCoches; ++i ) {
        cout << coches[i].nombre
             << " " << coches[i].matricula
             << endl;
    }
    cout << endl;

    // Ordeno el vector por el nombre
    for( int i=0; i<numCoches-1; ++i ) {
        int pos=i;
        for( int j=i+1; j<numCoches; ++j ) {
            if( coches[j].nombre<coches[pos].nombre ) {
                pos=j;
            }
        }
        Automovil aux=coches[i];
        coches[i]=coches[pos];
        coches[pos]=aux;
    }

    // Imprimo el vector ordenado
    cout << "Vector ordenado por nombres: "<<endl;
    for( int i=0; i<numCoches; ++i ) {
        cout << coches[i].nombre << " " << coches[i].matricula << endl;
    }
    cout << endl;


     // Creo el índice sobre las matriculas
     int indices[MAX_COCHES];
     int tamIndices=numCoches; // hay una posición por cada automóvil

     // Inicializo el índice
     for( int i=0; i<tamIndices; ++i ) {
         indices[i]=i;
     }

     // Ordeno los índices teniendo en cuenta la matrícula a la que cada
     // uno apunta.
    for( int i=0; i<tamIndices-1; ++i ) {
        int pos=i;
        for( int j=i+1; j<tamIndices; ++j ) {
            if( coches[indices[j]].matricula<coches[indices[pos]].matricula ) {
                pos=j;
            }
        }
        int aux=indices[i];
        indices[i]=indices[pos];
        indices[pos]=aux;
    }

    // Imprimo el vector de índices creado
    cout << "Vector de índices sobre matrículas: " << endl;
    for( int i=0; i<numCoches; ++i ) {
        if( i>0 ) {
            cout << ", ";
        }
        cout << indices[i];
    }
    cout << endl;

    // Imprimo el vector de coches según el orden que me indica
    // el vector "indices"
    cout << "Vector ordenado por matriculas según dicho índice: "<<endl;
    for( int i=0; i<numCoches; ++i ) {
        cout << coches[indices[i]].nombre
             << " " << coches[indices[i]].matricula
             << endl;
    }
    cout << endl;

    return  0;
}

/*
RESULTADO EN CONSOLA AL EJECUTAR:

Vector inicial:
Víctor H5332B
Ana 7876GFH
Juan Carlos 0006MML

Indique un nuevo nombre: Luis
Indique una nueva matrícula: 5673KJH

Vector con el nuevo elemento:
Víctor H5332B
Ana 7876GFH
Juan Carlos 0006MML
Luis 5673KJH

Vector ordenado por nombres:
Ana 7876GFH
Juan Carlos 0006MML
Luis 5673KJH
Víctor H5332B

Vector de índices sobre matrículas:
1, 2, 0, 3
Vector ordenado por matriculas según dicho índice:
Juan Carlos 0006MML
Luis 5673KJH
Ana 7876GFH
Víctor H5332B


Process finished with exit code 0
 */
