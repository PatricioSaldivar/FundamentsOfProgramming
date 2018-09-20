//
//  LlamadasyMensajes.cpp
//  Llamadas y Mensajes
//
//  Created by Pato Saldivar on 25/08/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//
//
//
//Programa para calcular el precio de un cierto mensaje o llamada de una cierta compañia
//
//Algorismo:            1. Pedir al usario si hizo una llamada o un mensaje
//                      2. Pedir al usario hacia donde hizo la llamada o mensaje (compañia)


//                      Para mensajes:
//                    A la misma compañía – 40 centavos el mensaje
//                    A otra compañía celular – se cobra 60 centavos por cada bloque de 20 palabras, si sobran palabras se cobran otros 60 centavos (Por ejemplo si el mensaje tiene 27 palabras, se cobran 120 centavos).

//                      Para llamadas:
//                   A la misma compañía – 5 minutos gratis, después de esto cada minuto se cobra a 20 centavos
//                   A otra compañía celular – se cobra a 50 centavos el minuto
//                   A número fijo – se cobra a 100 centavos, sin importar la duración


//                      3. Pedir al usario la cantidad de minutos o palabras
//                      4. Calcular el costo en centavos
//                      5. Mostrar el costo total del mensaje
//-----------------------------------------------------------------------------------------------------
//
//          Llamada o Mensaje      (S, O ,F)      Cantidad    Total
//       ----------------------- -------------- ----------- --------
//              Llamada               S             06          20
//              Llamada               O             08          400
//              Llamada               F             35          100
//       ----------------------- -------------- ----------- --------
//              Mensajes              S             40          40
//              Mensajes              O             70          240
//
//
//


#include <iostream>
#include <cmath>
using namespace std;
int main() {
    char llamada_mensaje;
    char compañia;
    int duracion_palabras, residuo;
    double costo = 0.0;
    
    cout<< "Es llamada (C) o mensaje (M)" << endl;
    cin >> llamada_mensaje;
    cout<< "Es a la misma compañia (S) a otra compañia (O) o a un numero fijo (F)?"<< endl;
    cin >> compañia;
    cout << " Si fue llamada cuantos minutos, si fue mensaje cuantas palabras?"<< endl ;
    cin >> duracion_palabras;
    residuo= duracion_palabras%20;
    
    if (llamada_mensaje == 'C') {
        
        if (compañia== 'S'){
            costo= (duracion_palabras-5)*20;
        if (costo <= 0)
            costo =0;
        }
        
        if (compañia == 'O'){
            costo = duracion_palabras*50;
        }
        if (compañia == 'F'){
            costo= 100;
        }
   cout << "El costo de la llamada es de " << costo<< " centavos"<< endl;
   
    }
    
    else if (llamada_mensaje== 'M'){
        
        if (compañia == 'S'){
            costo = 40;
        }
        else if (compañia== 'O'){
            if (residuo > 0)
                costo= ((duracion_palabras/20)+ 1)*60;
        }
        if (residuo == 0){
            costo = (duracion_palabras/20)*60;
        }
        cout << "El costo del mensaje es de " << costo<< " centavos"<< endl;
    }

    return 0;
    }
