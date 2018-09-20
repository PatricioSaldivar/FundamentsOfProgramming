//
//  main.cpp
//  Estaciones Del Año
//
//  Created by Pato Saldivar on 25/08/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//
//
//
// Este programa es para saber en que estacion del año se encuentra la relativa fecha preguntada
//
//  Algorismo:
//1. Pedir en que numero de mes
//2. Pedir el dia en numero
//3. Calcular la Estacion del año
//4. Desplegar la la estacion del año
//
//  La Primavera (SPRING) inicia el 20 de Marzo (3,20)
//  El Verano (SUMMER) empieza el 21 de Junio  (6,21)
//  El Otoño (AUTUMN) comienza el 23 de Septiembre (9,23)
//  El Invierno (WINTER) empieza el 21 de Diciembre (12,21)
//
//____________________________________________________________________________________
//
//  Casos Prueba
//
//  (1,28)   WINTER
//  (3,19)   WINTER
//  (4,02)   SPRING
//  (7,14)   SUMMER
//  (11,27)  AUTUMN

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    
    int mes, dia;
    
    cout << "Que mes es? (1-12)" << endl;
    cin >> mes;
    cout << "Que dia es? (1-31)" << endl;
    cin >> dia;
    
    if (mes >= 1 && mes <=2)
        cout << "WINTER"<< endl;

    if (mes == 3){
        if (dia <=19)
            cout << "WINTER"<< endl;
    }
    
    if (mes == 3) {
        if (dia >= 20)
        cout << "SPRING"<< endl;
    }
    

    if (mes >= 4 && mes <=5)
        cout << "SPRING"<< endl;
  
    if (mes == 6){
        if (dia <=20)
        cout << "SPRING"<< endl;
    }
    if (mes == 6){
        if (dia >=21)
        cout << "SUMMER"<< endl;
    }
    if (mes >= 7 && mes <=8)
        cout << "SUMMER"<< endl;
    
    if (mes == 9){
        if (dia <=22)
        cout << "SUMMER"<< endl;
    }
    if (mes == 9){
        if (dia >=23)
        cout << "AUTUMN"<< endl;
    }
    if (mes >= 10 && mes <=11)
        cout << "AUTUMN"<< endl;
   
    if (mes == 12){
        if (dia <=20)
        cout << "AUTUMN"<< endl;
    }
    if (mes == 12){
        if (dia >=21)
        cout << "WINTER"<< endl;
    }
    
    
    return 0;
}
