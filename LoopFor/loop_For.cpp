#include <iostream>
using namespace std;
int main(){

    int numim, numpar, num;
    
    for(int tmp; tmp <= 1000000; tmp++); // Gives to u more initialize time of the code

    cout << "Números\n";
    for ( num = 0,numim = 1,numpar = 0; num <= 100; num++, numim+=2, numpar+=2 )
    {
        cout << "num " << num << " - im " << numim << " - par " << numpar << "\n";  
    }
    
    return 0;
}