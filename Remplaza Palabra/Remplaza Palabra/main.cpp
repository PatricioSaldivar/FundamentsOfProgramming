//
//  main.cpp
//  Remplaza Palabra
//
//  Created by Pato Saldivar on 16/11/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//


#include <iostream>
#include <string>
using namespace std;

int main(){
    long Cantidad, iPos;
    string oracion;
    string palabra1, palabra2;
    string Resto;
    getline (cin,oracion);
    cin>>palabra1;
    Cantidad=palabra1.length();
    cin>>palabra2;
    
    
    do{
        
        iPos=oracion.find(palabra1);
        if (iPos!=-1){
            oracion.erase(iPos,Cantidad);
            oracion.insert(iPos,palabra2);
        }
    }while(iPos!=-1);
    
    cout<<oracion;
    
}
