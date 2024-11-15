/*4. Leia uma matriz 3 x 3. Leia também um valor X.
O programa deverá fazer uma busca desse valor na matriz e, ao final escrever a localização (linha e coluna) ou uma mensagem de “não encontrado”.*/

#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 3

void verificaX(int m[TAMANHO][TAMANHO], int x);

int main()
{
    int matriz[TAMANHO][TAMANHO], x;

    for(int i=0; i<TAMANHO; i++){
        for(int j=0; j<TAMANHO; j++){
            printf("[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Insira o valor X a ser procurado: ");
    scanf("%d", &x);

    verificaX(matriz, x);
    return 0;
}

void verificaX(int m[TAMANHO][TAMANHO], int x){
    
    int a=0;
    for(int i=0; i<TAMANHO; i++){
        for(int j=0; j<TAMANHO; j++){
            if(m[i][j]==x){
                printf("Valor encontrado na posicao [%d][%d] \n", i, j); //imprime a posicao toda vez q encontra o valor
                a=1;  //para verificacao no final
        }
    }
}

if(!a){
    printf("Valor nao encontrado!");
}

}


