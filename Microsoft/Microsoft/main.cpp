//
//  main.cpp
//  Microsoft
//
//  Created by Pato Saldivar on 22/08/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int main (){

        int n;
        double average(0), an = 0.0; // <- NOTE
        std::cout << "Enter the number of values" << endl;
        std::cin >> n;
        for(int i = 0; i < n; ++i) {
            int value;
            cin >> value;
            an += value;
        }
        average= an/n;
        std::cout << average;
    }
    



