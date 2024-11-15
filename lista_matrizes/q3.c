/*3. Faça um programa que multiplica uma matriz 3 x 3 de inteiros por um escalar 
k e imprima o resultado na tela. O usuário deve fornecer os valores da matriz 
e de k.*/

#include <stdio.h>
#define TAMANHO 3

int main(){
    int matriz[TAMANHO][TAMANHO], k, resultado[TAMANHO][TAMANHO];

    printf("Entrada de valores para a matriz: \n");
    for(int i=0; i<TAMANHO; i++){
        for (int j=0; j<TAMANHO; j++){
            printf("[%d][%d]= ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Insira um escalar inteiro: ");
    scanf("%d", &k);

    //multiplicacao
    for (int i=0; i<TAMANHO; i++){
        for (int j=0; j<TAMANHO; j++){
            resultado[i][j] = k * matriz[i][j];
        }
    }

    printf("Resultado: \n");
    for (int i=0; i<TAMANHO; i++){
        for (int j=0; j<TAMANHO; j++){
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}