#include <stdio.h>

int main (void){
    int x, i, n, cont1, cont2;
    scanf("%d", &n);

    cont1= 0;
    cont2= 0;

    for(i=1/*inicio de uma contagem*/; i<=n; i++){ //como eu quero que ele exiba na tela de 1 a 100, começa por 1
    scanf("%d", &x);


    if(x>=10 && x<=20){
    cont1 = cont1 + 1;
    }
    else{
    cont2 = cont2 + 1;
    }
    }
    printf("%d in\n", cont1);
    printf("%d out\n", cont2);

return 0;
}
