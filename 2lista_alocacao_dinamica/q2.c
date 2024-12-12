/*2 Construa um programa que aloque em tempo de execução (dinamicamente) 
uma matriz de ordem m x n (linha por coluna) usando só aritmética de ponteiros. 
Usar o programa para definir a seguinte matriz
1 2 3
4 5 6
a) Imprima os valores da matriz usando aritmética de ponteiros.
b) Imprima os valores da matriz usando indexes.
c) Liberar a área de memória alocada pela matriz.*/

#include <stdio.h>
#include <stdlib.h>
#define LINHAS 2
#define COLUNAS 3

void saidaPonteiros(int **ptrLinhas);
void saidaIndices (int **ptrLinhas);

int main(){
    int **ptrLinhas; //dois * significa que é um ponteiro apontando para outro ponteiro

    //alocando um vetor de ponteiros das linhas
    ptrLinhas = malloc (LINHAS * sizeof(int*));
    if(ptrLinhas==NULL){
        printf("Nao foi possivel alocar memoria para o ponteiro de linhas. Tente novamente!");
        return 0;
    }

    //alocando um vetor com todos os elementos da matriz
    ptrLinhas[0] = malloc(LINHAS*COLUNAS*sizeof(int*)); //vai ficar na primeira posicao do vetor de ponteiros
    if(ptrLinhas[0] == NULL){
        printf("Nao foi possivel alocar memoria. Tente novamente!");
        return 0;
    }

    //ajusta os ponteiros para receber os enderecos do inicio de cada linha
    for(int i=1; i<LINHAS; i++){
        ptrLinhas[i] = ptrLinhas[0]+i*COLUNAS;
    }

    //preenchendo a matriz
    int *ptr = ptrLinhas[0];
    for (int i=0; i<LINHAS*COLUNAS; i++){
        *(ptr+i) = i+1;
    }

    //metodos de saida da matriz
    saidaPonteiros (ptrLinhas);
    saidaIndices (ptrLinhas);

    //limpando a memoria alocada
    free(ptrLinhas[0]);
    free(ptrLinhas);
    
    return 0;
}

void saidaPonteiros(int **ptrLinhas){
    printf("\nSAIDA POR PONTEIROS:\n");
    for(int i=0; i<LINHAS; i++){
        for(int j=0; j<COLUNAS; j++){
            printf(" %d ", *(*(ptrLinhas+i)+j));
        }
        printf("\n");
    }
}

void saidaIndices (int **ptrLinhas){
    printf("\nSAIDA POR INDICES:\n");
    for (int i =0 ; i<LINHAS; i++){
        for (int j=0; j<COLUNAS; j++){
            printf(" %d ", ptrLinhas[i][j]);
        }
        printf("\n");
    }
}