#include <iostream>
#include <string.h>
using namespace std;
int main(int argc,char *argv[]){

    // cout << argv[0] << "\n";
    // cout << argv[1] << "\n";
    // cout << argv[2] << "\n";

    if (argc > 1)
    {
        if (!strcmp(argv[1],"Olá")){
            cout << "Olá, Mestre\n";
            cout << "Em que posso ajudar ?\n";
        }else if (!strcmp(argv[1], "Oi")){
            cout << "Seja mais Polido Mestre\n";
            cout << "Mas Olá\n";
        }else
        {
        cout << "Olá para você também!!\n";
        }
    }
    
    return 0;
}