#include <iostream>
using namespace std;
int main(){
    string name;
    int yearsold;
    //bool = true or false
    char first;
    //double = 4.1582
    float money;

    cout << "Digite o seu nome: ";
    cin >> name;
    cout << "Digite a sua idade: ";
    cin >> yearsold;
    cout << "Digite a primeira letra do seu nome: ";
    cin >> first; 
    cout << "Digite o seu montante: ";
    cin >> money;

    cout << "Nome: " << name << "\n";
    cout << "Anos de idade: " << yearsold << "\n";
    cout << "Primeira letra do nome: " << first << "\n";
    cout << "Montante: " << "R$" << money << "\n";

    return 0;
}