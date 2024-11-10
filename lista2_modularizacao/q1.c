/*1. Faça uma função que dados um inteiro n e um inteiro d, 0 < d < 9, devolve 
quantas vezes o dígito d aparece em n. 
(dica: utilizar o operador % na solução )*/

#include <stdio.h>


int verificaD(int n, int d);

int main(){
    int n, d=-1;

    printf ("Entre com um valor inteiro: ");
    scanf("%d", &n);
    while(d<0 || d>9){
        printf("\nAgora insira um valor entre 0 e 9: ");
        scanf("%d", &d);
        if(d<0 || d>9){
            printf("\nValor invalido. Tente novamente!");
        }

    }
    
    int qtd = verificaD(n,d);
    printf("%d aparece %d vezes no numero %d", d, qtd, n);

    return 0;
}

int verificaD(int n, int d){
    int resto, qtd=0;

    while(n>0){
        resto = n % 10;
        if(resto==d){
            qtd++;
        }
        n = n/10;
    }
    return qtd;
}