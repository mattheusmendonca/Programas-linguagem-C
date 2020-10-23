#include <stdio.h>

int main (void){
    int i;


    for(i=1/*inicio de uma contagem*/; i<=100; i++){ //como eu quero que ele exiba na tela de 1 a 100, começa por 1

    if(i % 2 == 0){
    printf("%d\n", i);
    }
}


return 0;
}
