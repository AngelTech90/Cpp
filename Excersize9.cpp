/* Usando solo variables numericas enteras y reales hacer un algoritmo para ingresar el precio de venta de un producto(variable entera), calcular su precio de promocion con un descuento segun el último digito (extremo derecho) y mostrar el resultado (variable real) 

Precio de entrada:56743 se le calcula el 3% de descuento precio de entrada:67540 se le calcula el 0% de descuento 
NOTA: el algoritmo no tiene forma de decision por ahora. Pueden entregar el algoritmo escrito de un bloc. Pueden entregar el algoritmo en texto plano o como archivo de Pseint si ya lo tiene instaldo en su computadora*/

#include<iostream>

using namespace std;

int main(){

    int precio,descuento,LstNum;

    cout << "Dame el costo de tu producto";
    cin >> precio;

    cout << "Para sacar tu descuento, dime el ultimo numero del precio de tu producto";
    cin >> LstNum;

    descuento = (LstNum * precio)/100;

    cout << "El precio final de tu producto es de: " << precio-descuento;

    return 0 ;
    
}