#include <iostream>
using namespace std;
int main(){

    string nome,nomecreator;

    cout << "Digite seu nome: ";
    cin >> nome;

    //(nome == "Kaique") ? cout << "The Creato\n" : cout << "Falastrão\n";
    nomecreator = (nome == "Kaique") ? "The Creator\n" : "Falastrão\n";
    cout << "Você é " << nomecreator;
    return 0;
}