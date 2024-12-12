/*1 Crie uma função que aloca e lê um vetor de n inteiros. 
Crie outra função que recebe o vetor e retorna o maior e o menor valor. 
O programa principal deve executar as duas funções, imprimir os valores 
retornados pela 2ª função e liberar a memória alocada pela 1ª função.*/

#include <stdlib.h>
#include <stdio.h>

int* alocaMemoria (int n);
void analisaExtremos(int* vet, int* ptrMin, int* ptrMax, int n);

int main(){

    int n, min=10000, max=0;
    int* ptrMin;
    int* ptrMax;
    int *vet;

    ptrMin = &min;
    ptrMax = &max;

    printf("Insira a quantidade de elementos: ");
    scanf("%d", &n);

    vet = alocaMemoria(n);
    analisaExtremos(vet, ptrMin, ptrMax, n);
    
    printf("\nValor minimo: %d \nValor maximo: %d", *ptrMin, *ptrMax);
    free(vet);

    return 0;
}

void analisaExtremos(int *vet, int* ptrMin, int* ptrMax, int n){
    for(int i=0; i<n; i++){
        if(*(vet+i)>*ptrMax){
            *ptrMax = *(vet+i);
        }
        if(*(vet+i)<*ptrMin){
            *ptrMin = *(vet+i);
        }
    }
}


int* alocaMemoria(int n){
    int* vet = (int *) malloc (n * sizeof(int));

    if(vet == NULL){
        printf("Nao foi possivel alocar memoria. Tente novamente!");
        exit(1);
    }

    for(int i=0; i<n; i++){
        printf("\n[%d]:", i);
        scanf("%d", &vet[i]);
    } 

    return vet;
}