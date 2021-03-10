#include <iostream>
using namespace std;

void number(int num, int cont = 0);

int main(){

    number(5);

    return 0;
}

void number(int num,int cont){

    if (num >= cont){
        cout << cont << "\n";
        number(num,++cont);
    }
}