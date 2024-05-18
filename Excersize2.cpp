#include<iostream>

 using namespace std;

int main(){

int vol,radio;

cout << "Dame el radio de tu circulo" << endl;
cin >> radio;

vol = (4/3) * 3.14 * radio*radio*radio;

cout << "El volumen de tu circulo es de " << vol << endl;

}