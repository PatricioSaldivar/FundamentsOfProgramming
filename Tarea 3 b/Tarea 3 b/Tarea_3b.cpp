//
//  main.cpp
//  Tarea 3 b
//
//  Created by Pato Saldivar on 05/09/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//
//
// Este programa es para poner en formato las fechas requeridas, estas se pueden poner en nombre o en numero.
//
//  Algorismo:
//1. Pedir el dia, mes, y año de la primera fecha
//2. Pedir el dia, mes, y año de la segunda fecha
//3. Preguntar en que formato quiere las fecha, ya sea en nombre o en numero
//4. Poner en el formato requerido las fechas antes dichas
//5. Desplegar ambas fechas
//____________________________________________________________________________________
//
//  Casos Prueba

//  inicio:día 12
//  inicio:mes 11
//  inicio:año 2017

//  final:día 2
//  final:mes 2
//  final:año 2018

//Deseas ver el mes con a)números o b)nombres ? b
//  12 de Noviembre de 2017
//  2 de Febrero de 2018
//----------------------------------------------------
//  inicio:día 1
//  inicio:mes 1
//  inicio:año 2010

//  final:día 4
//  final:mes 4
//  final:año 2015

//Deseas ver el mes con a)números o b)nombres ? b
//  1 de Enero de 2010
//  4 de Abril de 2015
//-----------------------------------------------------
//  inicio:día 1
//  inicio:mes 1
//  inicio:año 2011

//  final:día 5
//  final:mes 5
//  final:año 2015

//Deseas ver el mes con a)números o b)nombres ? a
//  1/1/2011
//  5/5/2015
//----------------------------------------------------
//  inicio:día 28
//  inicio:mes 11
//  inicio:año 2017

//  final:día 14
//  final:mes 9
//  final:año 2019

//Deseas ver el mes con a)números o b)nombres ? a
//  28/11/2017
//  14/9/2019
//----------------------------------------------------




#include <iostream>
#include <cmath>
using namespace std;

string MonthName;
// Funcion para obtener el nombre del mes//
string obtenerNombreMes(int month) {
    
    switch (month) {
        case 1: MonthName="Enero";
            break;
        case 2: MonthName="Febrero";
            break;
        case 3: MonthName="Marzo";
            break;
        case 4: MonthName="Abril";
            break;
        case 5: MonthName="Mayo";
            break;
        case 6: MonthName="Junio";
            break;
        case 7: MonthName="Julio";
            break;
        case 8: MonthName="Agosto";
            break;
        case 9: MonthName="Septiembre";
            break;
        case 10: MonthName="Octubre";
            break;
        case 11: MonthName="Noviembre";
            break;
        case 12: MonthName="Diciembre";
            break;
            
    }
    return MonthName;
}
// Funcion para mostrar en la terminal la fecha en un formato de numeros//
void muestraFechaNumeros(int days,int month, int year){
    
    cout << days <<"/" << month <<"/" << year<< endl;
    
}
// Funcion para desplegar la fecha con el mes en palabra//
void muestraFechaNombres(int days, int year){
    
    cout<< days<< " de "<< MonthName << " de "<< year<< endl;
    
}

int main() {
    
    int dia1, mes1, ano1, dia2, mes2, ano2;
    char OpcionNombreNumero;
    string nombre_mes1, nombre_mes2;
    
    cout << "Teclea el dia de la fecha de inicio ";
    cin >> dia1;
    
    cout << "Teclea el mes de la fecha de inicio ";
    cin >> mes1;
   
    cout << "Teclea el año de la fecha de inicio ";
    cin >> ano1;
    
    cout << "Teclea el dia de la fecha de terminación ";
    cin >> dia2;
    
    cout << "Teclea el dia de la fecha de terminación ";
    cin >> mes2;
    
    cout << "Teclea el dia de la fecha de terminacón ";
    cin >> ano2;
    
    cout << "Deseas ver el mes en numero (a) o deseas verlo en nombre (tecle cualquier otra tecla) ";
    cin >> OpcionNombreNumero;
    // Depende del valor de la variable OpcionNombreNumero se sabe que funciones ejectuar//
    switch (OpcionNombreNumero) {
        case 'a':
            muestraFechaNumeros(dia1, mes1, ano1);
            muestraFechaNumeros(dia2, mes2, ano2);
            
            break;
            
        default:
        nombre_mes1 = obtenerNombreMes(mes1);
            muestraFechaNombres(dia1, ano1);
            
        nombre_mes2 = obtenerNombreMes(mes2);
            muestraFechaNombres(dia2, ano2);
            
            break;
    }
    return 0;
}
