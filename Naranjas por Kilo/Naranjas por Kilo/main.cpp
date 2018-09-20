//Naranjas por Kilo
//
//
//
//      Pato Saldivar
//      17/08/17.
//      Este programa sirve para encontar el precio de una cierta cantidad de naranjas en kilos.
//      Analisis: Calcular el precio por kilo de las naranjas
//      Algoritmo:      1. Pedir los kilos que se compraron
//                      2. Pedir el precio total que se pago
//                      3. Resultado = Precio/Kilos
//                      4. Mostrar resultado
//
//      Casos Prueba    Kilos de Naranja: 2
//                      Precio Total: 10
//                      Precio por kilo: 5

#include <iostream>
using namespace std;
int main (){

    // insert code here...
    double kilos, Precio, Precio_por_kilo;
    cout<< "Cuantos kilos de Naranja Compraras? ";
    cin>> kilos;
    cout<< "Cuanto pagaste por los " <<kilos<< " de naranja? ";
    cin>> Precio;
    Precio_por_kilo= Precio/kilos;
    cout<< "El precio por kilo es de " << Precio_por_kilo << " pesos por kilo.";
    
   

    return 0;
}
