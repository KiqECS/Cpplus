#include <iostream>
using namespace std;
int main(){

    int n = 5;
    int *pn;

    pn = &n;

    cout << pn << "\n" << &n << "\n"; // Endereço da várivel no sistema

    cout << *pn << "\n" << n << "\n"; // Valor atribuido a váriavel
    
    // Também se pode mudar a váriavel pelo ponteiro
    *pn = 8;

    cout << *pn << "\n" << n;
    return 0;
}