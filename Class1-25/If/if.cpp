#include <iostream>
using namespace std;
int main(){
    
    char opc, nf;
    int numcompra=0;
    int valor;
    string formapagamento;

    cout << "Bem vindo a nossa loja de cachorro quente\n";
    cout << "Temos um unico cachorro quente por enquanto, no valor de 5 reais\n";
    cout << "Deseja comprar algum? [s] ou [n]\n";
    cin >> opc;

    if (opc == 's'){
        cout << "Quanto deseja comprar? \n";
        cin >> numcompra;

        valor = numcompra * 5;

        cout << "O valor será de: R$" << valor << "\n";

        cout << "Qual será o pagamento? [Cartão] ou [Outro]\n";
        cin >> formapagamento;
        while (formapagamento == "Outro")
        {
            cout << "Sinto muito, só estamos aceitando cartões, por causa do coronga\n";
            cout << "Por favor, selecione a forma de pagamento \"Cartão\" ";
            cin >> formapagamento;
        }
        if (formapagamento == "Cartão") //Possiveis testes lógicos == != < > <= >=  
        {
            cout << "Pode colocar na maquineta, por favor\n";
            cout << "Deseja sua via? [s] ou [n]\n";
            cin >> nf;
                if (nf != 'n')
                {
                    cout << "Aqui está\n";
                }else
                {
                    cout << "Okay, Tudo bem\n";
                }
                
                
            cout << "Obrigado!\nVolte Sempre!\n";
        }else
        {
            cout << "Não roube a gente!!!!:'3\n";
        }
    }else
    {
        cout << "Obrigado pela atenção\nBoa tarde\n";
    }
    return 0;
}