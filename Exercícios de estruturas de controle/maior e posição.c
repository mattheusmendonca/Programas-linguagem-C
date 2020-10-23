#include <stdio.h>

int main (void){
    int n, i, ma, pos;
    ma=0;
    
    for(i = 1; i<=100; i++){
        scanf("%d", &n);
        if(n>ma){
            ma = n;
            pos = i;
            
        }
        
        
    }

    printf("%d\n%d\n", ma, pos);
    return 0;
}
