//
//  main.cpp
//  Proyecto Integrador
//
//  Created by Pato Saldivar on 11/11/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;
int Constante= 4;
char cMatTablero[4][4];
char Movimiento;
int RenInicial, RenMedio,RenFinal;
int ColInicial, ColMedio, ColFinal;
int Loop=0;
int Casilla;

int valorLoop(){
   return 1;
}

void llenaTablero()
{
    int iR, iC, iCont;
    for (iR = 0; iR < 4; iR++)
        for (iC = 0; iC < 4; iC++)
            cMatTablero[iR][iC] = ' ';
    srand((int)time(0));
    for (iCont = 1; iCont <= 13; )
    {
        iR = rand() % 4; // esto genera un numero aleatorio
        iC = rand() % 4; // entre 0 y 3
        if (cMatTablero[iR][iC] == ' ')
        {
            cMatTablero[iR][iC] = '$';
            iCont++;
        }
    }
}
void ValidarVacio(int Casilla, char &Movimiento, int &ColInicial,int &ColMedio, int &ColFinal,int &RenInicial,int &RenMedio,int &RenFinal){
    
    RenInicial=(Casilla-1)/4;
    ColInicial=(Casilla-1)%4;
    if (cMatTablero[RenInicial][ColInicial]==' '){
        Movimiento='0';
    }
    
    if (Movimiento=='w'){
        RenFinal=(Casilla-9)/4;
        ColFinal=(Casilla-9)%4;
        RenMedio=(Casilla-5)/4;
        ColMedio=(Casilla-5)%4;
        if (cMatTablero[RenFinal][ColFinal]=='$') {
            Movimiento='0';
        }
        if (cMatTablero[RenMedio][ColMedio]==' ') {
            Movimiento='0';
        }
    }
    
    if (Movimiento=='a'){
        RenFinal=(Casilla-3)/4;
        ColFinal=(Casilla-3)%4;
        RenMedio=(Casilla-2)/4;
        ColMedio=(Casilla-2)%4;
        if (cMatTablero[RenFinal][ColFinal]=='$') {
            Movimiento='0';
        }
        if (cMatTablero[RenMedio][ColMedio]==' ') {
            Movimiento='0';
        }
    }
    if (Movimiento=='s'){
        RenFinal=(Casilla+7)/4;
        ColFinal=(Casilla+7)%4;
        RenMedio=(Casilla+3)/4;
        ColMedio=(Casilla+3)%4;
        if (cMatTablero[RenFinal][ColFinal]=='$') {
            Movimiento='0';
        }
        if (cMatTablero[RenMedio][ColMedio]==' ') {
            Movimiento='0';
        }
    }
    if (Movimiento=='d'){
        RenFinal=(Casilla+1)/4;
        ColFinal=(Casilla+1)%4;
        RenMedio=(Casilla)/4;
        ColMedio=(Casilla)%4;
        if (cMatTablero[RenFinal][ColFinal]=='$') {
            Movimiento='0';
        }
        if (cMatTablero[RenMedio][ColMedio]==' ') {
            Movimiento='0';
        }
    }
}

void Validar_Bordes(int Casilla,char &Movimiento){
    if (Casilla<=8){
        if (Movimiento=='w')
            Movimiento= '0';
    }
    if (Casilla%4==1||Casilla%4==2){
        if (Movimiento=='a')
            Movimiento= '0';
    }
    if (Casilla>=9){
        if (Movimiento=='s')
            Movimiento = '0';
    }
    if (Casilla%4==3||Casilla%4==0){
        if (Movimiento=='d')
            Movimiento= '0';
    }
 ValidarVacio(Casilla, Movimiento, ColInicial, ColMedio, ColFinal, RenInicial, RenMedio, RenFinal);
}

void PedirDatos(char &Movimiento, int &Casilla){
    cout<<endl;
    cout<<"Casilla-> ";
    do{
        cin>>Casilla;
    }while(Casilla<1||Casilla>16);
    cout<< "(a - izq; s - aba; w - arr; d - der) ";
    do{
        cin>>Movimiento;
        Movimiento= tolower(Movimiento);
        
    }while(Movimiento!='a'&&Movimiento!='w'&&Movimiento!='s'&&Movimiento!='d');
    Loop=valorLoop();
    
}

void Continuar(){
    char Continuar;
    int contador=0;
    
    for (int i=0; i<Constante; i++) {
        for (int n=0; n<Constante; n++) {
            if( cMatTablero[i][n]=='$')
                contador++;
        }
    }
    if (contador==1){
        cout<<"Ganaste";
    }
    if (contador>1) {
        cout<<endl;
        cout<< "Seguir (s/n) -> ";
        do{
            cin >> Continuar;
            Continuar= tolower(Continuar);
            
        }while(Continuar!='s'&& Continuar!='n');
        if (Continuar=='n') {
            cout<<"Quedaron "<<contador<<" fichas\n";
            Loop=0;
        }
        if (Continuar=='s') {
            PedirDatos(Movimiento,Casilla);
        }
    }
    
    
}
void MostrarTableroContinuo(){
    int Casi=1;
    for (int i=0; i<Constante; i++) {
        cout<< endl;
        for (int n=0; n<Constante; n++) {
            if (Casi<=9) {
                cout<< " "<<Casi<<"[" <<cMatTablero[i][n]<<"]  ";
            }
            if (Casi>=10) {
                cout<<Casi<<"[" <<cMatTablero[i][n]<<"]  ";
            }
            Casi++;
            
        }
    }
    Continuar();
}

void ComerCasillas(char Movimiento, int &Casilla,int &ColInicial,int &ColMedio, int &ColFinal,int &RenInicial,int &RenMedio,int &RenFinal){
    tolower(Movimiento);
    Validar_Bordes(Casilla, Movimiento);
    switch (Movimiento) {
        case 'a':
            cMatTablero[RenMedio][ColMedio]=' ';
            cMatTablero[RenInicial][ColInicial]=' ';
            cMatTablero[RenFinal][ColFinal]='$';
            break;
        case 'w':
            cMatTablero[RenMedio][ColMedio]=' ';
            cMatTablero[RenInicial][ColInicial]=' ';
            cMatTablero[RenFinal][ColFinal]='$';
            break;
        case 's':
            cMatTablero[RenMedio][ColMedio]=' ';
            cMatTablero[RenInicial][ColInicial]=' ';
            cMatTablero[RenFinal][ColFinal]='$';
            break;
        case 'd':
            cMatTablero[RenMedio][ColMedio]=' ';
            cMatTablero[RenInicial][ColInicial]=' ';
            cMatTablero[RenFinal][ColFinal]='$';
            break;
    }
    MostrarTableroContinuo();
}

int main(){
    llenaTablero();
    
    int Casi=1;
    for (int i=0; i<Constante; i++) {
        cout<< endl;
        for (int n=0; n<Constante; n++) {
            if (Casi<=9) {
                cout<< " "<<Casi<<"[" <<cMatTablero[i][n]<<"]  ";
            }
            if (Casi>=10) {
                cout<<Casi<<"[" <<cMatTablero[i][n]<<"]  ";
            }
            Casi++;
            
        }
    }
    PedirDatos(Movimiento, Casilla);
    ComerCasillas(Movimiento, Casilla, ColInicial, ColMedio, ColFinal, RenInicial, RenMedio, RenFinal);
    do{
        ComerCasillas(Movimiento, Casilla, ColInicial, ColMedio, ColFinal, RenInicial, RenMedio, RenFinal);
    }while (Loop==1);
    
}


