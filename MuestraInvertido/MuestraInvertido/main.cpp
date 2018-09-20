//
//  main.cpp
//  MuestraInvertido
//
//  Created by Pato Saldivar on 13/11/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    string Nombre;
    cout<<"Teclea tu nombre \n";
     getline (cin,Nombre);
    long size;
    
    size = Nombre.length();
    
    for (long i=size-1; i>=0; i--) {
        Nombre[i]= toupper(Nombre[i]);
        cout<<Nombre[i];
    }
    cout<<endl;
    
    
    
}
