//
//  main.cpp
//  Tarea 4.2
//
// Este programa sirve para saber si un numero es perfecto, deficiente o abundante.
//
//Casos de Prubea:
// 0 - Perfecto
// 1 - Deficiente
// 6 - Perfecto
// 8 - Deficiente
// 12 - Abundante
//
//  Created by Pato Saldivar on 21/09/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int n,suma=0;
    
    cout<< "Numero ?";
    cin>> n;
    
    for(int i=1; i<=n-1; i++){
        
        if (n%i==0)
            suma+= i;
    }
        if (suma < n)
            cout << "Deficiente"<<endl;
    if (suma==n)
        cout << "Perfecto"<<endl;
    if (suma>n)
        cout<< "Abundante"<<endl;
    
    return 0;
}
