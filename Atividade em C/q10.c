#include <stdio.h>
#include <math.h>

int main(){
    float altura, pesoIdeal;

    printf("Altura: ");
    scanf("%f", &altura);

    pesoIdeal =(72.7*altura)-58;

    printf("Peso ideal: %0.2f", pesoIdeal);

    return 0;


}