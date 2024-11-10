/*2. Usando a função programada em 1 crie outra função que recebe dos números 
inteiros positivos e verifica se o primeiro é uma permutação de b 
(para a ser uma permutação tem que ter de cada número entre 0 e 9 a mesma quantidade)*/


#include <stdio.h>

int verificaDigitos(int n, int d);
int verificaPermutacao(int a, int b);

int main(){
    int a=-1, b=-1, verificacao;
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
    int qtdDigitosA=0, qtdDigitosB=0, verificacao=1; //so altero verificacao se nao for permutacao

    //copia dos valores pq quando vou verificar a quantidade de digitos ele altera
    int aCopia = a;
    int bCopia = b;

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
        a = aCopia; //recebe o valor novamente para fazer a verificacao
        b = bCopia;
        while (a>0){
            int restoA = a%10; //pega os valores absolutos
            int qtdDigA = verificaD(a, restoA); //verifica quantas vezes o digito aparece
            int qtdDigB = verificaD(b, restoA); 
            /*verifica se a quantidade de vezes que o digito aparece em a 
            é a mesma quantidade que aparece em b*/
            if (qtdDigA!=qtdDigB){ 
                verificacao = 0;
                break; // sai do loop 
            }
            a/=10; //remove o ultimo digito de a
    }
    }else{
        verificacao = 0; // nao possui a mesma quantidade de digitos
    }

    return verificacao;
}