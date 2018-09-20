//
//  main.cpp
//  Serie 2 numeros
//
//  Created by Pato Saldivar on 18/09/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    
    int limite1;
    int num1,num2;
    cin >> limite1;
    cin>> num2;
    num1= 1;
    
    for (int i=1; limite1>= i; i++) {
        cout << num1<<" "<< num2<<endl;
        num1++;
        num2--;
    }

}
