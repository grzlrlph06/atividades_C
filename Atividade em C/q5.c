#include <stdio.h>
#include <math.h>

int main(){
    float base, altura, dobroArea;

    printf("Insira a base: ");
    scanf ("%f", &base);
    printf("\nInsira a base: ");
    scanf ("%f", &altura);

    dobroArea = 2*(base*altura);

    printf("O dobro da area e: %0.2f", dobroArea);

    return 0;
}