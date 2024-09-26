#include <stdio.h>

int main() {
    /*Faça um programa que leia do teclado cinco números e imprima na tela a 
    soma destes cinco números. O programa só pode utilizar 2 (duas) variáveis.*/
    int num, soma = 0; // Variável para armazenar a soma e a leitura do número
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &num); // Lê um número
        soma += num; // Adiciona o número à soma
    }

    printf("A soma dos cinco números é: %d\n", soma);
    return 0;
}
