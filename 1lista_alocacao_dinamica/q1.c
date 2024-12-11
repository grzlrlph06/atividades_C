/*1.Faça um programa que calcula a média e o desvio padrão das notas de uma turma;
- O programa deve solicitar no início a quantidade de alunos na turma e alocar 
dinamicamente um vetor de float onde as notas dos alunos digitadas devem ser 
armazenadas;
- Você deve criar uma função “mediaDesvio” para calcular a média e o desvio 
padrão e retornar estes valores através de parâmetros passados por referência 
(ponteiros). A função recebe como parâmetro o ponteiro para o vetor, a quantidade 
de elementos no vetor, e dois ponteiros: media e desvio onde deve guardar os 
resultados;
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void mediaDesvio (float *ptrNotas, float *ptrMedia, float *ptrDesvio, int qtdNotas);

int main(){
    float media, desvio;
    float *notas;
    float *ptrMedia;
    float *ptrDesvio;
    int qtdAlunos;

    printf("Insira a quantidade de alunos que voce deseja inserir a nota: ");
    scanf("%d", &qtdAlunos);
    notas = (float *) malloc (qtdAlunos * sizeof(float));
    if (notas == NULL){
        printf("Nao foi possivel alocar memoria. Tente novamente!");
        return 0;
    }

    float *ptrNotas;

    //inicializando os ponteiros
    ptrNotas = &notas[0];
    ptrMedia = &media;
    ptrDesvio = &desvio;

    getchar();
    //registrando as notas
    printf("\nRegistro das notas:");
    for(int i=0; i<qtdAlunos; i++){
        printf("\n%d nota: ", i+1);
        scanf("%f", ptrNotas+i);
    }

    mediaDesvio(ptrNotas, ptrMedia, ptrDesvio, qtdAlunos);

    return 0;
}

void mediaDesvio (float *ptrNotas, float *ptrMedia, float *ptrDesvio, int qtdNotas){
    float soma=0.0;
    //calculando a media
    for(int i=0; i<qtdNotas; i++){
        soma += *(ptrNotas+i);
    }

    *ptrMedia = soma/qtdNotas;


    //desvio padrao
    float somaQuadrado=0.0;
    //(xi - media)^2
    for (int i=0; i<qtdNotas; i++){
        somaQuadrado = somaQuadrado + pow((*(ptrNotas+i)-*ptrMedia), 2);
    }
    //(xi - media)^2/n
    *ptrDesvio = sqrt((somaQuadrado/qtdNotas));

    printf("\nForam armazenadas %d notas", qtdNotas);
    printf("\nMedia: %.2f", *ptrMedia);
    printf("\nDesvio padrao: %.2f", *ptrDesvio);
}