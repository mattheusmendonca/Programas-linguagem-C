#include <stdio.h>

int main (void){
    int h1=1, m1=1, h2=1, m2=1, min1, min2, r;



    while(h1!=0 || m1!=0 || h2!=0 || m2!=0){

        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);


        if(h1!=0 || m1!=0 || h2!=0 || m2!=0){
                if(h1>h2 || h1 == h2 && m1>m2){
                     h2 = h2 + 24;
                 }
                min1 = h1 * 60;
                min2 = h2 * 60;

            r = (min2 - min1)+(m2 - m1);


            if(r<0){
                r*=(-1);
            }
            printf("%d\n", r);
        }
        }
return 0;
}