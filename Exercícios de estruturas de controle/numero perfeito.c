#include <stdio.h>

int main (void){
    int i, n, x, ix, soma, resto;
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        scanf("%d", &x);
        soma = 0;
            for(ix=1; ix<x; ix++){


                if((x%ix)==0){
                    soma = soma + ix;
                }else{
                    soma = soma + 0;
                    }

                }
                if(soma == x){
                    printf("%d eh perfeito\n", x);
                }
                if(soma != x){
                    printf("%d nao eh perfeito\n", x);
                }

    }



    return 0;
}
