//
//  main.cpp
//  FuncionComparaFechas
//
//  Created by Pato Saldivar on 23/10/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

void FechaMenor(int &dia,int &mes, int &year, int dia2, int mes2, int year2){
    if (year2< year){
        year = year2;
        mes=mes2;
        dia=dia2;
    }
    
    if (year2==year){
        if (mes2<mes){
            mes=mes2;
            dia=dia2;
        }
        if (mes2==mes)
            if (dia2<dia)
                dia=dia2;
        
    }
    
}

int main (){
    int dia, dia2, dia3;
    int mes, mes2, mes3;
    int year, year2, year3;
    
    cin>> dia>> mes>> year;
    cin>> dia2>> mes2>> year2;
    cin>> dia3>> mes3>> year3;
    
    FechaMenor(dia, mes, year, dia2, mes2, year2);
    FechaMenor(dia,mes, year, dia3, mes3, year3);
    
    cout<< dia<<" "<<mes<<" "<<year<<endl;
    
    return 0;
}
