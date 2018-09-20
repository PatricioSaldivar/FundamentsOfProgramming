//
//  main.cpp
//  Tarea 3 a
//
//  Created by Pato Saldivar on 05/09/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//
// Este programa es para poner en formato las fechas requeridas, estas se pueden poner en nombre o en numero.
//
//  Algorismo:
//1. Pedir horas, minutos y segundos
//2. Hacer el calculo del tiempo a segundos
//3. Desplegar el tiempo traspasado a segundos
//____________________________________________________________________________________
//
//  Casos Prueba
//  horas    minutos     segundos        tiempo en segundos
//    2         15          40                  8140
//    0         0            0                  0
//    1         1            1                  3661
//    5         60          60                  21660




#include <iostream>
#include <cmath>
using namespace std;

int hr_seg = 0,min_seg = 0, total = 0;

// Funcion para cambiar las horas y minutos a segundos, despues suma el tiempo en segundos//
int Fun(int horas, int minutos, int segundos)
{
    hr_seg = horas * 3600;
    min_seg = minutos * 60;
    total = hr_seg + min_seg + segundos;
    return total;

}

int main() {
    
    int hr, min, seg;
    int tiempo_en_segundos;
    
    cout << " Tecle la hora, minutos, y segundos "<< endl;
    cin >> hr >> min >> seg;
    tiempo_en_segundos = Fun(hr, min, seg);
    cout << tiempo_en_segundos << " segundos" << endl;
    return 0;
}

