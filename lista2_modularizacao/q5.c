/*5. Faça uma função que transforme um número binário (expressado como um inteiro) 
num número decimal. A transformação entre essas bases pode ser feita com a forma 
polinomial a seguir:
Número binário: 1101   ==>  1×2³ + 1×2² + 0x2¹ + 1×2^0 = 8 + 4 + 0 + 1 = 13*/

#include <stdio.h>
#include <math.h>

int conversaoBinarioDecimal(int binario);

int main(){
    int binario, decimal;

    printf("Insira um valor binario: ");
    scanf("%d", &binario);
    decimal = conversaoBinarioDecimal(binario);
    printf("%d = %d", binario, decimal);
    return 0;
}

int conversaoBinarioDecimal(int binario){
    int resto, soma=0, cont=0;

    while(binario>0){
        resto = binario % 10; //ultimo digito
        soma = resto*pow(2,cont) + soma; //conversao propriamente dita 
        binario = binario / 10; //tira o digito convertido
        cont++;
    }

    return soma;

}