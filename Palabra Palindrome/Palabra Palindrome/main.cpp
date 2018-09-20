//
//  main.cpp
//  Palabra Palindrome
//
//  Created by Pato Saldivar on 16/11/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main(){
    string palabra,palabraReves;
    long cont;
    cin>>palabra;
    cont= palabra.length();
    for(cont-=1; cont>=0; cont--){
        palabraReves+=palabra[cont];
    }
    if (palabra==palabraReves){
        cout<<"Si es palindrome";
    }
    else
        cout<<"No es palindrome";
    
}
