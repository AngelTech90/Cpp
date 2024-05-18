#include<iostream>

using namespace std;

int main(){

    int number, a = 0,i;

    cout << "Give me a number" << endl;
    cin >> number; 

    for(int i = 1; i <= number; i++){

        if(number % i == 0){

            a++; 
        } 

    }

        if (a == 2){

            cout  << "tu numero es primo" << endl;

        } else{

            cout << "Tu numero no es primo" << endl;

        }

    return 0;

}