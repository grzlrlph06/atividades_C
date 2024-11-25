/*4. Validador de Palíndromos
Crie um programa que leia até 10 strings e determine quais delas são palíndromos. O programa deve:
Ler as strings e armazená-las em um array bidimensional.
Implementar a função:
int verificarPalindromo(char palavra[]);
Exibir quais palavras são palíndromos.*/

#include <stdio.h>
#include <string.h>
#define MAX 1000

int verificarPalindromo(char palavra[]);

int main(){
    char palavras[10][MAX];

    for (int i=0; i<10; i++){
        printf("Insira a %d palavra: ", i+1);
        scanf("%s", palavras[i]);
    }

    printf("Palindromos: \n");
    for (int i=0; i<10; i++){
        if(verificarPalindromo(palavras[i])){
            printf("%s\n", palavras[i]);
    }
    }

    return 0;
}

int verificarPalindromo(char palavra[]){
    int n_letras = strlen(palavra), meio;

    if(n_letras%2==0){
         meio = n_letras /2;
    }else{
         meio = (n_letras+1)/2;
    }

    for(int i=0; i< meio; i++){
        if(palavra[i]!= palavra[n_letras-1-i]){
            return 0;
        }else{
            if(i == meio-1)
                return 1;
        }
    }
    return 1;
}