#include <stdio.h>



int MinimoValorArray(int X[], int t){


    int i;
    int menor = X[0];
    for(i = 1; i < t; i++){

        if (X[i] < menor){
            menor = X[i];

        }

    }
return menor;

}

int MinimoValorArray2(int X[], int t){
    int menor = X[0], i, aux;

    for(i = 1; i < t; i++){
        if (X[i] < menor){
            menor = X[i];
            aux = i;
        }
    }

    return aux;
}


int main (void){
    int N, tamArray, i, mValor, valor;
    scanf ("%d", &N);
    tamArray = N;
    int X[tamArray];

    for(i=0; i<tamArray; i++){
        scanf("%d", &X[i]);


    }

        mValor = MinimoValorArray(X, tamArray);
        printf("Menor valor: %d\n", mValor);
        printf("Posicao: %d\n", MinimoValorArray2(X, tamArray));




    return 0;
}