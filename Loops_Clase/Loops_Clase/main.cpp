//
//  main.cpp
//  Loops_Clase
//
//  Created by Pato Saldivar on 14/09/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    
    int n;
    int contador=0, contador2=0;
    int numero;
    cout << "Cuantos numeros? ";
    cin>> n;
    for (int i =1; i<=n; i++) {
        cout << "Numero ";
        cin >> numero;
        if (numero%2==0){
            cout<< "PAR\n";
        contador2++;}
        else{
            cout << "IMPAR\n";
        contador++;
        }
        
    }
    cout << "La cantidad de pares "<<contador2<< endl <<"La cantidad de impares " << contador<< endl;
    return 0;
}
