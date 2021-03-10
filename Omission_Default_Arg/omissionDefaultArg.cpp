#include <iostream>
using namespace std;

void imp(string txt = "Sem nada");

int main(){

    imp("Olá, agora tenho alguma coisa");

    return 0;
}

void imp(string txt){

    cout << txt << "\n";
}