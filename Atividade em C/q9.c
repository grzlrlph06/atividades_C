#include <stdio.h>
#include <math.h>

int main(){
    int n1, n2;
    float n3, soma1, soma2, operacao3; 

    printf ("Insira o primeiro valor inteiro: ");
    scanf ("%d", &n1);
    printf ("Insira o segundo valor inteiro: ");
    scanf ("%d", &n2);
    printf ("Insira o terceiro valor real: ");
    scanf ("%f", &n3);

    soma1 = 2*n1*n2/2;
    soma2 = (3*n1)+n3;
    operacao3 = pow(n3,3);

    printf("2*%d*%d/2= %0.2f", n1, n2, soma1);
    printf("\n 3*%d + %0.2f = %0.2f", n1, n3, soma2);
    printf ("\n %0.2f elevado ao 3 = %0.2f",n3, operacao3);

    return 0;
}