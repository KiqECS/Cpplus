#include <iostream>
using namespace std;

int num1,num2;//Global variable

//Operators + - / * % ()
//Ex:
int main(){

    //int num1,num2; Local variable
    int num3, num4;
    int calc;
    
    cout <<"-----Calculadora de Soma---------\n\n";
    cout << "Digite o valor do primeiro Número: ";
    cin >> num1;
    cout << "Digite o valor do segundo Número: ";
    cin >> num2;
    cout << "Digite o valor do terceiro Número: ";
    cin >> num3;
    cout << "Digite o valor do quarto Número: ";
    cin >> num4;
    calc=num1 + num2 + num3 + num4;
    cout << "O valor da soma é " << calc << "\n\n";
    return 0;
}