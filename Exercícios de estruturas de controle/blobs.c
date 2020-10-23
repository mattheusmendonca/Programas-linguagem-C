#include <stdio.h>
 
int main(void) {
    int n, i, dias;
    float c, res, div;


        scanf("%d", &n);

            for(i=1; i<=n; i++){

                scanf("%f", &c);
                div=0.5;
                dias=0;
                    while(c>1){
                        c = c*div;
                        dias++;
                    }

                printf("%d dias\n", dias);
                
            }

    return 0;
}