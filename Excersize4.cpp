#include<iostream>

using namespace std;

int main(){

    int minutos;
    double costo = 3.50,horas;
    char tiempo,mensaje;

    minutos = horas * 60;
    horas = minutos/60;

    cout << "Dime, Cuantas horas estuviste en el estacionamiento?." << endl;
    cin >> horas;

    if(minutos >= 30){

        costo = costo * (minutos/5);

        cout << "El costo de tu estacionamiento es de" << costo << endl;

    } else if (horas >= 1){

        costo = costo * (horas/2);
        cout << "El costo de tu estacionamiento es de " << costo << endl;

    } else if (minutos % 2 == 0){

    cout << "Tu costo es par" << endl;
    } else {

        cout << "tu costo es inpar" << endl;
    }

    return 0;
}