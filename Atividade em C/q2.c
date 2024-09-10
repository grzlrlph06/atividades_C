#include <stdio.h>

int main(){
    float n1, n2, n3, n4, media;

    printf ("Insira sua nota: ");
    scanf ("%f", &n1);
    printf ("\nInsira sua nota: ");
    scanf ("%f", &n2);
    printf ("\nInsira sua nota: ");
    scanf ("%f", &n3);
    printf ("\nInsira sua nota: ");
    scanf ("%f", &n4);

    media = (n1+n2+n3+n4)/4;
    printf("\n media: %0.2f", media);

    return 0;

}