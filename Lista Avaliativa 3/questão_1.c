#include <stdio.h>

int main() {
    int listaEmValorDecimal[30];
    int valorEmDecimal = 0;
    int contador = 0;
    char valorEmRomano[30];
    char caractere;
    int subvalor1 = 0;
    int subvalor2 = 0;
    int divisorBinario = 2;
    int divisorHexa = 16;
    int valorEmBinario[30];
    char valorEmHexadecimal[30];
    int o = 0;

    do {
        caractere = getchar();
        valorEmRomano[contador] = caractere;

        if (caractere == 'I') {
            listaEmValorDecimal[contador] = 1;
        } else if (caractere == 'V') {
            listaEmValorDecimal[contador] = 5;
        } else if (caractere == 'X') {
            listaEmValorDecimal[contador] = 10;
        } else if (caractere == 'L') {
            listaEmValorDecimal[contador] = 50;
        } else if (caractere == 'C') {
            listaEmValorDecimal[contador] = 100;
        } else if (caractere == 'D') {
            listaEmValorDecimal[contador] = 500;
        } else if (caractere == 'M') {
            listaEmValorDecimal[contador] = 1000;
        }

        contador++;
    } while (caractere != '\n');

    valorEmRomano[contador - 1] = '\0';

    for (int i = 0; i < (contador - 1); i++) { //para decimal
        if (i > 0 && listaEmValorDecimal[i] > listaEmValorDecimal[i - 1]) {
            valorEmDecimal += listaEmValorDecimal[i] - (2 * listaEmValorDecimal[i - 1]);
        } else {
            valorEmDecimal += listaEmValorDecimal[i];
        }
    }

    subvalor1 += valorEmDecimal;
    subvalor2 += valorEmDecimal;

    
    o = 0;
    while (subvalor1 >= divisorBinario) {//para binário
        valorEmBinario[o] = subvalor1 % divisorBinario;
        subvalor1 = subvalor1 / divisorBinario;
        o++;
    }
    valorEmBinario[o] = subvalor1;
    o++;
    printf("%s na base 2: ", valorEmRomano);
    for (int i = o - 1; i >= 0; i--) {
        printf("%d", valorEmBinario[i]);
    }
    printf("\n");

    o = 0;
    while (subvalor2 > 0) { // para hexa decimal
        int resto = subvalor2 % divisorHexa;
        if (resto < 10) {
            valorEmHexadecimal[o] = resto + '0';
        } else {
            valorEmHexadecimal[o] = resto - 10 + 'a'; // Usar 'a' para letras minúsculas
        }
        subvalor2 = subvalor2 / divisorHexa;
        o++;
    }
    printf("%s na base 10: %d\n", valorEmRomano, valorEmDecimal);
    printf("%s na base 16: ", valorEmRomano);
    for (int i = o - 1; i >= 0; i--) {
        printf("%c", valorEmHexadecimal[i]);
    }
    printf("\n");

    return 0;
}
