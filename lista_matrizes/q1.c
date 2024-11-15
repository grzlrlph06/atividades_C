/*1 Construa um algoritmo que efetue e apresente o resultado da soma entre duas matrizes 3 x 5. Inicialize a matriz com valores quaisquer e imprima o resultado na tela.*/

#include <stdio.h>



int main(){
    int a[3][5], b[3][5], c[3][5];

    printf("Entrada do primeiro vetor: \n");
    for(int i=0; i<3; i++){
        for (int j=0; j<5; j++){
            printf("Insira um valor para a: ");
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEntrada do segundo vetor: \n");
    for(int i=0; i<3; i++){
        for (int j=0; j<5; j++){
            printf("Insira um valor para b: ");
            scanf("%d", &b[i][j]);
        }
    }

    //soma dos vetores a e b
    for (int i=0; i<3; i++){
        for (int j=0; j<5; j++){
            c[i][j] = a[i][j]+b[i][j];

        }

    }

    //resultado
    printf("\nResultado da soma das matrizes a e b: \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n \n");
    printf("    +");
    printf("\n \n");
    

    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    printf("---------");
    printf("\n \n");
    

    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }



    return 0;
}