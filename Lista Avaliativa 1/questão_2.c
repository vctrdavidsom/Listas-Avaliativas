// Questão 2
#include <stdio.h>

int soma(int valorDePesquisa) {
    if (valorDePesquisa == 0) {
        return 0;
    } else {
        int num1 = valorDePesquisa % 10;
        int num2 = valorDePesquisa / 10;
        return num1 + soma(num2);
    }
}

int main(void){

    int valorDePesquisa;
    //printf("Digite o valor para verificacao \n");
    scanf("%i",&valorDePesquisa);
    int resultadoDaSoma = soma(valorDePesquisa);

    if(valorDePesquisa%2 == 0){

        printf("%i eh par \n",valorDePesquisa);
        printf("A soma dos algarismos de %i eh %i \n", valorDePesquisa , resultadoDaSoma);

    }else{
        printf("%i eh impar \n",valorDePesquisa);
        printf("A soma dos algarismos de %i eh %i \n", valorDePesquisa , resultadoDaSoma);
    }
    return 0;
}