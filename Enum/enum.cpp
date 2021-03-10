#include <iostream>
using namespace std;
int main(){

    enum livros{romance = 0,acao = 4,aventura = 0};
    livros livros_select;

    livros_select = acao;
    cout << livros_select << "\n";
    return 0;
}