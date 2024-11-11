/*Criar e utilizar num programa uma função que receba uma sequência de n números e retorne outra sequência só com os números par (o comprimento máximo da sequência é 100 pelo que n tem que ser um número menor que 100)*/

#include <stdio.h>
#define TAMANHO 100

void verificaPar(int v[], int qtd);

int main(){
    int v[TAMANHO], qtdValor=101;

    //verificando quantos valores serao registrados
    while(qtdValor>100){
        printf("Insira a quantidade de numeros que voce deseja registrar: ");
        scanf("%d", &qtdValor);
        if (qtdValor>100)
        {
            printf("Valor invalido! Tente novamente. \n");
        }
    }

    //registrando os valores
    for (int i=0; i<qtdValor; i++){
        printf("Digite o %d  numero: ", i+1);
        scanf("%d", &v[i]);
    }

    //jogando na funcao para imprimir os numeros pares
    verificaPar(v, qtdValor);

    return 0;
}

void verificaPar(int v[], int qtd){
    for (int i=0; i<qtd; i++){
        if(v[i]%2==0){
            printf ("%d ", v[i]);
        }
    }
}