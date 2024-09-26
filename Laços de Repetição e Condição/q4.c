
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/*Construa um algoritmo que leia um conjunto de 20 números inteiros e 
mostre qual foi o maior e o menor valor fornecido.*/
int main()
{
    int cont, num=0, maior=0, menor=INT_MAX;

    for (cont=0; cont<20; cont++){
        printf("Insira um valor: ");
        scanf("%d", &num);

        if(num>maior){
            maior = num;
        }else{
        if(num<menor){
            menor = num;
        }
    }
    }

    printf("O maior valor foi: %d", maior);
    printf("\nE o menor valor foi: %d", menor);
    return 0;
}
