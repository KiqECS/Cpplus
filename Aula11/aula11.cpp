#include <iostream>
using namespace std;
int main(){
    
    string dia;
    char opcsair,fimsemana;
    int lucky;

    cout << "Você deseja sair? [s/n]: ";
    cin >> opcsair;

        if (opcsair == 's' || opcsair == 'S')
        {       
            cout << "Como está o dia: ";
            cin >> dia;
            cout << "É fim de semana? [s/n]: ";
            cin >> fimsemana;

            if ((fimsemana== 's' || fimsemana == 'S') && dia == "Sol")
            {
                cout << "Vamos para a praia\n";

            }else if ((fimsemana== 's' || fimsemana == 'S') && dia =="Nublado")
            {
                cout << "Vamos ao cinema\n";
            }
        }
        if (opcsair == 'n' || opcsair == 'N')
        {

            cout << "Beleza, você escolheu, mas sua sorte agora pode mudar tudo\n";
            cout << "Escolha entre 0 e 1: ";
            cin >> lucky;
                    
                if (!lucky)
                {
                    cout << "Hoje não foi seu dia de sorte meu bom!!\n";
                    cout << "Você vai sair e fodase\n";
                }else
                {
                    cout << "Parabéns, pode deitar na sua caminha!\n";
                }
        }
        
    return 0;
}