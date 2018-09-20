//
//  main.cpp
//  EquivalenteHrsMinSeg
//
//  Created by Pato Saldivar on 16/10/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
void operacion(int &a, int &b, int &c){
b= a/3600;
    c=(a%3600)/60;
    a=(a%3600)%60;
 
}

int main (){
    int TotalSeg, Hr, Min;
    cin>> TotalSeg;
    operacion(TotalSeg, Hr, Min);
    cout<< Hr<< " "<<Min<< " "<<TotalSeg;
    return 0;
}
