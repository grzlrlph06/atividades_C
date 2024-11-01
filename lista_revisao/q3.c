/*3. Primo Gêmeo
Crie um programa em C que encontre o primeiro par de números primos gêmeos
(dois números primos cuja diferença é 2) maiores que um número fornecido pelo usuário.
Exemplo de primos gêmeos: (11, 13), (17, 19).*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, qtdDivisores=0, primo2=0, primo1=0;

    printf ("Insira um valor inteiro: ");
    scanf("%d", &num);

    while(1){
        num++;
        qtdDivisores=0;

        //verificando se o numero é par
        if(num%2!=0){
            //verificando os divisores
        for (int i = 1; i<=num; i++){
            if(num%i==0){
                qtdDivisores++;
            }
        }
        //verificando se é um numero primo
        if(qtdDivisores==2){
                if(primo1==0){
                        primo1 = num;
                }else{
                primo2 = num;
                if(primo2 - primo1 == 2){
                    break;
                }else{
                primo1=primo2;
                }
                }
        }else{
            continue;
        }
    }else continue;
    }
    printf("Os primos gemeos mais proximos sao %d e %d", primo1, primo2);

    return 0;
}


