#include <iostream>
using namespace std;
int main(){
    
    int cont;
    while (cont <= 10000)
    {
        cout << cont << "\n";
        cont ++;
        if (cont == 5001)
        {
            break;
        }
        
    }
    
    return 0;
}