/*1. Faça um programa que leia dois valores inteiros x e y entre 0 e 1000. 
Encontre o maior entre eles e imprima:
O percentual do menor em relação ao maior
O módulo da diferença entre o maior e o menor
O programa deve utilizar três funções:
a) scanIntIntervalo: Função para ler inteiros do teclado garantido que eles estejam dentro de um 
intervalo pré-determinado;
b) percentual: Função para calcular o percentual:  100*valor/total
c) absdif: Função que retorna o valor absoluto da diferença entre dois números reais.*/


#include <stdio.h>
#include <math.h>

void scanIntIntervalo();
double percentual(double n1, double n2);
double absdif(double num1, double num2);

int n1=-1, n2=-1;
double porcentagem, diferenca;

int main(){
    scanIntIntervalo();

    printf("O percentual e %.2lf \nE a diferenca e %.2lf", porcentagem, diferenca);
    
    return 0;
}


void scanIntIntervalo(){
    while (n1<0 || n1>1000 || n2<0 || n2>1000){
        printf("\nInsira dois valores inteiros entre 0 e 1000: ");
        scanf("%d %d", &n1, &n2);
    }

  

    if(n2>n1){
        int aux= n1;
        n1=n2;
        n2 = aux;
        percentual(n1, n2);
        absdif(n1, n2);
    }else{
        percentual(n1, n2);
        absdif(n1, n2);
    }

    
}

double percentual(double n1, double n2){
    porcentagem = (n2*100)/n1;
    return porcentagem;
}

double absdif(double num1, double num2){
    diferenca = fabs(num1-num2);
    return diferenca;
}

