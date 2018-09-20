//
//  main.cpp
//  Funcion Ejemplos
//
//  Created by Pato Saldivar on 31/08/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double FVelocidad (double distancia,double tiempo)
{
    double Velocidad;
    Velocidad = distancia/tiempo;
    return Velocidad;
    
}

int main() {
    double Vel, dista, tiem;
    cout << "Teclea la distancia en metros ";
    cin >> dista;
    cout << "Teclea el tiempo en segundos ";
    cin >> tiem;
    
    Vel= FVelocidad(dista, tiem);
    
    cout << "La velocidad es de " << Vel << "m/s/";
return 0;
}
