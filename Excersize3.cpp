#include<iostream>

using namespace std;

int main(){

    int area,base,altura;

    cout << "dame la altura de tu triangulo" << endl;
    cin >> altura;

    cout << "dame la base de tu triangulo " << endl;
    cin >> base;

    area = (base*altura)/2;

    cout << "el area de tu triangulo es de : " << area;


}