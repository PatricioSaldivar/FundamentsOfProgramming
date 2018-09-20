//
//  main.cpp
//  FuncionSumaFracciones
//
//  Created by Pato Saldivar on 19/10/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;


// Funcion Para Sumar LOS NUMERADORES Y MULTIPLICAR LOS DENOMINADORES
void Suma_numerador(int &num1, int num2, int &deno1, int deno2){
    
    num1=(num1*deno2)+(num2*deno1);
    deno1*=deno2;
    
    
}


int main(){
    int numerador1, numerador2, numerador3;
    int denominador1, denominador2, denominador3;
    
    
    cin>> numerador1>> denominador1 >>numerador2>> denominador2>> numerador3>> denominador3;
    
    Suma_numerador(numerador1, numerador2, denominador1, denominador2);
    
    Suma_numerador(numerador1, numerador3, denominador1, denominador3);
    
    
    cout << numerador1<<" "<<denominador1;
    
    return 0;
}

