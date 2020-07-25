#include <iostream>
#include <cstdlib>
using namespace std;

void name(string name_creator);
void name();

int main(){

    name("Kaique");

    return 0;
}

void name(string name_creator){
    if (name_creator != "Kaique")
        {
            system("reboot"); // If u write the wrong name, your pc will restart
        }
    cout << "Parece que seu pc não vai desligar não é mesmo?\n";
}

void name(){

    string name_creator;

    cout << "Digite o nome do criador: ";
    cin >> name_creator;
        if (name_creator != "Kaique")
        {
            system("reboot"); // If u write the wrong name, your pc will restart
        }
}