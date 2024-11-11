/*Dados dois vetores x e y, ambos com n elementos, determinar o produto escalar desses vetores.a)Crie uma função para determinar o produto escalar de dois vetores com n elementos.O produto escalar de dois vetores A=(a1, a2,..,an) e B=(b1, b2, ..., bn) é ∑aibi  onde 1 ≤ i ≤ n*/
#include <stdio.h>
#define TAMANHO 100

void produtoEscalar(int a[], int b[], int num);

int main()
{
    int a[TAMANHO], b[TAMANHO], num=101;
    
    while (num>=100){
        printf ("Tamanho dos vetores: ");
        scanf("%d", &num);
        if(num>=100){
            printf ("Valor invalido. Tente novamente!");
        }
    }
    for (int i=0; i<num; i++){
        printf ("Entre com a componete %d de a: ", i+1);
        scanf ("%d", &a[i]);
    }
    for (int i=0; i<num; i++){
        printf ("Entre com a componete %d de b: ", i+1);
        scanf ("%d", &b[i]);
    }
    produtoEscalar(a, b, num);

    return 0;
}

void produtoEscalar(int a[], int b[], int num){
    int produto = 0;
    for (int i=0; i<num; i++){
        produto = produto + a[i]*b[i];
    }
    printf ("O produto escalar entre a e b e: %d", produto);
}