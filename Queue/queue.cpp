#include <iostream>
#include <queue>
using namespace std;

int main(){

    queue <int> alea;
    
    alea.push(1);
    alea.push(15);
    alea.push(80000);
    
    cout << "Tamanho da fila....: " << alea.size() << "\n";
    cout << "Primeiro adicionado: " << alea.front() << "\n";
    cout << "Ultimo adicionado..: " << alea.back() << "\n";
    
    while (!alea.empty())
    {
        alea.pop();
        cout << "Todos serão apagados" << "\n";
        cout << "Tamanho da fila....: " << alea.size() << "\n";
    }
    
    return 0;
}