/*6. Faça uma função que transforme um numero decimal em binário. 
(procura em internet como é feita essa transformação)*/

#include <stdio.h>
#include <math.h>


int conversaoDecimalBinario(int decimal);


int main(){
    int binario, decimal;

    printf("Insira um valor decimal: ");
    scanf("%d", &decimal);
    binario = conversaoDecimalBinario(decimal);
    printf("%d = %d", decimal, binario);
    
    return 0;
}


int conversaoDecimalBinario(int decimal){
    int resto, cont=1, binario=0;

    while(decimal>0){
            resto = decimal%2;
            binario = resto*cont + binario; //nao usei a função pow() pq tava dando erro 
            decimal = decimal / 2;
            cont = cont*10; //aumenta uma casa na base 10

    return binario;
}