//
//  main.cpp
//  Suma hasta 1000
//
//  Created by Pato Saldivar on 18/09/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

    int suma=0, num, contador=0;
    
    while (suma< 1000){
            cin>> num;
            suma+= num;
        contador ++;
        
    }
    cout<< suma<<" "<< contador<< endl;
    return 0;
}
