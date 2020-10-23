#include <stdio.h>

int main (void){
    int m, n, i, nm, nmen, soma;
    
    
    n = 1;
    m = 1;
    while(n > 0 && m > 0)
    {
        scanf ("%d %d", &m, &n);
        if (n > 0 && m > 0){
            soma = 0;
            if(n>m){
                nm = n;
                nmen = m;
            }else{
                nm = m;
                nmen = n;
            }
            
            soma = 0;
            for(i=nmen; i<=nm; i++){
                soma = soma + i;

                printf("%d ", i);
            }
            
            printf("Sum=%d\n", soma);
        }
    }

return 0;
}