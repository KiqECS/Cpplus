#include <iostream>
using namespace std;
int main(){

    int numimp, numpar, num;
    
    for(int tmp; tmp <= 1000000; tmp++); // Gives to u more initialize time of the code

    cout << "Números\n";
    for ( num = 0,numimp = 1,numpar = 0; num <= 100; num++, numimp+=2, numpar+=2 )
    {
        cout << "num " << num << " - imp " << numimp << " - par " << numpar << "\n";  
    }
    
    return 0;
}