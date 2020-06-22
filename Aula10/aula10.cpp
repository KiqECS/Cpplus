#include <iostream>
#include <cstdlib>
using namespace std;
int main(){

    float n1,n2,n3,n4,notaf;
    char continuar;
    string nome;

    inicio:
    system("clear");

    cout << "Escola DiruVieura \n";
    cout << "Digite o nome do aluno: ";
    cin >> nome;
    cout << "Digite a primeira nota: ";
    cin >> n1;
    cout << "Digite a segunda nota: ";
    cin >> n2;
    cout << "Digite a terceira nota: ";
    cin >> n3;
    cout << "Digite a quarta nota: ";
    cin >> n4;
    notaf = (n1+n2+n3+n4);
    cout << "Situação do Aluno " << nome << "\n";

        if (notaf >=60)
        {
            cout << "*Aluno Aprovado* ";   
        }else if(notaf >=40){
            cout << "*Aluno em Recuperação*";
        }else
        {
            cout << "*Aluno Reprovado*";   
        }
    cout << "\nDeseja a situação de outro aluno? [s/n]\n";
    cin >> continuar;

        if (continuar == 's' or continuar == 'S')
        {
            goto inicio;
        }

    cout << "\nObrigado por utilizar o nosso Sistema de Notas!!\n\n";
    return 0;
}