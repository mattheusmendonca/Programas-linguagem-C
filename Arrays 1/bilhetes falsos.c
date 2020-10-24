#include <stdio.h>

#define MAX_BILHETES 10000

int main(void){
    int contador[MAX_BILHETES];
    int n, m, i, bilhete, resposta;

    while(1){
        scanf("%d %d", &n, &m);
        if (n == 0 && m == 0)
            break;

        resposta = 0;
        for(i = 0; i < n; i++){ //zerar o contador
            contador[i] = 0;
        }

        for(i = 0; i < m; i++){ //preencher o contador
            scanf("%d", &bilhete);
            if (contador[bilhete-1]++ == 1)
                resposta++;
        }

        printf("%d\n", resposta);
    }

    return 0;
}
