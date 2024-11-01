/*Na matemática, o fatorial de um número natural n, representado por n!, 
é o produto de todos os inteiros positivos menores ou iguais a n.
Construa uma função que receba como parâmetro n e retorne o fatorial de n:
int fat(int n)  //Recebe n como parâmetro e retorna n!*/

#include <stdio.h>

int num=0, fatorial=1;

int fat(int n);

int main(){
    printf("Digite um valor para calcular o fatorial: ");
    scanf("%d", &num);
    printf("fatorial de %d: %d", num, fat(num));
    return 0;
}


int fat(int n){
    for (int i=1; i<=n; i++){
        fatorial = fatorial*i;
    }
    return fatorial;
}