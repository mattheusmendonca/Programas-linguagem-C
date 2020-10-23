#include <stdio.h>

int main (void) {

    int x;
    int cima, baixo;


    x = 1;
    cima = 0;
    baixo = 0;
    while(x>0){
        scanf ("%d", &x);
        if(x>0){
            cima = cima + x;
            baixo = baixo + 1;
            }
    }printf("%.2f\n", cima*1.0/baixo);

    return 0;
}
