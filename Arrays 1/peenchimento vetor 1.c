#include <stdio.h>

int main (void){
    int N[10], i, contador;
    scanf ("%d", &N[0]);
    printf("N[0] = %d\n", N[0]);
    
    for(i=1; i<10; i=i+1){
        N[i]=N[i-1]*2;
        printf("N[%d] = %d\n", i, N[i]);
        
    }
    
    return 0;
}