#include <stdio.h>
#include <string.h>
int main() {
    int matriz1 [4][4];
    int matriz2 [4][4];
    int i;
    int j;
    int k;
    int matrizCalculada [4][4];
    char operacao[30];


    for (i = 0; i < 4; i++) { //armazena na matriz1
        for(j = 0; j < 4; j++){
            scanf("%d", &matriz1[i][j]);
        }
    }
    for (i = 0; i < 4; i++) { //armazena na matriz2
        for(j = 0; j < 4; j++){
            scanf("%d", &matriz2[i][j]);
        }
    }
    scanf("%s",operacao);// armazena a operação

    if (strcmp(operacao, "soma") == 0){
         for (i = 0; i < 4; i++) {
            for(j = 0; j < 4; j++){
                matrizCalculada[i][j] = matriz1[i][j] + matriz2[i][j];
            }
        }
    }
    if (strcmp(operacao, "sub") == 0){
         for (i = 0; i < 4; i++) {
            for(j = 0; j < 4; j++){
                matrizCalculada[i][j] = matriz1[i][j] - matriz2[i][j];
            }
        }
    }
    
    if (strcmp(operacao, "mult") == 0) {
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 4; j++) {
                matrizCalculada[i][j] = 0;
                for (k = 0; k < 4; k++) {
                    matrizCalculada[i][j] += matriz1[i][k] * matriz2[k][j];
                }
            }
        }
    }

    for (i = 0; i < 4; i++) {
            for(j = 0; j < 4; j++){
                if(matrizCalculada[i][j] < 0){
                    printf("  %d", matrizCalculada[i][j]);
                }else if(matrizCalculada[i][j] < 10){
                    printf("   %d", matrizCalculada[i][j]);
                }else if (matrizCalculada[i][j] < 100){
                    printf("  %d", matrizCalculada[i][j]);
                }else if (matrizCalculada[i][j] < 1000){
                    printf(" %d", matrizCalculada[i][j]);
                }
                
            }
            printf("\n");
    }
    return 0;
}