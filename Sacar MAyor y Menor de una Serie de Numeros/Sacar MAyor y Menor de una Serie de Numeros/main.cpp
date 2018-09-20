//
//  main.cpp
//  Sacar MAyor y Menor de una Serie de Numeros
//
//  Created by Pato Saldivar on 21/09/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int numero, mayor,menor,numero_in, n;
    
    cout << "Cuantos numeros son?";
    cin >> n;
    cin >> numero_in;
    mayor =numero_in;
    menor = numero_in;
    for(int i=1; i<=n-1; i++){
        cin >> numero;
        if (mayor> numero)
            mayor= mayor;
        else
            mayor=numero;
        if (menor<numero)
            menor= menor;
        else
            menor= numero;
        
    }
     cout<< "El nuemro mayor es "<< mayor<< endl;
     cout << "El numero menor es "<< menor <<endl;
    return 0;
}
