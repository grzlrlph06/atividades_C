/*2. Usando a fun��o programada em 1 crie outra fun��o que recebe dos n�meros
inteiros positivos e verifica se o primeiro � uma permuta��o de b
(para a ser uma permuta��o tem que ter de cada n�mero entre 0 e 9 a mesma quantidade)*/

/*O que eu entendi: vou entrar com dois valores a e b, verificar se a � permuta��o de b
Condi��es para ser permuta��o:
1. Mesma quantidade de d�gitos
2. Verificar se eles tem os mesmos d�gitos (Ex.: 123 e 321)*/

#include <stdio.h>
#include <stdlib.h>

int verificaDigitos(int n, int d);
int verificaPermutacao(int a, int b);


int main(){
    int a=-1, b=-1, verificacao=0;
    //entrada de a e b
    while(a<0 || b<0){
        printf("Insira dois valores inteiros positivos a e b: ");
        scanf("%d %d", &a, &b);
        if(a<0 || b<0){
            printf("Valores invalidos. Tente novamente!\n");
        }
    }

    verificacao = verificaPermutacao(a,b);

    if(verificacao==1){
        printf("%d e permutacao de %d", a, b);
    }else{
        printf("%d nao e permutacao de %d", a, b);
    }

    return 0;
}


int verificaD(int n, int d){
    int resto, qtd=0;

    while(n>0){
        resto = n % 10;
        if(resto==d){
            qtd++;
        }
        n = n/10;
    }
    return qtd;
}

int verificaPermutacao(int a, int b){
    int qtdDigitosA=0, qtdDigitosB=0, verificacao=0;

    //verificando a quantidade de digitos de a
    while (a>0){
        a /= 10;
        qtdDigitosA++;
    }
    //verificando a quantidade de digitos de b
    while (b>0){
        b /= 10;
        qtdDigitosB++;
    }

    if(qtdDigitosA == qtdDigitosB){
        while (a>0){
            int restoA = a%10; //pega os valores absolutos
            int qtdDigA = verificaD(a, restoA); //verifica quantas vezes o digito aparece
            int qtdDigB = verificaD(b, restoA);
            /*verifica se a quantidade de vezes que o digito aparece em a
            � a mesma quantidade que aparece em b*/
            if (qtdDigA!=qtdDigB){
                verificacao = 0;
                break;
            }else{
                verificacao = 1;
            }
    }
    }else{
        verificacao = 0;
    }

    return verificacao;
}






