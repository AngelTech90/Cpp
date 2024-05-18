#include<iostream>

using namespace std;

int main(){

    int i = 0, number,setter = 0;


    cout << "Give me the number that you want to generate a multiplication table";
    cin >> number;

    while(i <= 9){

        i++;

         cout << number*i << " ";

        setter ++;

        if(setter == 3){

            setter = 0;

            cout << number * i << " " << endl;
            
       
        }

    }


    return 0;

}