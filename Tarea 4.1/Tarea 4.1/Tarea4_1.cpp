//
//  main.cpp
//  Tarea 4.1
//
// Patricio Saldivar    A01282504

// Programa que crea una serie de fracciones y las suma, esta bajo circunstancias especificas en el denominador. Cuando el denominador es par se le suman 3 numeros para la siguiente fraccion y si es impar se le suma 1. Al numerador siempre se le suma 1 para la siguiente fraccion.
//------------------------------------------------------------------------------------------------------
// Casos de Prueba
//Si n = 4 y NI = 1 y DI = 2 el programa mostrará la sumatoria: 1/2 + 2/5 + 3/6 + 4/9 =1.84
//Si n = 5 y NI = 2 y DI = 3 el programa mostrará la sumatoria: 2/3 + 3/4 + 4/7 + 5/8 + 6/11 =3.15
//Si n = 2 y NI = 1 y DI = 1 el programa mostrará la sumatoria: 1/1 + 2/2 =2.0
//Si n = 6 y NI = 1 y DI = 4 el programa mostrará la sumatoria: 1/4 + 2/7 + 3/8 + 4/11 + 5/12 + 6/15 = 2.09
//
//  Created by Pato Saldivar on 21/09/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int n, NI, DI;
    double suma=0;
    cout<< "Cuantos Numeros? ";
    cin>> n;
    cout << "Numerador? ";
    cin >> NI;
    cout << "Denominador? ";
    cin >> DI;
    
    for (int i=1;i<=n; i++){
       if (i>1)
           cout << " + ";
        suma += (double)NI/DI;
        cout <<NI<<"/"<<DI;
    NI++;
    if (DI%2==0)
        DI+=3;
    else
        DI++;
    }
    
    cout <<"= "<< suma<<endl;
    return 0;
}
