//
//  main.cpp
//  Formato de hora
//
//  Created by Pato Saldivar on 28/08/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//
// Este programa sirve para cambiar el formato de la hora de 24 a 12
//
//  Algoritmo
//1. Pedir la hora
//2. Pedir los minutos
//3. Calcular si es PM o AM
//4. Desplegar la hora
//
//------------------------------------------------------------------------------------
//Casos Prueba
//
// Hora.- 2
// Minu.- 3
// Resu.- 02:03 AM
//
// Hora.- 0
// Minu.- 1
// Resu.- 12:01 AM
//
// Hora.- 15
// Minu.- 18
// Resu.- 03:18 PM
//
// Hora.- 24
// Minu.- 3
// Resu.- 12:03 PM


#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main() {
    
    int hora,minutos;
    string terminacion;
    
    cout<< "Que hora es?"<<endl;
    cin >> hora;
    cout << "Que minuto es?"<<endl;
    cin >> minutos;
    
    if (hora >=12){
        terminacion = "PM";
        hora = hora-12;
    }
    else if (hora< 12)
        terminacion = "AM";
    
    if (hora== 0)
        hora= 12;
    
    cout << setw (2) << setfill ('0') << hora << ":" << setw (2) << setfill ('0')<< minutos << terminacion<<endl;
    
    
    return 0; }
