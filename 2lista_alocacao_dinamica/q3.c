/*3. Desenvolva um programa que calcule a soma de duas matrizes MxN de números 
reais (double). A implementação deste programa deve considerar as dimensões 
fornecida pelo usuário 
(Dica: represente a matriz através de variáveis do tipo double **, 
usando alocação dinâmica de memória)*/


#include <stdio.h>
#include <stdlib.h>

void somaMatrizes(double **ptrA, double **ptrB, double **ptrC, int linha, int coluna);

int main(){
    int linhas, colunas;
    double **ptrA;
    double **ptrB;
    double **ptrC;

    printf("Defina a quantidade de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Agora, defina a quantidade de colunas: ");
    scanf("%d", &colunas);

    //alocando memoria para as linhas 
    ptrA = malloc (linhas*sizeof(double*));
    if(ptrA==NULL){
        printf("Nao foi possivel alocar memoria para as linhas da matriz A. Tente novamente!");
        return 0;
    }
    ptrB = malloc (linhas*sizeof(double*));
    if(ptrB==NULL){
        printf("Nao foi possivel alocar memoria para as linhas da matriz B. Tente novamente!");
        return 0;
    }
    ptrC = malloc (linhas*sizeof(double*));
    if(ptrC==NULL){
        printf("Nao foi possivel alocar memoria para as linhas da matriz C. Tente novamente!");
        return 0;
    }

    //alocando agora para a matriz completa
    ptrA[0] = malloc(linhas*colunas*sizeof(double));
    if(ptrA[0]==NULL){
        printf("Nao foi possivel alocar memoria para a matriz A. Tente novamente!");
        return 0;
    }
    ptrB[0] = malloc(linhas*colunas*sizeof(double));
    if(ptrB[0]==NULL){
        printf("Nao foi possivel alocar memoria para a matriz B. Tente novamente!");
        return 0;
    }
    ptrC[0] = malloc(linhas*colunas*sizeof(double));
    if(ptrC[0]==NULL){
        printf("Nao foi possivel alocar memoria para a matriz B. Tente novamente!");
        return 0;
    }

    //ajustando os ponteiros para receber o endereco de inicio de cada linha
    for(int i=1; i<linhas; i++){
        ptrA[i] = ptrA[0] +i*colunas;
    }
    for(int i=1; i<linhas; i++){
        ptrB[i] = ptrB[0] + i*colunas;
    }
    for(int i=1; i<linhas; i++){
        ptrC[i] = ptrC[0] + i*colunas;
    }

    //preencher as matrizes
    printf("\nPREENCHENDO A MATRIZ A:");
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("\n[%d][%d]: ",i, j);
            scanf("%lf", &ptrA[i][j]);
        }
    }
    printf("\nPREENCHENDO A MATRIZ B:");
     for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("\n[%d][%d]: ",i, j);
            scanf("%lf", &ptrB[i][j]);
        }
    }

    //somando as matrizes
    somaMatrizes(ptrA, ptrB, ptrC, linhas, colunas);

    printf("\nRESULTADO DA SOMA DAS MATRIZES A E B: \n");
    for(int i=0; i<linhas; i++){
        for (int j=0; j<colunas; j++){
            printf(" %.2lf ", ptrC[i][j]);
        }
        printf("\n");
    }
    
    //limpando a memoria
    free(ptrA[0]);
    free(ptrA);
    free(ptrB[0]);
    free(ptrB);
    free(ptrC[0]);
    free(ptrC);

    return 0;
}

void somaMatrizes(double **ptrA, double **ptrB, double **ptrC, int linha, int coluna){
    for(int i=0; i<linha; i++){
        for(int j=0; j<coluna; j++){
            ptrC[i][j] = ptrA[i][j] + ptrB[i][j];
        }
    }
}