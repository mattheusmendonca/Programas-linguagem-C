#include <stdio.h>

#define MAX_CONJUNTOS 10000
#define MAX_ELEMENTOS 60

int main(){
    char elemento[MAX_CONJUNTOS][MAX_ELEMENTOS]; //elemento maximo eh 60 (byte)
    char tamanhoConjunto[MAX_CONJUNTOS]; //tamanho dos conjuntos (max eh 60)
    int t, n, q, op, x, y;
    int i, j;
    
    scanf("%d", &t); //t instancias
    while(t--){ 
        scanf("%d", &n);
        
        //ler os n conjuntos
        for(i = 0; i < n; i++){
            //primeiro valor da linha eh o tamanho do conjunto
            scanf("%d", &tamanhoConjunto[i]);
            
            //ler os elementos do conjunto
            for (j = 0; j < tamanhoConjunto[i]; j++){
                scanf("%d", &elemento[i][j]);    
            }
        }
        
        scanf("%d", &q); //q operacoes
        while(q--){
            scanf("%d %d %d", &op, &x, &y);
            x--; //comecamos do 0
            y--; //comecamos do 0
            
            if (op == 1){
                /** Interseccao: Estrategia parecida com botas perdidas. Ou 
                 * seja, contar quantas vezes cada elemento aparece nos dois 
                 * conjuntos e depois ver quais nÃ£o sÃ£o zerados nos dois.
                 * */

                //esses arrays contam quantas vezes cada valor em cada conjunto
                int contaElementoEmX[MAX_ELEMENTOS] = {0};
                int contaElementoEmY[MAX_ELEMENTOS] = {0};
                
                int valor;
                //percorre conjunto x contando elementos
                for(i = 0; i < tamanhoConjunto[x]; i++){
                    //qual o elemento na posicao [i] do conjunto [x]?
                    valor = elemento[x][i] - 1; //comecamos em 0
                    contaElementoEmX[valor]++; //incrementa contador do elemento
                }
                //percorre conjunto y contando elementos
                for(i = 0; i < tamanhoConjunto[y]; i++){
                    //qual o elemento na posicao [i] do conjunto [y]?
                    valor = elemento[y][i] - 1; //comecamos em 0
                    contaElementoEmY[valor]++; //incrementa contador do elemento
                }
                
                //procurar resposta
                int contaDistintos = 0;
                for(i = 0; i < MAX_ELEMENTOS; i++){
                    if (contaElementoEmX[i] > 0 && contaElementoEmY[i] > 0){
                        //se o elemento aparecem em X e Y
                        contaDistintos++;
                    }
                }
                printf("%d\n", contaDistintos);
            }else{
                /** Uniao: Estrategia parecida com bilhetes falsos. Ou seja, 
                 * contar quantas vezes cada elemento aparece ao percorrer os
                 * dois conjuntos. Depois processar os maiores que zero.
                 * */
                 
                int contaElemento[MAX_ELEMENTOS] = {0}; //contador dos valores
                int valor; //um valor no conjunto (para legibilidade)
                 
                //percorre x
                for(i = 0; i < tamanhoConjunto[x]; i++){
                    //qual o elemento na posicao [i] do conjunto [x]?
                    valor = elemento[x][i] - 1;
                    contaElemento[valor]++; //incrementa contador do elemento
                }
                //percorre y
                for(i = 0; i < tamanhoConjunto[y]; i++){
                    //qual o elemento na posicao [i] do conjunto [y]?
                    valor = elemento[y][i] - 1;
                    contaElemento[valor]++; //incrementa contador do elemento
                }
                
                //quantos elementos contaram > 0?
                //procurar resposta
                int contaDistintos = 0;
                for(i = 0; i < MAX_ELEMENTOS; i++){
                    if (contaElemento[i] > 0){
                        //se o elemento aparecem em X ou Y
                        contaDistintos++;
                    }
                }
                printf("%d\n", contaDistintos);
            }
        }
    }
    
    return 0;
}
