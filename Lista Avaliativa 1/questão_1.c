// QuestÃ£o 1
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int anoDePesquisa;
    printf("digite o ano para pesquisa: \n");
    scanf("%i",&anoDePesquisa);
    if(anoDePesquisa >= 1800 && anoDePesquisa <= 2022 ){
        if(anoDePesquisa >= 1896 && anoDePesquisa%4 == 0){
            printf("Os Jogos Olímpicos de Verão ocorreram no ano de %i \n", anoDePesquisa);
        }else if(anoDePesquisa >= 1930 && anoDePesquisa%4 == 2){
            printf("A Copa do Mundo de Futebol ocorreu no ano de %i \n", anoDePesquisa);
        }else{
            printf("Não houve Jogos Olímpicos de Verão ou Copa do Mundo no ano de %i \n", anoDePesquisa);
        }
    }else{
        printf("o ano %i não está disponivel para pesquisa \n",anoDePesquisa);
    }
    return 0;
}