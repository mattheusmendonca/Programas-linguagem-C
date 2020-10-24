#include <stdio.h>

#define MAX_NUMEROS 2000

int main(void){
    int contador[MAX_NUMEROS] = {0};
    int q, n, i;

    scanf("%d", &q);
    while(q--){
        scanf("%d", &n);
        contador[n-1]++;
    }

    for(i = 0; i < MAX_NUMEROS; i++){
        if (contador[i] != 0){
            printf("%d aparece %d vez(es)\n", i+1, contador[i]);
        }
    }

    return 0;
}
