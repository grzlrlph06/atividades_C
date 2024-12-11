/*1 Escreva uma função que imprime os elementos de um vetor de float a partir de um endereço inicial (ponteiro) até um endereço final;
 A função recebe como parâmetros dois ponteiros para float (os endereços inicial e final) e deve utilizar notação de ponteiros não de vetores;
- Deve ser criada uma função main() para testar a função implementada com três vetores de tamanhos e conteúdos diferentes;
- A função main deve imprimir duas partes distintas de cada um dos três vetores, utilizando a função criada.*/

#include <stdio.h>

void imprimeVetor(float *primeiro, float *ultimo); //aqui eu requisito o valor nesse determinado endereco

int main(){
    float nums[5]={7.0, 245.90, 45.7, 92.4, 4.5};
    imprimeVetor(&nums[0], &nums[4]); //entro com os enderecos do primeiro e ultimo valor
    return 0;

}

void imprimeVetor(float *primeiro, float *ultimo){
    for(;primeiro<=ultimo; primeiro++){
        printf("%.2f\n", *primeiro);
    }
}