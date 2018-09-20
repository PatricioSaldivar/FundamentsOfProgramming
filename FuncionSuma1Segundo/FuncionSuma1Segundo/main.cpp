//
//  main.cpp
//  FuncionSuma1Segundo
//
//  Created by Pato Saldivar on 23/10/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

void Suma1Segundo(int &hr, int &min, int &seg){
    seg++;
    if (seg>=60){
        seg-=60;
        min++;
        if (min>=60) {
            min-=60;
            hr++;
        }
    }
        
}

int main () {
    int hora, minutos, segundos;
    cin>> hora>>minutos>>segundos;
    Suma1Segundo(hora, minutos, segundos);
    cout << hora<<" "<<minutos<<" "<<segundos;
    
}
