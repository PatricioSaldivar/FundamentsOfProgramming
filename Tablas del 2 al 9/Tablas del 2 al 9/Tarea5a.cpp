//
//  main.cpp
//  Tablas del 2 al 9
//
//  Created by Pato Saldivar on 08/10/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//
//
//
//-------------------------------------------------------------
//CASOS PRUEBA
//n=5
//
//La tabla del 2
//
//2 x 1 = 2
//2 x 2 = 4
//2 x 3 = 6
//2 x 4 = 8
//2 x 5 = 10
//2 x 6 = 12
//2 x 7 = 14
//2 x 8 = 16
//2 x 9 = 18
//2 x 10 = 20
//
//La tabla del 3
//
//3 x 1 = 3
//3 x 2 = 6
//3 x 3 = 9
//3 x 4 = 12
//3 x 5 = 15
//3 x 6 = 18
//3 x 7 = 21
//3 x 8 = 24
//3 x 9 = 27
//3 x 10 = 30
//
//La tabla del 4
//
//4 x 1 = 4
//4 x 2 = 8
//4 x 3 = 12
//4 x 4 = 16
//4 x 5 = 20
//4 x 6 = 24
//4 x 7 = 28
//4 x 8 = 32
//4 x 9 = 36
//4 x 10 = 40
//
//La tabla del 5
//
//5 x 1 = 5
//5 x 2 = 10
//5 x 3 = 15
//5 x 4 = 20
//5 x 5 = 25
//5 x 6 = 30
//5 x 7 = 35
//5 x 8 = 40
//5 x 9 = 45
//5 x 10 = 50
//
//


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int n,producto;
    cout << "Hasta que tabla de multiplicacion quieres?";
    do{
        do{
        cout<< "(Del 2 al 9)\n";
        cin>> n;
        }while (n>9);
    }while (n<2);
    
    for (int numerotabla = 2; numerotabla<=n; numerotabla++) {
        cout << endl;
        cout << "La tabla del "<< numerotabla<< endl;
        cout << "\n";
        for (int multiplicador = 1; multiplicador<=10; multiplicador++) {
            producto= multiplicador*numerotabla;
            cout <<numerotabla<<" x "<< multiplicador<< " = "<< producto<< endl;
        }
    }
        
    
    return 0;
}
