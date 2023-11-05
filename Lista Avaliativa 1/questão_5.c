// Questão 5
#include <stdio.h>

int main(void){

    int num1;
    int num2;

    printf("Digite o primeiro valor: \n");
    scanf("%i",&num1);
    printf("Digite o o segundo valor: \n");
    scanf("%i",&num2);

    if(num1 == num2){
        printf("Os valores lidos sao iguais \n");
    }else if (num1 > num2){
        printf("%d eh maior que %d \n",num1,num2);
        if((num2 == 0) || (num1%num2 != 0)){
            printf("%d nao eh multiplo de %d \n",num1,num2);
        }else if (num1%num2 == 0 ){
             printf("%d eh multiplo de %d \n",num1,num2);
        }
    }else if (num2 > num1){
        printf("%d eh maior que %d \n",num2,num1);
        if((num1 == 0) || (num2%num1 != 0)){
            printf("%d nao eh multiplo de %d \n",num2,num1);
        }else if (num2%num1 == 0 ){
             printf("%d eh multiplo de %d \n",num2,num1);
        }
    }
    return 0;
}