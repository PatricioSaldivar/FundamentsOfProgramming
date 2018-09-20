//
//  main.cpp
//  PAR IMPAR
//
//  Created by Pato Saldivar on 21/08/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//


#include <iostream>
#include <cmath>
using namespace std;
int main (){
    
    char cliente, azulejo;
    double precio = 0.0, descuento= 0.00, descuento_en_cant=0, total=0, cantidad;

    cout<< "Que tipo de Cliente eres? (N,F) "<<endl;
    cin >> cliente;
    cout << "Que tipo de calidad quieres los azulejos? (L,E,S)"<< endl;
    cin >> azulejo;
    cout << "Cuantos azulejos compraras"<< endl;
    cin >> cantidad;
    
    if (azulejo == 'L')
            precio = cantidad*6.0;
   else
    if (azulejo == 'E')
             precio = cantidad*4.0;
else
    if (azulejo == 'S')
             precio = cantidad*2.0;

    if (cliente== 'N') {
        if (precio >= 2000 && precio< 5000)
            descuento = .10;
     else
        if (precio >= 5000)
            descuento = .15;
    }
    
    if (cliente== 'F')
        descuento= .2;
        
    descuento_en_cant= precio*descuento;
    total= precio-descuento_en_cant;
    
    cout<< "El precio antes del descuento es de " << precio << endl;
    cout << "El descuento dado es de " << descuento_en_cant << endl;
    cout << "El pago total es de " << total << endl;
    
    
    return 0;
        }
