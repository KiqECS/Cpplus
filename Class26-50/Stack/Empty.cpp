#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack <int> numeros;

    while (numeros.size() <= 10)
    {
        numeros.push(1);
    }

    cout << numeros.empty();

    return 0;
}