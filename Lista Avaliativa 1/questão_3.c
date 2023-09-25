// Questão 3
#include <stdio.h>
#include <string.h>

int main(void){
    int senhaCadastro;
    int confirmacaoDaSenha;
    int validacao;
    int confirmacao = 0;
    while (confirmacao == 0){
        printf("Digite sua senha de 4 digitos para cadastro \n");
        scanf("%i",&senhaCadastro);
        printf("Digite novamente a senha: \n");
        scanf("%i",&confirmacaoDaSenha);

        if(senhaCadastro == confirmacaoDaSenha){
            printf("Senha cadastrada: %d \n", senhaCadastro);
            break;
        }else{
            printf("as senhas nao conferem, tente novamente \n");
        }
    }
    while(confirmacao == 0){
        printf("digite sua senha \n");
        scanf("%i",&validacao);
        if(validacao == senhaCadastro){
            printf("senha valida! \n");
            break;
        }else{
            printf("senha invalida! \n");
        }

    }
    return 0;
}