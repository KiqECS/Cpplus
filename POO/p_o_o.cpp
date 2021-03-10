#include <iostream>
#include <stdlib.h>
using namespace std;

class Pessoa{

    public:
        string nome = "Kaique";
        int idade = 18;
    private:
};

int main(){

    Pessoa *p1 = new Pessoa();
    cout << p1->nome << "\n";
    cout << p1->idade << "\n";
    return 0;
}