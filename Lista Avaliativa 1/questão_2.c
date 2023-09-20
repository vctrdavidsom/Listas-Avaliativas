#include <stdio.h>
#include <locale.h>

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
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    int valorDePesquisa;
    printf("Digite o valor para verificação \n");
    scanf("%i",&valorDePesquisa);
    int resultadoDaSoma = soma(valorDePesquisa);

    if(valorDePesquisa%2 == 0){

        printf("%i é par \n",valorDePesquisa);
        printf("A soma dos algarismos de %i é %i \n", valorDePesquisa , resultadoDaSoma);

    }else{
        printf("%i é ímpar \n",valorDePesquisa);
        printf("A soma dos algarismos de %i é %i \n", valorDePesquisa , resultadoDaSoma);
    }
    return 0;
}