/*5 Faça um programa que leia três valores inteiros e chame uma função que 
receba estes 3 valores de entrada e retorne eles ordenados, ou seja, o menor 
valor na primeira variável, o segundo menor valor na variável do meio, e o maior 
valor na última variável. A função deve retornar o valor 1 se os três valores 
forem iguais e 0 se existirem valores diferentes. Exibir os valores ordenados na 
tela.*/

#include <stdio.h>

int ordenaNum (int *n1, int *n2, int *n3);

int main(){
    int n1, n2, n3;
    int* ptrn1;
    int* ptrn2;
    int* ptrn3;

    //passando os enderecos para os ponteiros
    ptrn1 = &n1;
    ptrn2 = &n2;
    ptrn3 = &n3;

    printf("Ordenamento de valores: \n");
    printf("Entre com 3 valores inteiros: ");
    scanf("%d %d %d", ptrn1, ptrn2, ptrn3);

    if(ordenaNum(ptrn1, ptrn2, ptrn3)){
        printf("Os valores sao iguais");
        
    }else{
        printf("\nOrdenamento: %d %d %d", *ptrn1, *ptrn2, *ptrn3);
    }

    return 0;
}

int ordenaNum(int *n1, int *n2, int *n3){
    int copiaAux; //copia pra auxiliar no ordenamento
    if(*n1>*n3){
        copiaAux = *n3;
        *n3 = *n1;
        *n1 = copiaAux;
    }
    if(*n1>*n2){
        copiaAux = *n2;
        *n2 = *n1;
        *n1 = copiaAux;
    }
    if(*n2>*n3){
        copiaAux = *n3;
        *n3 = *n2;
        *n2 = copiaAux;
    }
    if(*n1 == *n2 && *n2 == *n3){
        return 1;
    }
    return 0;
}