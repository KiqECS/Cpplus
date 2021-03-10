#include <iostream>
using namespace std;

struct Pessoa_Fisica
{
    string cpf;
    string nome;
    string sobrenome;
    int idade;
};


int main(){

    Pessoa_Fisica p1;
    p1.cpf = "158.945.933-44";
    p1.idade = 31;
    p1.nome = "Cleitin do Grau";
    p1.sobrenome = "Cabuloso";

    cout << "Nome.....: " << p1.nome << "\n";
    cout << "Sobrenome: " << p1.sobrenome << "\n";
    cout << "Idade....: " << p1.idade << "\n";
    cout << "CPF......: " << p1.cpf << "\n";

    return 0;
}