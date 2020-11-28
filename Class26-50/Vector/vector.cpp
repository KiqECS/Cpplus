#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> num_vec; // Assim se cria um Vector
    vector<int> num_vec_t;
    int i,size_vec;
    
    num_vec.push_back(1);
    num_vec.push_back(2);
    num_vec.push_back(3);
    num_vec.push_back(4);

    num_vec_t.push_back(5);
    num_vec_t.push_back(6);
    num_vec_t.push_back(7);
    num_vec_t.push_back(8);

    //num_vec.swap(num_vec_t); // Troca de 
                               // itens
    num_vec_t.swap(num_vec);   // entre vetores

    size_vec = num_vec.size(); // Tamanho do Vector

    for(i=0;i<size_vec;i++){            
        cout << num_vec[i] << " "; 
    }

    cout << endl;

    for(i=0;i<num_vec_t.size();i++){
        cout << num_vec_t[i] << " "; 
    }

    cout << endl;
    return 0;
}