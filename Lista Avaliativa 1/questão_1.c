// Questão 1
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int anoDePesquisa;
    printf("digite o ano para pesquisa: \n");
    scanf("%i",&anoDePesquisa);
    if(anoDePesquisa >= 1800 && anoDePesquisa <= 2022 ){
        if(anoDePesquisa >= 1896 && anoDePesquisa%4 == 0){
            printf("Os Jogos Ol�mpicos de Ver�o ocorreram no ano de %i \n", anoDePesquisa);
        }else if(anoDePesquisa >= 1930 && anoDePesquisa%4 == 2){
            printf("A Copa do Mundo de Futebol ocorreu no ano de %i \n", anoDePesquisa);
        }else{
            printf("N�o houve Jogos Ol�mpicos de Ver�o ou Copa do Mundo no ano de %i \n", anoDePesquisa);
        }
    }else{
        printf("o ano %i n�o est� disponivel para pesquisa \n",anoDePesquisa);
    }
    return 0;
}