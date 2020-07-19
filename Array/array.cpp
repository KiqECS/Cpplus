#include <iostream>
using namespace std;
int main(){

    int tamv = 3,i;
    string comidas[tamv];

    for (i = 0; i < tamv; i++){
        cout << "Digite uma comida: ";
        cin >> comidas[i];
        cout << "Comida digitada: " << comidas[i] << "\n";
    } 

    return 0;
}