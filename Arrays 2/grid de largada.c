#include <stdio.h>

int main(){
    int ordemLargada[24], ordemChegada[24];
    int n, i, j, ultrapassagens;
    
    while (scanf("%d", &n) != EOF){ //leitura do numero de competidores ate EOF
        //leitura da ordem de largada
        for(i = 0; i < n; i++)
            scanf("%d", &ordemLargada[i]);
        //leitura da ordem de chegada
        for(i = 0; i < n; i++)
            scanf("%d", &ordemChegada[i]);
            
        /** Para saber o numero minimo de ultrapassagens podemos aplicar uma 
         * logica parecida com a ordenacao da bolha, pois na vida real as 
         * ultrapassagens ocorrem exatamente como se comportam os valores sendo
         * ordenados no algoritmo, ou seja, pulando um a um.
         * 
         * Partindo desse principio, podemos verificar posicao a posicao se a
         * ordem de chegada esta diferente da de largada. Quando diferente, 
         * procuramos em qual posicao estava o numero da ordem de largada e 
         * fazemos as trocas, contando, ate ele se posicionar na posicao de 
         * chegada. 
         * */
         
         ultrapassagens = 0;
         for(i = 0; i < n; i++){
             if (ordemChegada[i] == ordemLargada[i]){ //chegou na mesma ordem
                 continue; //faz nada
             }
             
             //se chegou aqui houveram ultrapassagens
             int procurado = ordemChegada[i]; //competidor a procurar
             //repetir enquanto o procurado nao estiver na posicao de chegada
             //usando o mesmo array de largada para ultrapassagens
             while(ordemLargada[i] != procurado){
             //procurar a partir da proxima posicao
                 for(j = i + 1; j < n; j++){
                     if (ordemLargada[j] == procurado){ //achamos?
                        //ao achar faz ele fazer uma Ãºnica ultrapassagem
                        int aux = ordemLargada[j-1];
                        ordemLargada[j-1] = ordemLargada[j]; //procurado passa
                        ordemLargada[j] = aux;
                        ultrapassagens++; //mais uma ultrapassagem
                        break; //encerrar o for que o while repete ou nao
                        //apenas o procurado sairah ultrapassando
                     }
                     
                 }
             }
             
             
         }
         printf("%d\n", ultrapassagens);
        
    }
    return 0;
}
