// Esfera
//
//
//
//      Pato Saldivar
//      19/08/17.
//      Este programa sirve para calcular el volumen y el área de una esfera.
//      Analisis: Calcular el volumen y el área de una esfera.
//      Algoritmo:      1. Pedir el radio de la esfera
//                      2. volumen= (4*3.14*radio^3)/3
//                      3. area= (3.14*4*radio^2)
//                      4. Mostrar area y volumen
//
//      Casos Prueba    Radio: 4
//                      Volumen: 267.947
//                      Area: 200.96
//
//  Created by Pato Saldivar on 19/08/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int main (){
    
    // insert code here...
    double volumen,area;
    int radio;
    cout<< "Cual es el radio del circulo? " << endl;
    cin>> radio;
    volumen= (pow(radio,3)*4*3.14)/3;
    cout<< "El volumen de la esfera es de " << volumen << "." <<endl;
    area= pow(radio, 2)*3.14*4;
    cout<< "El area de la esfera es de " << area << "." <<endl;
    
    return 0;
}
