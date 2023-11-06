#include <stdio.h>
#include <string.h>

typedef struct {
    char nomeJogador[30];
    char posicaoJogador;
    int forcaJogador;
} time;

int main() {
    time time1[11][3];
    time time2[11][3];
    char nomeDoTime1[30];
    char nomeDoTime2[30];
    char caractere1;
    int contador1 = 0;
    char caractere2;
    int contador2 = 0;
    
    // bloco de código para o time 1
    do {
        caractere1 = getchar();
        nomeDoTime1[contador1] = caractere1;
        contador1++;
    } while (caractere1 != '\n');
    nomeDoTime1[contador1 - 1] = '\0';
    
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 3; j++) {
            char entrada[100];
            scanf(" %[^\n]", entrada);
            sscanf(entrada, "%29[^;];%c;%d", time1[i][j].nomeJogador, &time1[i][j].posicaoJogador, &time1[i][j].forcaJogador);
            break;
        }
    }
    getchar();
    do {
        caractere2 = getchar();
        nomeDoTime2[contador2] = caractere2;
        contador2++;
    } while (caractere2 != '\n');
    nomeDoTime2[contador2 - 1] = '\0';

    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 3; j++) {
            char entrada[100];
            scanf(" %[^\n]", entrada);
            sscanf(entrada, "%29[^;];%c;%d", time2[i][j].nomeJogador, &time2[i][j].posicaoJogador, &time2[i][j].forcaJogador);
            break;
        }
    }
    
    float forcaTime1 = (((8*time1[0][0].forcaJogador)+(10*(time1[1][0].forcaJogador+time1[4][0].forcaJogador))+(5*(time1[2][0].forcaJogador+time1[3][0].forcaJogador))+(8*(time1[5][0].forcaJogador+time1[6][0].forcaJogador))+(11*(time1[7][0].forcaJogador+time1[8][0].forcaJogador))+(12*(time1[9][0].forcaJogador+time1[10][0].forcaJogador)))/(100.0));
    float forcaTime2 = (((8*time2[0][0].forcaJogador)+(10*(time2[1][0].forcaJogador+time2[4][0].forcaJogador))+(5*(time2[2][0].forcaJogador+time2[3][0].forcaJogador))+(8*(time2[5][0].forcaJogador+time2[6][0].forcaJogador))+(11*(time2[7][0].forcaJogador+time2[8][0].forcaJogador))+(12*(time2[9][0].forcaJogador+time2[10][0].forcaJogador)))/(100.0));
    
    printf("%s: %0.2f de forca\n",nomeDoTime1,forcaTime1);
    printf("%s: %0.2f de forca\n",nomeDoTime2,forcaTime2);

    if(forcaTime1>forcaTime2){
        printf("%s eh mais forte\n",nomeDoTime1);
    }else{
        printf("%s eh mais forte\n",nomeDoTime2);
    }

    return 0;
}
