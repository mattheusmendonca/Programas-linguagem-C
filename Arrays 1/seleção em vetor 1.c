#include <stdio.h>

int main (void){
    int A[100], i;
    
    for(i = 0; i < 100; i++){
        float x;
        scanf("%f", &x);
        if(x <=10){
        printf("A[%d] = %.1f\n", i, x);
        }
    }

    return 0;
}
