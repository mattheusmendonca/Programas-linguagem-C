#include <stdio.h>

int main (void) {

    int x;
    scanf ("%d", &x);
    while(x!=2002){
        printf("Senha Invalida\n");
        scanf ("%d", &x);
    } printf("Acesso Permitido\n");
    return 0;
}
