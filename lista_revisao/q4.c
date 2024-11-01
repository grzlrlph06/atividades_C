/*4. Números de Harshad
Escreva um programa que verifique se um número fornecido pelo
usuário é um número de Harshad (ou Niven), ou seja, um número que é divisível pela soma de seus dígitos.
Por exemplo, 18 é um número de Harshad porque 18 é divisível por 9 (1 + 8).
*/

//falta ajeitar 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, numM, numC, numD, numU, restoM, restoC, restoD, restoU, somaAlgarismos;

    printf ("Insira um valor inteiro: ");
    scanf("%d", &num);

    numM = num/1000;
    restoM = num%1000;
    numC = restoM/100;
    restoC = restoM%100;
    numD = restoC/10;
    restoD = restoC%10;
    numU = restoD;
    somaAlgarismos = numM + numC + numD + numU;

    if(num%somaAlgarismos ==0){
        printf("%d e um numero de harshad", num);
    }else{
        printf("%d nao e um numero de harshad", num);
        }
    return 0;
}
