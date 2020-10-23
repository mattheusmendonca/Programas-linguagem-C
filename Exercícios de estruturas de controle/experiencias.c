#include <stdio.h>

int main (void){
    int n, i, numero, coma=0, soma=0, roma=0, total;
    char tipo;

    scanf("%d", &n);

    for (i=1; i<=n; i++){
        scanf("%d %c", &numero, &tipo);

            if(tipo=='C'){
                coma=coma+numero;
            }
            if(tipo=='R'){
                roma=roma+numero;
            }
            if(tipo=='S'){
                soma=soma+numero;
            }
    }
    total = coma + roma + soma;
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coma);
    printf("Total de ratos: %d\n", roma);
    printf("Total de sapos: %d\n", soma);
    printf("Percentual de coelhos: %.2lf %%\n", ((double)coma/total)*100);
    printf("Percentual de ratos: %.2lf %%\n", ((double)roma/total)*100);
    printf("Percentual de sapos: %.2lf %%\n", ((double)soma/total)*100);



    return 0;
}
