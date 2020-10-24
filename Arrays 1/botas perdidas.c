#include <stdio.h>

#define MAX_TAMANHO 61

int main(void){
    int qDireito[MAX_TAMANHO],  qEsquerdo[MAX_TAMANHO];
    int n, m, i, resposta;
    char l;

    while(scanf("%d", &n) != EOF){
        for(i = 30; i <= 60; i++){ //zerar contador
            qDireito[i] = qEsquerdo[i] = 0;
        }

        while(n--){
            scanf("%d %c", &m, &l);
            if (l == 'D')
                qDireito[m]++;
            else
                qEsquerdo[m]++;
        }

        resposta = 0;
        for(i = 30; i <= 60; i++){//verificar pares
            resposta += qDireito[i] < qEsquerdo[i] ? qDireito[i] : qEsquerdo[i];
        }
        printf("%d\n", resposta);
    }

    return 0;
}