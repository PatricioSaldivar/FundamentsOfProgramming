//
//  main.cpp
//  Serie Alterna Fraccion
//
//  Created by Pato Saldivar on 18/09/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    
    int n =0;
    string sumatoria;
    
    cin>> n;
    for (int i=1; n>=i; i++) {
        if (i>1){
            cout << " + ";
        }
        if (i%2==0){
            cout<< 1<<"/"<< i;
        }
        else{
            cout << i;
            
        }
    
    
}
    cout<< " "<<endl;
    
    return 0;
}
