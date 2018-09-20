//
//  main.cpp
//  SumaCasillasParesImpares
//
//  Created by Pato Saldivar on 30/10/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;


void PideDatos(int arr[], int &tam){
   
    do{
    cout<< "Cuantos datos?";
    cin>>tam;
}while(tam<1||tam>20);
    for (int i=0; i<tam; i++) {
        cin>> arr[i];
    }
   
}


void sumaParesImpares (int arr[], int tam, int &pares, int &impares){
    
    pares=0;
    impares=0;
    for (int i =0,c=1; (i<tam||c<tam); i+=2,c+=2) {
        if (c<tam)
        impares+=arr[c];
        if (i<tam)
        pares+=arr[i];
    }
    
}




int main(){
    
    int arreglo[20], tamano;
    int ContPares=0, ContImpares=0;
    
    PideDatos(arreglo, tamano);
    sumaParesImpares(arreglo, tamano, ContPares, ContImpares);
    
    cout<< ContImpares<<" "<<ContPares;
}
