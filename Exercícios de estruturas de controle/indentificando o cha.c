#include <stdio.h>

int main (void){
    int t, p, i, contador;//ajeitar
    scanf("%d", &t);

    contador = 0;
    for(i=1; i<=5; i++){
        scanf("%d", &p);
        if(p==t){
            contador = contador + 1;
        }

}
printf("%d\n", contador);


return 0;
}
