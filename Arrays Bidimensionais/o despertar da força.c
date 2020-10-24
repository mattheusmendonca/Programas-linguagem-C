//**********************************//
    //Matheus de Mendonça Barbosa//
  //teus2002ppbarbosa@outlook.com//
            //20200001364//
//**********************************//

#include <stdio.h>

int main(void){
    int i, j; //essas variáveis vão servir para fazer os for aninhados, como foi usado no video exemplo
    int L, C;//essas daqui para armazenar as linhas e as colunas da matriz
    int contador = 0; //vai contar quantos 42 vão ser sercados por 7 para ser o sabre 
    
    scanf("%d%d", &L, &C);//aqui vai ler quantas linhas e quantas colunas o usuário quer que tenha a matriz;
    int matrizSabre[L][C];//aqui vai armazenar as linhas e as colunas no array matrizSabre;
    int semsabre=0; 

    for(j = 0; j < L; j++){ //giro pra cada linha 
        for(i = 0; i < C; i++){ //giro pra cada coluna 
            scanf("%d", &matrizSabre[j][i]); 
            //aqui vai ler os elementos de cada linha e cada coluna da matriz, e armazena-los
        }
    }
    //até aqui é parecido com o codigo anterior, a diferença é que ele ja deu quantos elemetos tinha os arrays bidimensionais

    //antes de pensar em como resolver o problema, desenvolvi um exemplo de algorítimo com o exemplo de 42 no meio sendo o centro, 
    //e com os 7 arredores, colocando como parametro is valores 0 para linha e 0 para colunas.
    // ou seja, matrizSabre[j][i]
    //coloquei as respectivas casas dos lados como conforme a lógica pedia, na linha da [j][i]= 42
    //os valores após e anteriores a eles seriam: anterior[j][i-1]
    //proximo[j][i+1]
    //e assim seguindo toda a logica, se todas essas casas forem igual a 7, o sabre vai estar presente na matriz e printar onde se localiza o sabre

    for(j = 0; j < L; j++){ //vai fazer o mesmo processo do for aninhado tanto pra linha como pra coluna
      for(i = 0; i < C; i++){ //nesse primeiro if vai definir que o "centro" vai ser o 42 se ele existir
        if(matrizSabre[j][i]==42){//no segundo if vai ver se todos os arredores de 42 vão ser iguais a 7
          if(matrizSabre[j-1][i-1]==7 && matrizSabre[j-1][i]==7 && matrizSabre[j-1][i+1]==7 && matrizSabre[j][i-1]==7 && matrizSabre[j][i+1]==7 && matrizSabre[j+1][i-1]==7 && matrizSabre[j+1][i]==7 && matrizSabre[j+1][i+1]==7){
            printf("%d %d\n", j+1 , i+1);//vai printar a localização do sabre;
            contador++;//armazenar para usar no próximo if, se o contador for 0
          }   
        }
      }
    } 
    if(contador==0) {
      printf("0 0\n"); //se o contador contar nenhum 42 rodeado de 7, ai ele vai exibir o 0 0 do exemplo do uri.
      }

return 0;
}