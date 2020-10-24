#include <stdio.h>

/* funcao que implementa a ordenacao pelo bolha */
void OrdenaBolha(int ar[], int t){
    int i, ordenado, aux;
    
    ordenado = 0; //flag setada falsa
    while(!ordenado){ //repete enquanto array esta desordenado
        ordenado = 1; //supoe que esta ordenado
        for(i = 0; i < t-1; i++){
            if (ar[i] > ar[i+1]){ //fora de ordem?
                //ajeitar a ordem
                aux = ar[i];
                ar[i] = ar[i+1];
                ar[i+1] = aux;
                ordenado = 0; //nao esta ordenado!
            }
        }
    }
    
}

int main(){
    int virus[1000], n, i, letalidade, j;
    
    while (scanf("%d", &n) != EOF){ //ler ate EOF 
        for(i = 0; i < n; i++)
            scanf("%d", &virus[i]); //leitura da entrada dos virus
            
        /**
         * O problema nao especifica como os valores sao agrupados, entao eles
         * podem ser agrupados de qualquer forma. Como a reposta eh o valor
         * MAXIMO temos que agrupar da forma que gere esse valor maximo. Para
         * isso podemos apenas ordenar o array e agrupar o maior valor com o
         * menor, depois o segundo maior com segundo menor, etc.
         * */
        
        OrdenaBolha(virus, n);
        letalidade = 0;
        
        /**
         * Esse for inicia o i no indice 0 e o j no ultimo indice valido. O i
         * sera incrementado e o j decrementado enquando i < j, ou seja, 
         * enquanto nao chega ao meio do array. Pode sobrar um elemento no meio
         * (i == j), como foi dito na descricao do problema.
         * */
        for(i = 0, j = n-1; i < j; i++, j--){
            letalidade += virus[j] - virus[i];
        }
        
        printf("%d\n", letalidade);
        
    }
    return 0;
}
