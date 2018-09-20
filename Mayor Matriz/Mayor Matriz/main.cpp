//
//  main.cpp
//  Mayor Matriz
//
//  Created by Pato Saldivar on 06/11/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

void PideDatos(int matriz[10][10], int &Columnas, int &Renglones){
    cout << "Cuantas Columnas? ";
    cin>> Columnas;
    cout<< "Cuantos Renglones? ";
    cin>> Renglones;
    for (int i=0; i<Renglones; i++) {
        for (int n=0; n<Columnas; n++) {
            cin>> matriz[i][n];
        }
    }
}

void Califica_El_Mayor(int matriz[10][10], int Renglones, int Columnas, int &NumeroMayor, int &ColMayor, int &RenMayor){
    
    NumeroMayor= matriz[0][0];
    for (int i=0; i<Renglones; i++) {
        for (int n=0; n<Columnas; n++) {
            if (NumeroMayor <= matriz[i][n]){
                NumeroMayor= matriz[i][n];
                RenMayor=i;
                ColMayor=n;
            }
        }
    }
    cout<< NumeroMayor<<" "<<RenMayor<<" "<<ColMayor;
}



int main(){
    int matriz[10][10];
    int SizeCol, SizeRen;
    int Numero_Mayor, ColMayor, RenMayor;
    PideDatos(matriz, SizeCol, SizeRen);
    Califica_El_Mayor(matriz, SizeRen, SizeCol, Numero_Mayor, ColMayor, RenMayor);
    
    

    
}
