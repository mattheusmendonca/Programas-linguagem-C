#include <stdio.h>

int main (){
    int h, p; 
    double nm;
    scanf("%d%d", &h, &p);
    nm = (double) h / p;// se eu deixar o h e o p em inteiros, nao vai executar a divisão. tenho que fzr uma gambiarra pra transformar pra oq quero!
    printf("%.2lf\n", nm);

    return 0;
}