#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int idade;
    char nome[10];

    printf("Digite o seu nome: ");
    scanf("%s",&nome);

    printf("Digite a sua idade: ");
    scanf("%d",&idade);

    printf("Olá %s prazer em conhece-lo!\nVocê tem %d, é isso mesmo?\n",nome,idade);
    return 0;
}