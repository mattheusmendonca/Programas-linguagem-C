#include <stdio.h>

int main (void){
    int x, i, n;
    scanf("%d", &n);



    for(i=0/*inicio de uma contagem*/; i!=n; i++){ //como eu quero que ele exiba na tela de 1 a 100, começa por 1
    scanf("%d", &x);

    if(x == 0){
    printf("NULL\n", n);
    }
    if(x%2 == 0 && x<0){
    printf("EVEN NEGATIVE\n");
    }if(x%2 == 0 && x>0){
    printf ("EVEN POSITIVE\n");
    }

    if(x%2 != 0 && x<0){
    printf("ODD NEGATIVE\n");
    }if(x%2 != 0 && x>0){
    printf ("ODD POSITIVE\n");
    }



    }

return 0;
}
