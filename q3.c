#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont=0, num, somaImpar;

    while(cont<=49){
        cont++;
        printf("\n %d vez - Digite um valor:", cont);
        scanf("%d", &num);

        if(num%2!=0 && num>=100 && num<=200){
            somaImpar += num;
        }
    }

    printf("\nA soma dos numeros impares e: %d", somaImpar);

    return 0;
}
