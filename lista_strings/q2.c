#include <stdio.h>
#include <stdlib.h>
#define tamanho 10
#define linha 5

void carroEconomico(char modelo[linha][tamanho], float quilometragem[linha]); //calcula qual e o carro mais economico
void consumo(char modelo[linha][tamanho], float quilometragem[linha], float distancia); //consumo de cada carro percorrendo 1000km

int main()
{
    char modelo[linha][tamanho]={"corolla", "gol", "idea", "onix", "uno"};
    //consumo: km/litro
    float quilometragem[linha]={12.3,13.7, 7.4, 13.6, 13.9}, distancia = 1000.0;

    carroEconomico(modelo, quilometragem);
    consumo(modelo, quilometragem, distancia);
    return 0;
}

void carroEconomico(char modelo[linha][tamanho], float quilometragem[linha]){
    float maisEconomico = 0.0;
    int indice;

    for (int i=0; i<linha; i++){
        if(quilometragem[i]>maisEconomico){
            maisEconomico=quilometragem[i];
            indice=i;
        }
    }
    printf("O modelo mais economico e: %s\n", modelo[indice]);

}


void consumo(char modelo[linha][tamanho], float quilometragem[linha], float distancia){
    float consumo[linha];

    //calculo do consumo
    for (int i=0; i<linha; i++){
        consumo[i]=distancia/quilometragem[i];
    }

    //consumo de cada carro percorrendo 1000km
    for(int i=0; i<linha; i++){
            printf("%s - %.2f litros em 1000km\n", modelo[i], consumo[i]);
    }
    }

