/*3 Escreva um programa que declare um inteiro, um real e um char, e 
ponteiros para inteiro, real e char. Associe as variáveis aos 
ponteiros (use &). Modifique os valores de cada variável usando 
os ponteiros. Imprima os valores das variáveis antes e após a modificação.*/


#include <stdio.h>

int main(){
    //inicializacao
    int inteiro=7;
    float real=21.5;
    char caracter='a';
    int *ei;
    float *er;
    char *ec;

    //passando os enderecos
    ei = &inteiro;
    er = &real;
    ec = &caracter;

    printf("Antes da alteracao: %d, %.2f, %c\n", *ei, *er, *ec);
    //alterando os valores
    *ei = 4;
    *er = 28.18;
    *ec = 'g';
    printf("Apos a alteracao: %d, %.2f, %c", *ei, *er, *ec);

    return 0;
}