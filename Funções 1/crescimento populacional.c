#include <stdio.h>

int main (void){
    int t, i, pa, pb, anos;
    double cb, ca;
    
    anos = 0;
    scanf("%d", &t);
    
    for(i = 0; i<t; i++){
        scanf("%d%d%lf%lf", &pa, &pb, &ca, &cb);
            while(pa<=pb){
            pa = ((ca/100)*pa)+pa;
            pb = ((cb/100)*pb)+pb;
            anos = anos + 1;
            
            if(anos>100){
                printf("Mais de 1 seculo.\n");
                pa = pb + 1;
                
            }
            }
        
        if (anos<= 100){
        printf("%d anos.\n", anos);
    }
    
    anos = 0;
    }
    
    
    return 0;
}
