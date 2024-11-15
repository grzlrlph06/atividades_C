/*5. Dada uma matriz 5x5, elabore um algoritmo que imprima:
A diagonal principal
A diagonal secundária
A soma da linha 4
A soma da coluna 2
Tudo, exceto a diagonal principal*/

#include <stdio.h>
#define tamanho 5

int main(){
    int matriz[tamanho][tamanho], l4=0, c2=0;

    printf("Entrada da matriz: \n");
    for(int i=0; i<tamanho; i++){
        for(int j=0; j<tamanho; j++){
            printf("[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Diagonal principal: \n");
    for(int i=0; i<tamanho; i++){
        for(int j=0; j<tamanho; j++){
            if(i==j){
                printf("%d ",matriz[i][j]);
            }else{
                printf(" ");
            }

        }
        printf("\n");
    }

    printf("Diagonal secundaria: \n");
    for(int i=0; i<tamanho; i++){
        for(int j=0; j<tamanho; j++){
            if( j == tamanho-i-1 ){
                printf("%d ",matriz[i][j]);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

    //soma da linha 4
    for (int j=0; j<tamanho; j++){
        l4 += matriz[4][j];
    }
    printf("Soma da linha 4: %d", l4);

    //soma da coluna 2
    for (int i=0; i<tamanho; i++){
        c2+= matriz[i][2];
    }
    printf("\nSoma da coluna 2: %d", c2);


    printf("\nMatriz exceto a diagonal principal \n");
    for(int i=0; i<tamanho; i++){
        for(int j=0; j<tamanho; j++){
            if(i==j){
                printf(" ");
            }else{
                printf("%d ",matriz[i][j]);
            }
        }
        printf("\n");
    }

    return 0;   
}