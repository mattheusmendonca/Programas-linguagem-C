#include <stdio.h>

int main (void) {

    double x, r, g;
    scanf("%lf", &x);

    if (x>=0 && x<=400){
        r = x + x * 0.15;
        g = r - x;
        printf("Novo salario: %.2lf\n", r);
        printf("Reajuste ganho: %.2lf\n", g);
        printf("Em percentual: 15 %%\n");
    }else if(x>400 && x<=800){
        r = x + x * 0.12;
        g = r - x;
        printf("Novo salario: %.2lf\n", r);
        printf("Reajuste ganho: %.2lf\n", g);
        printf("Em percentual: 12 %%\n");
    }else if(x>800 && x<=1200){
        r = x + x * 0.10;
        g = r - x;
        printf("Novo salario: %.2lf\n", r);
        printf("Reajuste ganho: %.2lf\n", g);
        printf("Em percentual: 10 %%\n");

    }else if(x>1200 && x<=2000){
        r = x + x * 0.07;
        g = r - x;
        printf("Novo salario: %.2lf\n", r);
        printf("Reajuste ganho: %.2lf\n", g);
        printf("Em percentual: 7 %%\n");
    }else if(x>2000){
        r = x + x * 0.04;
        g = r - x;
        printf("Novo salario: %.2lf\n", r);
        printf("Reajuste ganho: %.2lf\n", g);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}