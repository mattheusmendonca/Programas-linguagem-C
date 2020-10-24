#include <stdio.h>

/* funcao que implementa a ordenacao decrescente pelo bolha */
void OrdenaBolhaDecrescente(int ar[], int t){
    int i, ordenado, aux;
    
    ordenado = 0; //flag setada falsa
    while(!ordenado){ //repete enquanto array esta desordenado
        ordenado = 1; //supoe que esta ordenado
        for(i = 0; i < t-1; i++){
            if (ar[i] < ar[i+1]){ //fora de ordem?
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
    /** 
     * Para esse problema vamos ler uma fila original e fazer uma copia para 
     * outra fila. Apos a leitura ordenamos a segunda fila decrestemente. Depois 
     * percorremos as duas filas verificando quantos valores sao iguais.
     * */
    
    int filaOriginal[1000], filaOrdenada[1000];
    int t, n, i, iguais;
    
    scanf("%d", &t);
    while(t--){ //sao t testes
        scanf("%d", &n); //n alunos
        for(i = 0; i < n; i++){
            scanf("%d", &filaOriginal[i]); //le fila filaOriginal
            filaOrdenada[i] = filaOriginal[i]; //copia para fila ordenada
        }
        
        OrdenaBolhaDecrescente(filaOrdenada, n); //ordenando uma das filas
        //verificar quantas posicoes sao iguais
        iguais = 0;
        for(i = 0; i < n; i++){
            if (filaOriginal[i] == filaOrdenada[i])
                iguais++;
        }
        
        printf("%d\n", iguais);
    }

    return 0;
}