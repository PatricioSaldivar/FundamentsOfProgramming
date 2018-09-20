//
//  main.cpp
//  Columna Matriz
//
//  Created by Pato Saldivar on 06/11/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

void PideDatos(int matriz[10][10], int &Columnas, int &Renglones, int &Constante){
 cout << "Cuantas Columnas? ";
    cin>> Columnas;
    cout<< "Cuantos Renglones? ";
    cin>> Renglones;
    cout<< "Que columna quieres ver? ";
    cin>> Constante;
    for (int i=0; i<Renglones; i++) {
        for (int n=0; n<Columnas; n++) {
            cin>> matriz[i][n];
        }
    }
}

void Demuestra_Segunda_Columna(int matriz[10][10], int Renglones, int Constante){
    for (int i =0; i<Renglones; i++){
        cout<< matriz[i][Constante]<<endl;

    
}
}


int main(){
    int matriz[10][10];
    int SizeCol, SizeRen;
    int Constante;
    PideDatos(matriz, SizeCol, SizeRen, Constante);
    Demuestra_Segunda_Columna(matriz, SizeRen, Constante);
    
}
