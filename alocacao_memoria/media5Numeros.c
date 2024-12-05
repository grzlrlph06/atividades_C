#include <stdio.h>

int main(){
    int qtdNumeros = 5, contador = 0;
    char resposta;
    float media = 0.0, soma = 0.0;
    float *nums, *numsR;

    nums = (float*) malloc(qtdNumeros*sizeof(float));

    if( nums == NULL){
        printf("Memoria insuficiente");
        exit(1);
    }
    printf("Programa calcula media de 5 numeros");
    printf("Deseja mais/menos (s/n) \n");
    scanf("%c", &resposta);
    if(resposta=='s'){
        printf("Quantidade de numeros: \n");
        scanf("%d", &qtdNumeros);
        numsR = (float*) realloc(nums, qtdNumeros*sizeof(float));
        if(numsR!= NULL){
            nums = numsR;
        }
    }

    if(nums!= NULL){
        while(contador<qtdNumeros){
            printf("\n nota: ");
            scanf("%f", (nums+contador));
            soma = soma+*(nums+contador);
            contador++;
        }
        media = soma/contador;
        printf("media: %f", media);
        free(nums);
    }

    return 0;
}