//
//  main.cpp
//  InicialesYApellido
//
//  Created by Pato Saldivar on 16/11/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    string NombreCompleto, Nombre,ApellidoPaterno,ApellidoMaterno;
    long Posicion;
    getline(cin,NombreCompleto);
    Posicion=NombreCompleto.find(" ");
    Nombre=NombreCompleto.substr(0,Posicion+1);
    NombreCompleto.erase(0,Posicion+1);
    Nombre.erase(1);
    Nombre+=". ";
    
    Posicion=NombreCompleto.find(" ");
    ApellidoMaterno=NombreCompleto.substr(Posicion+1);
    NombreCompleto.erase(Posicion+1);
    ApellidoMaterno.erase(1);
    ApellidoMaterno+=".";
    
    ApellidoPaterno=NombreCompleto;
    NombreCompleto.erase(0);
    
    NombreCompleto=Nombre+ApellidoPaterno+ApellidoMaterno;
    cout<<NombreCompleto;
    
    
}
