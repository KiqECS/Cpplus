#include <iostream>
#include <list>
using namespace std;
int main(){

    list <int> alea;
    /*
    int tam = 10;
    list <int>::iterator it;

    for(int i = 0; i <= tam; i++){
        alea.push_back(i);
    }

    it = alea.begin();
    advance(it,3);

    alea.insert(it,18);

    tam = alea.size();
    for (int i = 0; i < tam; i++ ){
        cout << alea.front() << "\n";
        alea.pop_front();
    }
    */

    alea.push_front(15);
    alea.push_front(8);
    alea.push_front(16);
    alea.push_front(48);
    alea.push_front(12);

    alea.sort();
    alea.reverse();
    
    int tam = alea.size();
    for (int i = 0; i < tam; i++ ){
        cout << alea.front() << "\n";
        alea.pop_front();
    }
    return 0;
}