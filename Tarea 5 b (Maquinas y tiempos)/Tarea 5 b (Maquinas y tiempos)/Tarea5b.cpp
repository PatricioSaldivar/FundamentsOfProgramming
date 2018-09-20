//
//  main.cpp
//  Tarea 5 b (Maquinas y tiempos)
//
//  Created by Pato Saldivar on 08/10/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//---------------------------------------
//Caso de Prueba
//
//Cuantas maquinas son?
//3
//Cuantas piezas son?
//2
//Teclea los tiempos para la maquina 1
//15 7
//El promedio de la maquina 1 es de 11
//Teclea los tiempos para la maquina 2
//12 9
//El promedio de la maquina 2 es de 10.5
//Teclea los tiempos para la maquina 3
//17 9
//El promedio de la maquina 3 es de 13
//La maquina con el tiempo promedio mayor es la 3 con 13 minutos
//
//
//
//
//Cuantas maquinas son?
//2
//Cuantas piezas son?
//3
//Teclea los tiempos para la maquina 1
//4 7 8
//El promedio de la maquina 1 es de 6.33333
//Teclea los tiempos para la maquina 2
//7 9 5
//El promedio de la maquina 2 es de 7
//La maquina con el tiempo promedio mayor es la 2 con 7 minutos

#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int maquinas, MaquinaMayor=0;
    double piezas, PromedioMayor=0;
    cout<< "Cuantas maquinas son?\n";
    cin >> maquinas;
    cout << "Cuantas piezas son?\n";
    cin >> piezas;
    
    for (int contadormaquina = 1; contadormaquina<= maquinas; contadormaquina++) {
        double tiempo=0, tiempototal=0;
        double promedio=0;
        cout << "Teclea los tiempos para la maquina "<< contadormaquina<< endl;
        
    for (int contadorpiezas =1; contadorpiezas<= piezas; contadorpiezas++) {
        cin >> tiempo;
        tiempototal+= tiempo;
    }
        promedio= tiempototal/piezas;
        cout << "El promedio de la maquina "<<contadormaquina<< " es de "<<promedio<<endl;
        if (promedio> PromedioMayor){
            MaquinaMayor= contadormaquina;
            PromedioMayor= promedio;
        }
    }
    cout << "La maquina con el tiempo promedio mayor es la "<<MaquinaMayor<< " con " << PromedioMayor<< " minutos\n";
    return 0;
}
