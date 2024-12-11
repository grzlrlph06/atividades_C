/*4 Crie um programa que contenha um array de inteiros contendo 8 elementos. 
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima 
o dobro de cada valor lido.
a)Imprimir o endereço das posições contendo valores pares*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[8];

    int *inicio;
    //int *fim; // nao usei pra nada

    inicio = vetor; // armazena o endereco do inicio de vetor

    for(int i=0; i<8; i++){
        printf("Insira um valor inteiro: ");
        scanf("%d", (inicio + i)); //registra o valor pelo ponteiro 
    }


    for(int i=0; i<8; i++){
        if(*( inicio+i ) % 2 == 0){
            printf("\nO elemento neste endereco e par: %d", ( inicio+i ));
        }
    }

    for(int i=0; i<8; i++){
        *( inicio+i ) *=2;
    }

    
    return 0;
}