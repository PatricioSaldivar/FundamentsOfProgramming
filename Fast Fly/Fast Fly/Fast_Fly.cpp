//
//  main.cpp
//  Fast Fly
//
//  Created by Pato Saldivar on 05/10/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int Contador;
    double V1, V2, D, M;
    double DistanceT;
    
    cin >> Contador;
    
    for (int i=1; i<=Contador; i++) {
        cin >> D>>V1>>V2>> M;
        DistanceT= (D/V1+V2)*M;
        cout << DistanceT;
    }
   
    return 0;
}
