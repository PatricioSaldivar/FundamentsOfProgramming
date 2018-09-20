//
//  main.cpp
//  Diagonal Matriz Cuadrada
//
//  Created by Pato Saldivar on 06/11/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

void PideDatos(int matriz[10][10], int &Columnas, int &Renglones){
    
    cout<< "Cuantos Renglones? ";
    cin>> Renglones;
    cout << "Cuantas Columnas? ";
    cin>> Columnas;
    

    for (int i=0; i<Renglones; i++) {
        for (int n=0; n<Columnas; n++) {
            cin>> matriz[i][n];
        }
    }
}

void Demuestra_Diagonal_Matriz(int matriz[10][10], int Renglones, int Columnas){
    for (int i =0, n=0; (i<Renglones)||(n<Columnas); i++, n++){
        cout<< matriz[i][n]<<endl;
        
        
    }
}


int main(){
    int matriz[10][10];
    int SizeCol, SizeRen;
    PideDatos(matriz, SizeCol, SizeRen);
    Demuestra_Diagonal_Matriz(matriz, SizeRen, SizeCol);
    
    
}
