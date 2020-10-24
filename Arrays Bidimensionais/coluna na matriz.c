//**********************************//
    //Matheus de Mendonça Barbosa//
  //teus2002ppbarbosa@outlook.com//
            //20200001364//
//**********************************//

#include <stdio.h>

int main (void){

    int C, i, j;//variavel C: coluna, variáveis i e j, pra fazer o for aninhado;
    char ope;//qual operação irá desejar, S = soma ou M = Média;
    double M[12][12], soma = 0;//Array bidimensional 12/12(matriz), variável soma que está em double pois pode ser usada pela média

    scanf("%d%*c", &C);//leitura da coluna que será considerada para operação
    scanf("%c", &ope);//Operação que será feita

    //for aninhado, leitura da matriz
    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%lf", &M[i][j]);
        }
    }
    //a gente quer que a coluna fique fixa, e oq se altere é a linha
    for(i=0; i<12; i++){
        soma = soma + M[i][C];
    }
    // o resultado pode ser soma ou média, entao faremos um if;
    if(ope == 'S'){
        printf("%.1lf\n", soma);
    }
    else{
        printf("%.1lf\n", soma/12);
    }




    return 0;
}