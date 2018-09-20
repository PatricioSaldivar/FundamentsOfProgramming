//
//  main.cpp
//  Examen 2 Parcial
//
//  Created by Pato Saldivar on 12/10/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//



//Patricio Andres Saldivar Flores
//A01282504

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main (){
    int n, corrector=0;
    double  numerador=2, denominador=1;

    cin >> n;
    for (int i= 1; i<= n; i++) {
        corrector%=2;
        
        
        if (n== i) {
            cout<< numerador<<"/"<<denominador<<endl;
        }
        else
            cout<< numerador<<"/"<<denominador<<" + ";
        
        if (corrector == 0)
            denominador+= numerador;
        if (corrector==1)
            denominador=3+denominador;
        
        numerador+=2;
        corrector++;
    }
    

    
return 0;
}
