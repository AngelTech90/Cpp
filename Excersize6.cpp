#include<iostream>

using namespace std;

int main(){

    int number, factorial = 1;

    

    cout << "Give me the number that you take factorial" << endl;
    cin >> number;

    for (int i = 1 ; i <= number; i++){

        factorial = factorial * i;

    }

     cout << factorial;

    return 0 ;

}