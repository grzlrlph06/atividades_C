#include <stdio.h>
#include <math.h>

int main(){
    float tC, tF;
    
    printf ("Insira a temperatura em celsius: ");
    scanf ("%f", &tC);
    tF = (tC*(9/5))+32;

    printf("%0.2f C = %0.2f F", tC, tF);

    return 0;
}