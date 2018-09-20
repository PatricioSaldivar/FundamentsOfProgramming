//
//  main.cpp
//  Areglos_Clase
//
//  Created by Pato Saldivar on 23/10/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    //arreglo que le caben 20 elemntos
    double arr[20];
    int tamAreglo;
    
    // Validar que el tamaño del arreglo no se exceda
    do{
        cout<< "Cuantos datos quieres? (1-20)";
        cin>> tamAreglo;
    }while (tamAreglo<1 || tamAreglo>20);
    
    
    
    //leer datos en ciclo
    for (int i=0; i<tamAreglo; i++){
        cin >> arr[i];
    }
    
    
    //Mostrar los datos en ciclos
    cout<< "Los datos son:";
    for (int i=0; i<tamAreglo; i++){
        cout<< arr[i]<<endl;
    }
    
    cout<< "La suma es:";
    //Mostrar los datos sumados ciclos
    double suma=0;
    for (int i=0; i<tamAreglo; i++){
        suma+=arr[i];
    }
    cout<< suma<<endl;
    
    
    //Mostrar los datos en ciclos de forma inversa
    for (int i=tamAreglo-1; i>=0; i--){
        cout<< arr[i]<<endl;
    }

    return 0;
}
