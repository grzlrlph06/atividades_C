#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int cont, num=0, maior=0, menor=INT_MAX;

    for (cont=0; cont<20; cont++){
        printf("Insira um valor: ");
        scanf("%d", &num);
        if(num<0) menor=0; break;

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
