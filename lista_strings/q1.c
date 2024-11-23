/*1. Faça funções que:
Receba uma palavra e a imprima de trás-para-frente. ´
Receba do usuário uma string e imprime a string sem vogais.
Transforma todos os caracteres de uma string em maiúsculos.
Função que recebe uma string e um caractere, e retorne o número de vezes que esse caractere aparece na string.
Função que recebe uma string e um caractere, e apague todas as ocorrências desse caractere na string*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void invertePalavra (char palavra[], int tamanho);
void tiraVogal();
void converteMaiuscula(char palavra[], int tamanho);
int contaCaracter (char palavra[], char caracter, int tamanho);
void tiraCaracter (char palavra[], char caracter, int tamanho);

int main(){
    char palavra[100], caracter;

    //entrada
    printf ("Digite a palavra: ");
    scanf("%s", palavra);
    getchar(); //limpando o buffer
    printf("Agora insira um caracter: ");
    scanf("%c", &caracter);

    int n = strlen(palavra);

    //chamando as funcoes
    invertePalavra(palavra, n);
    converteMaiuscula(palavra, n);
    printf("\nContando a quantidade de vezes que %c caracter aparece: ", caracter);
    printf("%c aparece %d vezes", caracter, contaCaracter(palavra, caracter, n));
    tiraCaracter(palavra, caracter, n);
    tiraVogal();
  
    return 0;
}

void invertePalavra(char palavra[], int tamanho){
    printf("\nInvertendo a palavra: ");

    for (int i=tamanho-1; i>=0; i--){
        printf("%c", palavra[i]);
    }
    printf("\n");
}

void tiraVogal(){
    char palavra[100], resultado[100];
    int j=0;
    printf("\nTirando as vogais ");
    printf ("\nDigite a palavra: ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);

     for (int i = 0; i < tamanho; i++) {
        if (palavra[i] != 'a' && palavra[i] != 'e' && palavra[i] != 'i' &&
            palavra[i] != 'o' && palavra[i] != 'u' &&
            palavra[i] != 'A' && palavra[i] != 'E' && palavra[i] != 'I' &&
            palavra[i] != 'O' && palavra[i] != 'U') {
            resultado[j++] = palavra[i];
        }
    }
    resultado[j] = '\0'; 
    printf("%s\n", resultado); 
}

void converteMaiuscula(char palavra[], int tamanho){
    printf("\nMAIUSCULO: ");
    for (int i =0; i<tamanho; i++){
        if(palavra[i]>=97 && palavra[i]<=122){
            palavra[i]-=32;
            printf("%c", palavra[i]);
        }else{
            printf("%c", palavra[i]);
        }
    }
    printf("\n");
}

int contaCaracter (char palavra[], char caracter, int tamanho){
    int cont =0 ;
    for (int i =0 ; i<tamanho; i++){
        if(tolower(palavra[i]) == tolower(caracter)){
            cont ++;
        }
    }
    return cont;
}

void tiraCaracter(char palavra[], char caracter, int tamanho) {
    char resultado[100];
    int j = 0;

    for (int i = 0; i < tamanho; i++) {
        if (tolower(palavra[i]) != tolower(caracter)) {
            resultado[j++] = palavra[i];
        }
    }
    resultado[j] = '\0';
    printf("\nSem o caractere '%c': %s\n", caracter, resultado);
}