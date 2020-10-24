#include <stdio.h>

#define MAX_ESTRELAS 1000000

int main(void){
    int carneiros[MAX_ESTRELAS];
    char atacada[MAX_ESTRELAS];
    int estrelaAtual, n, atacadas, proximaEstrela;
    unsigned long long naoRoubados;

    scanf("%d", &n);
    for(estrelaAtual = 0; estrelaAtual < n; estrelaAtual++){
        scanf("%d", &carneiros[estrelaAtual]);
        atacada[estrelaAtual] = 0;
    }

    estrelaAtual = 0;
    while (estrelaAtual >= 0 && estrelaAtual < n){
        atacada[estrelaAtual] = 1;

        if (carneiros[estrelaAtual] % 2 == 0)
            proximaEstrela = estrelaAtual - 1;
        else
            proximaEstrela = estrelaAtual + 1;

        if (carneiros[estrelaAtual] > 0)
            carneiros[estrelaAtual]--;

        estrelaAtual = proximaEstrela;
    }

    naoRoubados = atacadas = 0;
    for(estrelaAtual = 0; estrelaAtual < n; estrelaAtual++){
        if (atacada[estrelaAtual])
            atacadas++;
        naoRoubados += carneiros[estrelaAtual];
    }
    printf("%d %llu\n", atacadas, naoRoubados);

    return 0;
}
