//
//  main.cpp
//  Clase Ciclos en Ciclos
//
//  Created by Pato Saldivar on 02/10/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
// Cuadrado
    int tamCuad;
    cout << "De que tamaño el cuadrado?\n ";
    cin>> tamCuad;

    for (int i= 1; i<=tamCuad; i++) {
        cout << endl;
        for (int cont=1; cont <=tamCuad; cont++) {
            cout<< "*";
        }
    }
    cout << endl;
    
// Triangulo
    
    int tamTrian, ContTran;
    
    cout<< "De que tamaño el tringulo \n";
    cin >> tamTrian;
    
    ContTran = tamTrian;
    
    for (int columna= 1; columna <=tamTrian; columna++) {
        --ContTran;
        cout << endl;
        for (int relleno= ContTran+1; relleno <=tamTrian; relleno++) {
            cout<< "*";
            
        }
    }
    cout << endl;
    
    //Triangulo inverso
    
    
    cout<< "De que tamaño el tringulo \n";
    cin >> tamTrian;
    
    ContTran = tamTrian;
    
    for (int columna= 1; columna <=tamTrian; columna++) {
        --ContTran;
        cout << endl;
        for (int relleno= ContTran+1; relleno >=1; relleno--) {
            cout<< "*";
        }
    }
    cout << endl;
    
   // Cuadrado

    cout << "De que tamaño el cuadrado?\n ";
    cin>> tamCuad;
    cout << endl;
    
    for (int fila= tamCuad-2; fila<=tamCuad; fila++) {
        for (int cont=1; cont <=tamCuad; cont++) {
            cout<< "*";
            for (int y=1; y <= 3; y++) {
                cout << endl;
                cout<< "*";
                for (int z= tamCuad-2; z>= 1; z--) {
                    cout<< " ";
                }
                
            }
        }
    }
    cout << endl;
    
    return 0;
    }
