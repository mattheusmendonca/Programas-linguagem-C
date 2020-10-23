#include <stdio.h>

int main (void){
    int i, t, n, x, rz;
    float resto;
    scanf("%d", &n);

    if(n>=1 && n<=100){
            
    for(i=1; i<=n; i++){
        scanf("%d", &x);
        rz = 0;
        if(x>1 && x<10E7){

        
        for(t=1; t<=x; t++){
            resto = x % t;

            if(resto == 0){
                rz++;
            }

            }
            if(rz == 2){
                printf("%d eh primo\n", x);
            }
            else{
                printf("%d nao eh primo\n", x);
            }

        }
    }
    }

return 0;
}