// Distancia entre dos puntos
//
//
//
//      Pato Saldivar
//      19/08/17.
//      Este programa sirve para encontar la distancia entre dos cordenadas.
//      Analisis: Calcular la distancia entre las dos cordenadas.
//      Algoritmo:      1. Pedir la cordenada x del Punto A
//                      2. Pedir la cordenada y del punto A
//                      3. Pedir la cordenada x del Punto B
//                      4. Pedir la cordenada y del Punto B
//                      5. Calcular la distancia
//                           Distancia= sqrt( pow((XA - XB),2)+ pow((YA - YB),2))
//                      6. Demostrar la distancia
//
//                      Caso Prueba
//                      Cordenadas de A (2.5,3.8)
//                      Cordenadas de B (3.6,2.2)
//                      Distancia es de 1.9416
//
//
//  Created by Pato Saldivar on 19/08/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main (){
    
    // insert code here...
    double X_A, X_B, Y_A, Y_B, distancia;
    cout<< "Cual es la cordenada de x del punto A? " << endl;
    cin>> X_A;
    cout<< "Cual es la cordenada de y del punto A? " << endl;
    cin>> Y_A;
    cout<< "Cual es la cordenada de x del punto B? " << endl;
    cin>> X_B;
    cout<< "Cual es la cordenada de y del punto B? " << endl;
    cin>> Y_B;
    distancia= sqrt( pow((X_A - X_B),2)+ pow((Y_A - Y_B),2));
    cout << fixed;
    cout << "Las cordenadas indicadas son (" << setprecision(1) << X_A <<","<< Y_A << ") y (" << X_B <<","<< Y_B<< ")" << endl;
    cout<< "La distancia entre ambas cordenadas es de "<< setprecision(4)<< distancia << "."<<endl;

    return 0;
}
