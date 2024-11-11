/*Criar um programa que  dada uma sequência de n números a imprima na ordem inversa à da leitura. (o comprimento máximo da sequência é 100 pelo que n tem que ser um número menor que 100)*/

#include <stdio.h>
#define TAMANHO 100

void imprimirInversa(int v[], int tamanho);

int main(){
    int v[TAMANHO], num, i;
    printf("Quantidade de numeros a serem inseridos: ");
    scanf("%d", &num);
    for (i=0; i<num; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &v[i]);
    }
    imprimirInversa(v, num);
    return 0;
}


void imprimirInversa(int v[], int tamanho){
    for (int i = tamanho-1; i>=0; i--){
        printf("%d ", v[i]);
    }
}