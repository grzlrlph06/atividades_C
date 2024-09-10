#include <stdio.h>
#include <math.h>
#include <locale.h>
#define PI 3.14

int main(){
    float area, raio;

    printf ("Digite o raio do circulo: ");
    scanf ("%f", &raio);

    area = PI*pow(raio, 2);

    printf ("\nA area do circulo e: %0.2f", area);


    return 0;
}