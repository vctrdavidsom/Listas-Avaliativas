// Questão 3
#include <stdio.h>

int main(void){

    double valorSalario;
    char nivel;
    double salarioTotal;

    printf("Digite o Nivel do funcionario \n");
    scanf("%c",&nivel);
    printf("digite o salario do funcionario \n");
    scanf("%lf",&valorSalario);

    if(nivel == 'a'){
        salarioTotal = valorSalario + (valorSalario*0.05);
        printf("R$ %.2lf \n",salarioTotal);
    }else if(nivel == 'b'){
        salarioTotal = valorSalario + (valorSalario*0.07);
        printf("R$ %.2lf \n",salarioTotal);
    }else if(nivel == 'c'){
        salarioTotal = valorSalario + (valorSalario*0.08);
        printf("R$ %.2lf \n",salarioTotal);
    }

    return 0;
}