#include <stdio.h>

int main() {
    int lista[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &lista[i]);
    }

    int contador = sizeof(lista)/sizeof(lista[0]);

    for (int i = 0; i < contador; i++) {
        for (int o = 0; o < (contador - i); o++) {
            printf("%d", lista[o]);
            if ((o + 1) < (contador - i)) {
                printf(" ");
            }
        }
        printf("\n");
        for (int o = 0; o < (contador - i); o++) {
            lista[o] = lista[o] + lista[(o+1)] ;
        }
    }

    return 0;
}