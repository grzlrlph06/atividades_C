/*2. Análise de Palavras em Textos
Crie um programa que leia um texto (máximo 500 caracteres) e analise as palavras presentes nele. O programa deve:
Contar quantas palavras o texto possui.
Identificar a palavra mais longa e a mais curta.
Implementar as seguintes funções:
int contarPalavras(char texto[]);
void encontrarExtremos(char texto[], char maisLonga[], char maisCurta[]);
Use arrays de strings para armazenar temporariamente as palavras.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAXCARACTER 500

int contarPalavras (char texto[]);
void encontrarExtremos(char texto[], char maior[], char menor[]);

int main(){
    char texto[MAXCARACTER], maior[MAXCARACTER], menor[MAXCARACTER];

    printf("Digite o texto: ");
    fgets(texto, MAXCARACTER, stdin);
    int qtdPalavras = contarPalavras(texto);
    encontrarExtremos(texto, maior, menor);

    printf("Ha %d palavras no texto acima.", qtdPalavras);
    printf("\nMaior palavra: %s\n", maior);
    printf("Menor palavra: %s", menor);


    return 0;
}

int contarPalavras (char texto[]){
    int cont = 0, dentroPalavra = 0;

    for (int i = 0; texto[i]!='\0'; i++){
        if(isspace(texto[i])){
            dentroPalavra=0;
        }else if(!dentroPalavra){
            dentroPalavra=1;
            cont++;
        }

    }

    return cont;
}

void encontrarExtremos(char texto[], char maior[], char menor[]){
    int inicio = 0, fim = 0, comprimento = 0;
    int maxComprimento = 0, minComprimento = 1000; 
    char palavraAtual[100];

    while (texto[fim] != '\0') {
        if (isspace(texto[fim]) || texto[fim + 1] == '\0') { 
            if (texto[fim + 1] == '\0' && !isspace(texto[fim])) {
                fim++; //inclui o fim da palavra se n for um delimitador
            }

            comprimento = fim - inicio;
            strncpy(palavraAtual, &texto[inicio], comprimento);
            palavraAtual[comprimento] = '\0'; // Finaliza a string da palavra atual

            // Atualiza maior e menor palavra
            if (comprimento > maxComprimento) {
                maxComprimento = comprimento;
                strcpy(maior, palavraAtual);
            }

            if (comprimento < minComprimento && comprimento > 0) {
                minComprimento = comprimento;
                strcpy(menor, palavraAtual);
            }

            inicio = fim + 1; 
        }
        fim++;
    }

}