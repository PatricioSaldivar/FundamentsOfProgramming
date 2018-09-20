//
//  main.cpp
//  Clase Arreglos Dos Diomensiones
//
//  Created by Pato Saldivar on 02/11/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

//Cargar Datos
void pedirDatos(int matriz[10][10], int &Ren, int &Col){
    cout<<"Cuantos Renglones? ";
    cin>> Ren;
    
    cout<<"Cuantas Columnas? ";
    cin>> Col;
    
    for (int i=0; i<Ren; i++) {
        for (int c=0; c<Col; c++) {
            cout<< "Teclea el valor "<<i<<","<<c<<endl;
            cin>> matriz[i][c];
        }
    }
}
 //Leer Datos
void muestraDatos(int matriz[10][10], int Renglon, int Columna){
    for (int i=0; i<Renglon; i++) {
        for (int c=0; c<Columna; c++)
            cout<< matriz[i][c]<<" ";
        cout<<endl;
    }
}

int main(){
    int matriz[10][10];
    int Renglon, Columna;
    pedirDatos(matriz, Renglon, Columna);
    muestraDatos(matriz, Renglon, Columna);
    
}
