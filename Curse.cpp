/* Var and data type of c++

int = 2-4 bytes(entire number values)
float = 4 bytes(decimals numbers)
double = 4 bytes(a decimal var type with the double of space)
char = 1 byte(text)
bool = 1 byte(bolean)
void = 0 bytes(void)
 */

/*CAP 1  
// int main(){
    // int inputNumberUno,inputNumberDos,Resulta;
//     cout << "Dame el primer numero de tu suma" << endl;
//     cin >> inputNumberUno;
//     cout << "Dame el segundo numero de tu suma" << endl;
//     cin >> inputNumberDos;
//     Resulta = inputNumberDos + inputNumberUno;

//     cout << "la suma es: " << Resulta;

//     return 0;
// } */

/* CAP 2 CONDITIONALS 

int main(){

int number = -48;

if(number > 0){

    cout << "Number is positive" << endl;

} else if(number = 0) {

    cout << "NUmber is equal " << 0 << endl;
}
else{

    cout << "number is negative" <<endl;
};


}*/

/* CAP 3 LOOPS 

int main(){

for (int i = 1; i >= 14; i++ ){

    cout << i << endl;

    

};

return 0;} 

*/

/*int main(){

    /*CAP 5 DO WHILE

    //Calculate the amount of digits of any number using do while, and taking in count the neg and pos numbers

int i = 0,dig;

cout << "give me a digit" << endl;

    do{

        dig = dig/10;
        i++;

    }while(dig != 0);

    cout << "Your digit amout its: " <<i << endl;

}*/

   /* CAP 6 SWITCH 

    // We will make a little calculator  
    char op;
    int n1,n2;

    cout << "Give me your op type" << endl;
    cin >> op;

    cout << "Give me two numbers" << endl;
    cin >> n1 >> n2;

    switch (op)

    {

    case '+':

    cout << "Your sum is equal to: " << n1 + n2;

        break;


    case '-':

    cout << "Your rest is equal to: " << n1 - n2;

        break;

    case '/':

    cout << "Your division is equal to: " << n1 / n2;

        break;

    case '*':

    cout << "Your multiplication is equal to: " << n1 * n2;

        break;    
    default:

        cout << "Your selected an option that don´t exist";

        break;
    }*/
 /* Cap 7 BREK & CONTINUE: We use this tool in c++ to chage the flow of a loop*/



#include<iostream>

using namespace std;

int main(){

int hectareas = 10000,numHectareas = 0,superficie = hectareas * numHectareas; 

if(superficie > 1000000){

    

}

return 0;

}










