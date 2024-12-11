/*7 Escreva uma função que receba um vetor inteiro v[0..n-1] e os endereços de 
duas variáveis inteiras, digamos min e max, e deposite nessas variáveis o valor 
do elemento mínimo e o valor do elemento máximo do vetor. Escreva também uma 
função main que use a função.*/


#include <stdio.h>
#define MAX 100

void encontrandoExtremos (int vet[], int* ptr1, int* ptr2, int cont);

int main(){
    int vet[MAX], min, max, cont=0, valor;
    int* pntrMin;
    int* pntrMax;

    //recebendo os enderecos
    pntrMin = &min;
    pntrMax = &max;


    printf("Entrada do vetor\n");
    printf("Caso queira encerrar a entrada do vetor, digite -1");
    while(1){
        //troquei a logica pra ele nao computar o -1 que seria o codigo de saida
        printf("\n[%d]: ", cont);
        scanf("%d", &valor);

        if(valor==-1){
            break;
        }else{
            vet[cont] = valor;
            cont++;
        }
    }

    //as variaveis so sao inicializadas se o vetor tiver sido preenchido
    if (cont > 0) {
        min = vet[0];
        max = vet[0];
    } else {
        printf("nenhum elemento foi inserido\n");
        return 0;
    }

    encontrandoExtremos(vet, pntrMin, pntrMax, cont);

    return 0;
}

void encontrandoExtremos(int vet[], int* ptr1, int* ptr2, int cont){
    //ptr1 = valor minimo e ptr2 = valor maximo
    for(int i=0; i<cont; i++){
        if(vet[i]>*ptr2){
            *ptr2 = vet[i];
        }
        if(vet[i]<*ptr1){
            *ptr1 = vet[i];
        }
    }

    printf("Valor minimo: %d", *ptr1);
    printf("\nValor maximo: %d", *ptr2);
}