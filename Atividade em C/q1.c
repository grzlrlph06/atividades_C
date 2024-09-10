#include <stdio.h>

int main(){
    int n1=0, n2=0, soma=0;

    printf ("Insira um valor:");
    scanf ("%d", &n1);
    printf ("\nInsira outro valor para realizar a soma: ");
    scanf ("%d", &n2);

    soma = n1+n2;

    printf ("\nSoma: %d", soma);

    return 0;
}
