#include <stdio.h>
#include <math.h>


int main(){
    float tF, tC;

    printf("Insira a temperatura em Fahrenheit: ");
    scanf("%f", &tF);

    tC = (5*(tF-32))/9;

    printf ("%0.2f °F = %0.2f °C", tF, tC);

    return 0;

}