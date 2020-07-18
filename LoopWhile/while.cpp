#include <iostream>
using namespace std;
int main(){

    char opc = 'n';
    while (opc != 's')
    {
        cout << "Deseja sair do while? [s/n]: ";
        cin >> opc;
    }
    
    return 0;
}