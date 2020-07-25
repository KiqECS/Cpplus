#include <iostream>
using namespace std;

// Prototype
void creator();
void sum(int num1, int num2);
int sub(int num1,int num2);
///

int main(){
    int sub_num;

    /// Without return
    creator();
    sum(5,5);
    ///
    
    /// With return
    sub_num = sub(10,5);
    cout << "A subtração é: " << sub_num << "\n"; 
    ///

    return 0;
}

/// Start write funcs before the MAIN
void creator(){
    cout << "Kaique\n";
}

void sum(int num1, int num2){

    int sum_num;
    sum_num = num1 + num2;
    cout << "A soma é " << sum_num << "\n";
}

int sub(int num1,int num2){
    return num1 - num2; 
}