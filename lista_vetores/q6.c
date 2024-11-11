/*8  Criar uma função para ordenar um vetor em ordem ascendente utilizando o algoritmo Selection-Sort. Este algoritmo funciona da seguinte forma:
Percorrer o array comparando os elementos para determinar qual é o menor.
Intercambiar o elemento com menor valor com o elemento que está na primeira posição.
Procurar o segundo menor valor e intercambiar com o elemento que está na segunda posição.
Continuar o algoritmo até que todos os elementos estejam ordenados.
Exemplo:
array=[70,90,1,3,0,100,2]
Primeira execução acha o menor (0) e intercambia com o que está na primeira posição, o resultado é  array=[0,90,1,3,70,100,2]
Segunda execução acha o menor desde a segunda posição até o final do array (1) e intercambia com o que está na segunda posição, o resultado é  array=[0,1,90,3,70,100,2]
Terceira execução acha o menor desde a terceira posição até o final do array (2) e intercambia com o que está na terceira posição, o resultado é  array=[0,1,2,3,70,100,90]
O processo continua até ordenar o vetor.
(Tentem fazer sozinhos, não procurar soluções na Internet. Na solução não pode usar o comando break).*/

#include <stdio.h>
#define TAMANHO 100

void ordenaVetor(int n, int vetor[]);

int main(){

    int v[TAMANHO], n=101;

    while (n>100){
        printf("Digite a quantidade de numeros que serao inseridos: ");
        scanf("%d", &n);
        if(n>100){
            printf("Valor invalido. Tente novamente!");
        }
    }

    for (int i=0; i<n; i++){
        printf("Insira o numero %d: ", i+1);
        scanf("%d", &v[i]);
    }

    ordenaVetor(n, v);

    return 0;
}


void ordenaVetor(int n, int v[]){
    int aux, minIndex;

    for (int i =0; i<n-1; i++){
        minIndex = i; // indice de menor valor

        for (int j = i+1; j<n; j++){
            if(v[j]<v[minIndex]){
                minIndex=j;
            }
        }    

        if(minIndex != i){
            aux = v[i];
            v[i] = v[minIndex];
            v[minIndex] = aux;
        }  

        for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");  

    }

     
}

