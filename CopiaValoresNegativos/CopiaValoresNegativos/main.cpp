//
//  main.cpp
//  CopiaValoresNegativos
//
//  Created by Pato Saldivar on 30/10/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

void PideDatos(int arr[], int &tam){
    
    do{
        cout<< "Cuantos datos? ";
        cin>>tam;
    }while(tam<1||tam>20);
    for (int i=0; i<tam; i++) {
        cin>> arr[i];
    }

}


void PasarNegativos(int arr1[], int arr2[], int tam, int &tam2){
    tam2=0;
    for (int c=0,i=0; c<tam; c++){
        if (arr1[c]<0){
            arr2[i]=arr1[c];
            tam2++;
        i++;
    }
    }
}


int main(){
    int arreglo[20], tamano;
    int arreglo_2[20], tamano_2;
    PideDatos(arreglo, tamano);
    PasarNegativos(arreglo, arreglo_2, tamano, tamano_2);
    
    for (int i=0; i<tamano_2; i++){
        cout<< arreglo_2[i]<<endl;
    }
  
}
