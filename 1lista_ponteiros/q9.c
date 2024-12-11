/*9  Escreva uma função que recebe uma string de caracteres e uma letra e 
devolve um vetor de inteiros contendo as posições (índices no vetor da string) 
onde a letra foi encontrada) e um inteiro contendo o tamanho do vetor criado 
(total de letras iguais encontradas). Utilize o retorno de um vetor para retornar 
os índices e um ponteiro para guardar o tamanho do vetor.*/

#include <stdio.h>
#include <string.h>
#define MAX 1000

void verificaLetra (char *ptrPalavra, char *ptrLetra, int *ptrEndereco, int *ptrOcorrencia, char palavra[]);

int main(){
    char palavra[MAX], letra;
    int endereco[MAX], ocorrencia;

    char* ptrPalavra;
    char* ptrLetra;
    int* ptrEndereco;
    int* ptrOcorrencia;

    //vinculando endereco
    ptrPalavra = &palavra[0];
    ptrLetra = &letra;
    ptrEndereco = &endereco[0];
    ptrOcorrencia = &ocorrencia;


    //entrada
    printf("Digite uma palavra:");
    scanf("%s", palavra);
    getchar();
    printf("Agora digite uma letra ou caracter que deseja procurar na string acima: ");
    scanf("%c", ptrLetra);

    verificaLetra(ptrPalavra, ptrLetra, ptrEndereco, ptrOcorrencia, palavra);

    return 0;
}

void verificaLetra (char *ptrPalavra, char *ptrLetra, int *ptrEndereco, int *ptrOcorrencia, char palavra[]){
    int tamanhoString = strlen(palavra);
    int cont=0; // pra acessar as casas do vetor que armazena os indices
    for(int i=0; i<tamanhoString; i++){
        if(*(ptrPalavra + i)==*ptrLetra){
            *(ptrEndereco+cont) = i;
            cont++;
            (*ptrOcorrencia)++; //incrementa a variavel apontada pelo ponteiro
        }
    }
    printf("\nIndices onde apareceu %c: ", *ptrLetra);
    for(int i=0; i<*ptrOcorrencia; i++){
        printf(" %d ", *(ptrEndereco+i));
    }
    printf("\nOcorrencias de %c: %d", *ptrLetra, *ptrOcorrencia);
}



