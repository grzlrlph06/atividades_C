/*2. Criar uma função que efetue e apresente o resultado da soma entre duas matrizes nxn.*/


#include <stdio.h>
#define TAMANHO 50

void somaMatriz(int a[TAMANHO][TAMANHO],int b[TAMANHO][TAMANHO], int n);

int main(){
    int n, a[TAMANHO][TAMANHO], b[TAMANHO][TAMANHO];

    printf("Digite um valor n para ser a ordem da matriz: ");
    scanf("%d", &n);
    
    printf("\nEntrada de valores para a primeira matriz: \n");
    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            printf("[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEntrada de valores para a segunda matriz: \n");
    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            printf("[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    somaMatriz(a, b, n);

    return 0;
}

void somaMatriz(int a[TAMANHO][TAMANHO],int b[TAMANHO][TAMANHO], int n){
    int c[TAMANHO][TAMANHO];

    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf(" %d + %d ", a[i][j], b[i][j]);
            c[i][j] = a[i][j]+b[i][j];
        }
        printf("\n");
    }

    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            printf(" %d ", c[i][j]);
        }
        printf("\n");
    }

}

