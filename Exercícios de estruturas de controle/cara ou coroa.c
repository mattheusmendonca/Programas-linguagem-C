#include <stdio.h>

int main (void){
    int n, i, x, contm, contj;

    contm = 0;
    contj = 0;
    do{
    scanf("%d", &n);
    contm = 0;
    contj = 0;
    if(n>=1 && n<=10000){

    for(i=1; i<=n; i++){
        scanf("%d", &x);

        if(x == 0){
            contm++;
        }
        if(x == 1){
            contj++;
        }

        }
        printf("Mary won %d times and John won %d times\n", contm, contj);
    }
    }
    while(n!=0);

return 0;
}