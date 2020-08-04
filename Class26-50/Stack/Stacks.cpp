#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack <string> frutas;

    frutas.push("Banana");
    frutas.push("Maçã");
    frutas.push("Uva");
    frutas.push("Tangerina");
    frutas.push("Laranja");
    cout << frutas.size() << "\n";

    return 0;
}