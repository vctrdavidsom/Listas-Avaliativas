#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    char *listaDeDias[7] = {"SEGUNDA-FEIRA", "TERCA-FEIRA", "QUARTA-FEIRA", "QUINTA-FEIRA", "SEXTA-FEIRA", "SABADO", "DOMINGO"};
    char placa[30];
    char dia[30];
    char dia2[30];
    char caractere;
    char caractere2;
    int contador = 0;
    int contador2 = 0;
    bool verificarPlaca = false;
    bool verificarDia = false;


    do {
        caractere = getchar();
        if (caractere != '\n') {
            placa[contador] = caractere;
            contador++;
        }
    } while (caractere != '\n');
    placa[contador] = '\0';
    int comprimento = strlen(placa);

    do {
        caractere2 = getchar();
        if (caractere2 != '\n') {
            dia[contador2] = caractere2;
            contador2++;
        }
    } while (caractere2 != '\n');
    dia[contador2] = '\0';

    for (int o = 0; dia[o] != '\0'; o++) {
        dia2[o] = tolower(dia[o]);
    }
    dia2[contador2] = '\0';
    
    if(((comprimento == 8)&&(placa[3] == '-'))){
        verificarPlaca = true;
    }else{
        if(((comprimento == 7)&& ((placa[3] == '1') || (placa[3] == '2') || (placa[3] == '3') || (placa[3] == '4') || (placa[3] == '5') || (placa[3] == '6') || (placa[3] == '7') || (placa[3] == '8') || (placa[3] == '9') || (placa[3] == '0')))){
            verificarPlaca = true;
            for(int i = 0; i < comprimento; i++){
            if(placa[i] == '-'){
                verificarPlaca = false;
                break;
            }
        }
        }
    }

    for(int i = 0; i < 7; i++){
        if(strcmp(dia,listaDeDias[i]) == 0){
            verificarDia = true;
            break;
        }
    }

    
    if(verificarPlaca && verificarDia){
        if((comprimento == 8)&&(placa[3] == '-')){
        if((strcmp(dia,"SABADO") == 0)||(strcmp(dia,"DOMINGO") == 0)){
            printf("Nao ha proibicao no fim de semana\n");
        }else{
            if((placa[7] == '0') || (placa[7] == '1')){
                if((strcmp(dia,"SEGUNDA-FEIRA") == 0)){
                    printf("%s nao pode circular %s\n", placa,dia2);
                }else{
                    printf("%s pode circular %s\n", placa, dia2);
                }
            } else if((placa[7] == '2') || (placa[7] == '3')){
                if((strcmp(dia,"TERCA-FEIRA") == 0)){
                    printf("%s nao pode circular %s\n", placa, dia2);
                }else{
                    printf("%s pode circular %s\n", placa, dia2);
                }
            }else if((placa[7] == '4') || (placa[7] == '5')){
                if((strcmp(dia,"QUARTA-FEIRA") == 0)){
                    printf("%s nao pode circular %s\n", placa, dia2);
                }else{
                    printf("%s pode circular %s\n", placa, dia2);
                }
            }else if((placa[7] == '6') || (placa[7] == '7')){
                if((strcmp(dia,"QUINTA-FEIRA") == 0)){
                    printf("%s nao pode circular %s\n", placa, dia2);
                }else{
                    printf("%s pode circular %s\n", placa, dia2);
                }
            }
            else if((placa[7] == '8') || (placa[7] == '9')){
                if((strcmp(dia,"SEXTA-FEIRA") == 0)){
                    printf("%s nao pode circular %s\n", placa, dia2);
                }else{
                    printf("%s pode circular %s\n", placa, dia2);
                }
            }
        }
    }else if((comprimento == 7)&& ((placa[3] == '1') || (placa[3] == '2') || (placa[3] == '3') || (placa[3] == '4') || (placa[3] == '5') || (placa[3] == '6') || (placa[3] == '7') || (placa[3] == '8') || (placa[3] == '9') || (placa[3] == '0'))){
        if((strcmp(dia,"SABADO") == 0)||(strcmp(dia,"DOMINGO") == 0)){
            printf("Nao ha proibicao no fim de semana\n");
        }else{
            if((placa[6] == '0') || (placa[6] == '1')){
                if((strcmp(dia,"SEGUNDA-FEIRA") == 0)){
                    printf("%s nao pode circular %s\n", placa,dia2);
                }else{
                    printf("%s pode circular %s\n", placa, dia2);
                }
            } else if((placa[6] == '2') || (placa[6] == '3')){
                if((strcmp(dia,"TERCA-FEIRA") == 0)){
                    printf("%s nao pode circular %s\n", placa, dia2);
                }else{
                    printf("%s pode circular %s\n", placa, dia2);
                }
            }else if((placa[6] == '4') || (placa[6] == '5')){
                if((strcmp(dia,"QUARTA-FEIRA") == 0)){
                    printf("%s nao pode circular %s\n", placa, dia2);
                }else{
                    printf("%s pode circular %s\n", placa, dia2);
                }
            }else if((placa[6] == '6') || (placa[6] == '7')){
                if((strcmp(dia,"QUINTA-FEIRA") == 0)){
                    printf("%s nao pode circular %s\n", placa, dia2);
                }else{
                    printf("%s pode circular %s\n", placa, dia2);
                }
            }
            else if((placa[6] == '8') || (placa[6] == '9')){
                if((strcmp(dia,"SEXTA-FEIRA") == 0)){
                    printf("%s nao pode circular %s\n", placa, dia2);
                }else{
                    printf("%s pode circular %s\n", placa, dia2);
                }
            }
        }
        
    }
    }else{
        if(verificarPlaca == false){
            printf("Placa invalida\n");
        }
        if(verificarDia == false){
            printf("Dia da semana invalido\n");
        }
    }


    return 0;
}
