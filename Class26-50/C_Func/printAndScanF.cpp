#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
    //int idade;
    //char nome[10];
    float pi = M_PI;

    printf("Valor de PI: %f\n",pi);
    printf("Valor de PI: %0.2f\n",pi); // Muda a quantidade de casas decimais
    printf("Valor de PI: %07.2f\n",pi); // Nesse caso gera um numero com 7 casas onde não tem número se completa com 0

    

    /*
        printf("Digite o seu nome: ");
        scanf("%s",&nome);

        printf("Digite a sua idade: ");
        scanf("%d",&idade);

        printf("Olá %s prazer em conhece-lo!\nVocê tem %d, é isso mesmo?\n",nome,idade);
    */
    return 0;
}