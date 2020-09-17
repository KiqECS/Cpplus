#include <iostream>
using namespace std;

struct Pessoa_Fisica
{
    string cpf;
    string nome;
    string sobrenome;
    int idade;

    void insert(){
        cout << "Digite o seu nome.....: ";
        cin >> nome;
        cout << "Digite o seu sobrenome: ";
        cin >> sobrenome;
        cout << "Digite o seu CPF......: ";
        cin >> cpf;
        cout << "Digite a sua idade....: ";
        cin >> idade;
        exibir();
    }

    void exibir(){
        cout << "Nome.....: " << nome << "\n";
        cout << "Sobrenome: " << sobrenome << "\n";
        cout << "Idade....: " << idade << "\n";
        cout << "CPF......: " << cpf << "\n";
    }

    void mudar_nome(){
        string mn;
        cout << "Digite o novo nome: ";
        cin >> mn; 
        nome = mn; 
        cout << "Ficha atualizada!\n";
        exibir();
    }

    void mudar_sobrenome(){
        string msn;
        cout << "Digite o novo sobrenome: ";
        cin >> msn;
        sobrenome = msn;
        cout << "Ficha atualizada!\n";
        exibir();
    }

    void mudar_cpf(){
        string mcpf;
        cout << "Digite o novo CPF: ";
        cin >> mcpf;
        cpf = mcpf;
        cout << "Ficha atualizada!\n";
        exibir();
    }
};

int main(){
    
    char opc;
    int opc_m;

    Pessoa_Fisica p1;

    cout << "Ola, vou pegar algumas informacoes com voce :3\n";
    cout << "Digite de forma correta okay? [s/n]: ";
    cin >> opc;
    if (opc == 's' || opc == 'S')
    {
        p1.insert();
    }else{
        cout << "Okay, então tchau, rum!";
        goto fim;
    }
    
    cout << "Deseja mudar alguma coisa? [s/n]: ";
    cin >> opc;
    if (opc == 's' || opc == 'S')
    {
        cout << "Para mudar o nome\nDigite 1\n";
        cout << "Para mudar o sobrenome\nDigite 2\n";
        cout << "Para mudar o CPF\nDigite 3\n";
        cout << "Para mudar a idade\nDigite 4\n";
        cin >> opc_m;
        switch (opc_m)
        {
        case 1:
            p1.mudar_nome();
            break;
        case 2:
            p1.mudar_sobrenome();
            break;
        case 3: 
            p1.mudar_cpf();
            break;
        case 4: 
            cout << "Sinto muito meu colega,\nmas a idade nao da para mudar!";
            break;
        default:
            cout << "Digite um dos numeros validos";
            break;
        }
    }
    cout << "Bye amigo";
    int i;
    while (i < 1000000000)
    {
        i++;
    }
    
    
    fim:
    return 0;
}