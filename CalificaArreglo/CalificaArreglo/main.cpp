//
//  main.cpp
//  CalificaArreglo
//
//  Created by Pato Saldivar on 30/10/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

void PideDatos(char respuestas[], int &tam){
    
    do{
        cout<< "Cuantos datos?";
        cin>>tam;
    }while(tam<1||tam>20);
    for (int i=0; i<tam; i++) {
        cin>> respuestas[i];
    }
    
}

void ExamenDeAlumno(char respuestas[],int tam, int &alumnos,char resp_alumnos[],int correctos, int incorrectos ){

    cout<< "Cuantos alumnos?";
    cin>>alumnos;

    for (int c=0; c<alumnos; c++) {
        correctos=0;
        incorrectos=0;
    for (int i=0; i<tam; i++) {
    cin>> resp_alumnos[i];
        if (resp_alumnos[i]==respuestas[i]) {
            correctos++;
        }
        else
            incorrectos++;

    }
        cout<< correctos<<" "<<incorrectos<<endl;;
    }
}

int main(){
    char resp[20],resp_alumnos[20];
    int preguntas, alumnos, correctos=0, incorrectos=0;
    PideDatos(resp, preguntas);
    ExamenDeAlumno(resp, preguntas, alumnos, resp_alumnos, correctos, incorrectos);
    
    
    
    
    
    
    
    
    
    
    
}
