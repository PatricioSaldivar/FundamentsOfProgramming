//
//  main.cpp
//  FuncionTrianguloAlternaCaracteres
//
//  Created by Pato Saldivar on 23/10/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;


void imprenta(int &numero, char &caracter, int &cambio){
    for (int i=1; i<=numero; i++) {
        cout<< caracter;
    }
    cout<<endl;
    numero--;
    cambio++;
    if (cambio%2==0)
        caracter='#';
   
    if (cambio%2==1)
        caracter='*';
    
    
}

int main(){
    int num,contador,cambio;
    char caracter;
    
    cin>> num;
    caracter ='*';
    contador=num;
    cambio=1;
    for (int c=1; c<=contador; c++) {
        imprenta(num, caracter,cambio);
    }
    return 0;
}
