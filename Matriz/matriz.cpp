#include <iostream>
using namespace std;
int main(){

    string coisas[3][3];
    int l,c;
    
    for (l = 0; l < 3; l++){
        for(c =0; c < 3; c++){
            cout << "Digite qualquera coisa: ";
            cin >> coisas[l][c];
        }
    } 
       for (l = 0; l < 3; l++){
        for(c =0; c < 3; c++){
            cout << coisas[l][c] << " ";
        }
        cout << "\n";
    } 
    return 0;
}