#include <stdio.h>


int Ricardo(int x, int y){
    int r;
    r = ((3*x)*(3*x)) + (y * y);
    return r;
}
int Beto(int x, int y){
    int b;
    b = (2) * (x*x) + (5*y)*(5*y);
    return b;
}
int Carlos(int x, int y){
    int c;
    c = ((-100) * (x)) + (y * y * y);
    return c;
}

int main (void){
    int n, i, x, y, resultado;
    int r, b, c;

    scanf("%d", &n);

    for(i=1; i<=n; i++){


        scanf("%d%d", &x, &y);
        r = Ricardo(x, y);
        b = Beto(x, y);
        c = Carlos(x, y);

         if(r>b && r>c){
            printf("Rafael ganhou\n");
         }
         if(b>r && b>c){
            printf("Beto ganhou\n");
         }
         if(c>r && c>b){
            printf("Carlos ganhou\n");
         }
    }
return 0;