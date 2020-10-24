#include <stdio.h>

/**
 * Para esse problema vamos fazer a leitura a matriz para um array bidimensional. 
 * Depois processamos a matriz, linha a linha, para encontrar a posicao do 
 * primeiro elemento diferente de zero e guardamos. A seguir processamos esse 
 * array para verificar as condicoes informadas na descricao do problema.
 * */

int main(){
    int matriz[500][500]; //para a matriz
    int primeiroDiferenteZero[500]; //guarda a posicao do ultimo zero na linha
    int n, m, i, j;
    
    //ler dimensoes e elementos da matriz
    scanf("%d %d", &n, &m);
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    //processar ultimo zero em sequencia
    for(i = 0; i < n; i++){
        //testar uma linha

        j = 0; //vamos comecar na primeira coluna
        while(j < m && matriz[i][j] == 0){ //enquando a coluna tiver um zero
            j++; //testa a proxima
        }
        
        //quando chegar aqui estamos em uma coluna sem 0 ou nao achamos!
        primeiroDiferenteZero[i] = j; //posicao do primeiro diferente
        //a posicao pode ser M quando nao achou (tudo zero)
    }
    
    //agora vamos verificar as condicoes
    int primeiroLinhaAnterior = primeiroDiferenteZero[0]; //posicao na linha 0
    //a partir da linha 1, o primeiro != 0 tem que ser > ao anterior
    for(i = 1; i < n; i++){
        if (primeiroDiferenteZero[i] <= primeiroLinhaAnterior){ //errado?
            if (primeiroDiferenteZero[i] == m ){ //mas a linha soh tinha zeros?
                continue; //entao blz
            }else{
                //nao eh escada
                printf("N\n");
                return 0; //encerrar logo o programa
            }
        }
        primeiroLinhaAnterior = primeiroDiferenteZero[i]; //atualiza, sera linha anterior
    }
    
    //se chegou aqui eh escada
    printf("S\n");
    
    return 0;
}
