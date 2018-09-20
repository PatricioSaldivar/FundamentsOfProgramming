//
//  main.cpp
//  Actividad Ventas de Dias y su Promedio
//
//  Created by Pato Saldivar on 05/10/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//

#include <iostream>
using namespace std;

int main (){
    
    double ventas,VentasDia=0,Total=0;
    char masVentas, Otro_dia;
    int contador=0;

    do{
        VentasDia=0;
        contador++;
        
        
        do{
            cout << "Teclea las ventas\n"; cout << "$ ";
        cin >> ventas;
        VentasDia= ventas + VentasDia;
        cout << "Hay mas ventas? (s = si)\n";
        cin >> masVentas;

    }while (masVentas == 's');
    
    cout << "Total del dia "<< contador<< " es de " << VentasDia<<endl;
     Total= Total+VentasDia;
        cout << "Vas a reportar otro dia? (s = si)\n ";
        cin >> Otro_dia;
        
     
        
    }while (Otro_dia =='s');
    
    cout << "Los dias reportados son " << contador<< " dias\n";
    cout << "El total de ventas entre todos los dias es de " << Total<< endl;
    Total= Total/contador;
    cout << "El promedio de ventas entre todos los dias es de "<< Total<< endl;
    return 0;
}
