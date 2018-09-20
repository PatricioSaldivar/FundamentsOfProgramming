//
//  main.cpp
//  CopiaRango
//
//  Created by Pato Saldivar on 30/10/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

void CopiaArreglo(int arregloA[],int sizeA, int limInf, int limSup,int arregloB[],int &sizeB){
  
    for (int i=0; i<sizeA; i++) {
        if (arregloA[i]>=limInf && arregloA[i]<=limSup){
        arregloB[sizeB]= arregloA[i];
            sizeB++;
        }
    }
}


    




int main(){
    int arrA[20], arrB[20];
    int sizeA, sizeB=0, limInf, limSup;
    
    cin>>sizeA;
    
    for (int i=0; i<sizeA; i++) {
        cin>> arrA[i];
    }
    cin>> limInf>> limSup;
    CopiaArreglo(arrA, sizeA, limInf, limSup, arrB, sizeB);
    for (int i=0; i<sizeB; i++) {
        cout<< arrB[i]<<endl;
    }
    return 0;
}
