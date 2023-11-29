#include <stdio.h>
#include <math.h>

int main() {
    
    int meses;
    double investimento;
    double juros;
    double retorno;

    scanf("%d",&meses);
    scanf("%lf",&investimento);
    scanf("%lf",&juros);

    for(int i = 1; i <= meses; i++){
        double x = pow((1+juros), i);
        retorno = investimento*(1+juros)*((x-1)/juros);
        printf("Montante ao fim do mes %d: R$ %.2f\n",i,retorno);

    }
    return 0;
}
//selo vctrdavidsom #2002
