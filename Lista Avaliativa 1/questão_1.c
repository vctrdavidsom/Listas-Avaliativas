// QuestÃ£o 1
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int x;
    printf("digite o ano para pesquisa: \n");
    scanf("%i",&x);
    if(x >= 1800 && x <= 2022 ){
        if(x >= 1896 && x%4 == 0){
            printf("Os Jogos Olímpicos de Verão ocorreram no ano de %i \n", x);
        }else if(x >= 1930 && x%4 == 2){
            printf("A Copa do Mundo de Futebol ocorreu no ano de %i \n", x);
        }else{
            printf("Não houve Jogos Olímpicos de Verão ou Copa do Mundo no ano de %i \n", x);
        }
    }else{
        printf("o ano %i não está disponivel para pesquisa \n",x);
    }
    return 0;
}