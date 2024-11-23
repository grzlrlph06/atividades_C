/*4. Faça um programa que contenha um menu com as seguintes opções:
(a) Ler uma string S1 (tamanho máximo 20 caracteres); ´
(b) Imprimir o tamanho da string S1;
(c) Comparar a string S1 com uma nova string S2 fornecida pelo usuário e imprimir o resultado da comparação;
(d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenação;
(e) Imprimir a string S1 de forma reversa;
(f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse ser informado pelo usuário;
(g) Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2. Os caracteres C1 e C2 serão lidos pelo usuário;
(h) Verificar se uma string S2 é substring de S1. A string S2 deve ser informada pelo usuário;
(i) Retornar uma substring da string S1. Para isso o usuário deve informar a partir de qual posição deve ser criada a substring e qual é o tamanho da substring*/

#include <stdio.h>
#include <string.h>
#define MAX 20 

void tamanhoString(char s[MAX]){
    //b) tamanho da primeira
    printf("Tamanho da primeira string: %d\n", strlen(s));
}

void comparaStrings(char s1[MAX], char s2[MAX]){
    //c) comparacao
    if(strcmp(s1, s2)!=0){
        printf("%s e %s nao sao iguais\n", s1, s2);
    }else{
        printf("%s e %s sao iguais\n", s1, s2);
        
    }
}

void concatenarStrings(char s1[MAX], char s2[MAX]){
    //d) concatenacao das duas
    strcat(s1, s2);
    printf("Concatenadas: %s\n", s1);
}

void stringReversa(char s[MAX]){
    //e) inverso de s1
    int n_s1 = strlen(s);
    printf("%s ao contrario: ", s);
    for(int i=n_s1-1; i>=0; i--){
        printf("%c", s[i]);   
    }
    printf("\n");
}

void contaCaracter(char s[MAX], char c){
    //f) contando caracter tal 
    int qtdC1=0, qtd_s=strlen(s);

    for (int i=0; i<qtd_s; i++){
        if(c==s[i]){
            qtdC1++;
        }
    }
    printf ("%c aparece %d vezes em %s\n", c, qtdC1, s);
}

void substituiCaracter(char s1[MAX], char c1, char c2){
    int i=0;
    while(s1[i]!='\0'){
        i++;
        if(s1[i]==c1){
            s1[i]=c2;
            break;
        }
    }
    printf("\nA primeira string com o caracter c1 trocado pelo c2: %s\n", s1);
}

void verificaSubstring(char s1[MAX], char s2[MAX]){
    //h) Verificar se uma string S2 é substring de S1. A string S2 deve ser informada pelo usuário
    if(strstr(s1, s2)){
        printf("\n%s e uma substring de %s\n", s2, s1);
    }else{
        printf("\n%s nao e uma substring de %s\n", s2, s1);
    }

}

void criarSubstring(char s[MAX], int posicaoS, int tamanhoSubstring){
    char substring[MAX] = {0};
    strncpy(substring, s + posicaoS, tamanhoSubstring);
    substring[tamanhoSubstring] = '\0'; 
    printf("Substring: %s\n", substring);
}


int main(){
    char s1[MAX], s2[MAX], c1, c2;
    int posicaoS1, tamanhoSubstringS1;
    printf ("Digite uma palavra: "); 
    scanf ("%s", s1);

    tamanhoString(s1);

    //entrada da segunda palavra
    printf("Digite outra palavra: ");
    scanf ("%s", s2);

    comparaStrings(s1, s2);
    concatenarStrings(s1, s2);
    stringReversa(s1);

    
    getchar();
    printf("Insira um caracter:");
    scanf("%c", &c1);

    contaCaracter(s1, c1);

    getchar();
    printf("Digite um caracter da palavra %s: ", s2);
    scanf("%c", &c2);

    substituiCaracter(s1, c1, c2);
    verificaSubstring(s1, s2);
    

    getchar();
    printf("Selecione a posicao para iniciar o corte da string %s(lembrando que a primeira letra tem indice 0): ", s1);
    scanf("%d", &posicaoS1);
    printf("Agora indique o tamanho da substring de %s: ", s1);
    scanf("%d", &tamanhoSubstringS1);
    criarSubstring(s1, posicaoS1, tamanhoSubstringS1);

    return 0;
}