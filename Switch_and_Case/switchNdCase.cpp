#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int idade,curso,outros;
    char opc;
    string sugestao;
    cout << "Qual a sua idade: ";
    cin >> idade;
    /*switch (idade >= 18){
        case true:
            cout << "Você é de Maior\n";
            break;
        case false:
            cout <<  "Você é de Menor\n";
            break;
    }
    */
    cursos:
    if(idade >=16){
        cout << "Temos os seguintes cursos\n";
        cout << "[1] Programação Front-End\n";
        cout << "[2] Programação Back-End\n";
        cout << "[3] Programação Full-Stack\n";
        cout << "[4] Lista completa\n";
        cout << "Digite o número da sua opção de curso: ";
        cin >> curso;
        switch(curso){
            case 1:
            cout << "Você tem "<< idade;
            cout << "\nE escolheu fazer Front\n";        
            break;
            case 2:
            cout << "Você tem "<< idade ;
            cout << "\nE escolheu fazer fazer Back\n";
            break;
            case 3:
            cout <<"Você tem "<< idade;
            cout << "\nE escolheu fazer FullStack\n";
            break;
            case 4:
            cout << "Não temos ainda outros cursos\n";
            cout << "Deseja outras opções de curso? [s/n]: ";
            cin >> opc;
                if (opc == 's' || opc == 'S')
                {
                    cout << "[1] Desejo outro curso que não tem na lista\n";
                    cout << "[2] Desejo voltar a lista de cursos\n";
                    cin >> outros; 
                        switch(outros){
                            case 1:
                                cout << "Digite em baixo a sugestão e aperte enter\n";
                                cin >> sugestao;
                                cout << "Obrigado pela sugestão, iremos analisar!!";
                            break;
                            case 2:
                                system("clear");
                                goto cursos;
                        }
                }
            
            break;
        }
    }else
    {
        cout << "Sinto muito!!\n";
        cout << "Por ser muito novo, não pode fazer nosso cursos\n"; 
    }
    
return 0;
}