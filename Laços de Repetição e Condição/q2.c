
#include <stdio.h>
#include <stdlib.h>

/*Escreva um algoritmo que lê 50 números inteiros e em seguida mostra a soma de todos os ímpares lidos.*/

int main()
{
    int cont=0, num, somaImpar;

    while(cont<=49){
        cont++;
        printf("\n %d vez - Digite um valor:", cont);
        scanf("%d", &num);

        if(num%2!=0){
            somaImpar += num;
        }
    }

    printf("\nA soma dos numeros impares e: %d", somaImpar);

    return 0;
}
