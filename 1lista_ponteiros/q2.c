/*2 Escreva uma função que encontra um valor em um vetor de inteiros e retorna um ponteiro para o primeiro endereço onde este valor foi encontrado ou NULL caso o valor não esteja no vetor;
- A função recebe como parâmetro dois ponteiros para inteiros (os endereços inicial e final) e deve utilizar notação de ponteiros não de vetores;
- Deve ser criada uma função main() para testar a função implementada. Na função main deve ser declarado um vetor de tamanho 10, com três ocorrências do valor 2;
- A main() deve utilizar a função criada para encontrar  e imprimir os endereços de memória de todas as ocorrências do valor 2, em um laço, até que todo o vetor tenha sido pesquisado.
- Defina a constante NULL se necessário.*/

#include <stdio.h>

void procuraValor(int *primeiro, int *ultimo);

int main(){
    int vetor[10]={2, 0, 0, 5, 3, 5, 76, 9, 2, 2};

    procuraValor(&vetor[0], &vetor[9]);

    return 0;
}

void procuraValor(int *primeiro, int *ultimo){

    for(; primeiro<=ultimo; primeiro++){
        if(*primeiro == 2){
            printf("ocorrencia de '2' em %d\n", &*primeiro);
        }
    }
    
}