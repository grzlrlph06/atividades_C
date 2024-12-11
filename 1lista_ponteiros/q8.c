/*8  Escreva uma função chamada troca que troca os valores dos parâmetros recebidos. 
Sua assinatura deve ser: void troca(float *a, float *b);*/

#include <stdio.h>

void troca(float *a, float *b);

int main(){
    float n1, n2;
    float *ptr1;
    float *ptr2;

    //vinculando os enderecos
    ptr1 = &n1;
    ptr2 = &n2;

    printf("Insira o primeiro valor: ");
    scanf("%f", ptr1);
    printf("Insira o segundo valor: ");
    scanf("%f", ptr2);

    troca(ptr1, ptr2);

    return 0;

}

void troca(float *a, float *b){
    float copiaAux;

    copiaAux = *a;
    *a = *b;
    *b = copiaAux;

    printf("\nValores trocados: ");
    printf("\n n1 = %.2f \n n2 = %.2f", *a, *b);
}