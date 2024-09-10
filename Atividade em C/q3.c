#include <stdio.h>

int main(){
    float n, nConvertido;

    printf("Insira um valor em metros: ");
    scanf ("%f", &n);

    nConvertido = n*100;

    printf("\n%0.2f m = %0.0f cm", n, nConvertido);

    return 0;
}