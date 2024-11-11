/*Tentando descobrir se um dado era viciado, um dono de cassino o lançou n vezes. Dados os n resultados dos lançamentos, determinar o número de ocorrências de cada face.*/

#include <stdio.h>
#define TAMANHO 100

void verificaFaces(int faces[], int qtd);

int main(){
    int facesLancadas[TAMANHO], qtdLances=101;

    while(qtdLances>100){
        printf("Digite a quantidade de vezes que o dono do cassino rolou o dado:");
        scanf("%d", &qtdLances);
        if(qtdLances>100){
            printf("Quantidade invalida. Tente novamente!");
        }
    }

    for (int i = 0; i<qtdLances; i++){
        printf("%d vez: ", i+1);
        scanf("%d", &facesLancadas[i]);
    }
    
    verificaFaces(facesLancadas, qtdLances);
    
    return 0;
}

void verificaFaces(int faces[], int qtd){
    int qtdFaces[2][6]={0}; //matriz para mostrar quantas vezes caiu cada face

    for(int i = 0; i<6; i++){
        qtdFaces[0][i] = i + 1; //inicializando a primeira linha com as faces do dado
    }


    //verificando os valores sorteados
    for (int i=0; i<qtd; i++){
        int num = faces[i];
        //verificando se o valor e valido
        if(num>=1 && num<=6){
            qtdFaces[1][num-1]++; //acessa a face correta e incrementa
        }  
    }

    printf("Ocorrencia das faces: \n");
    for (int i = 0; i < 6; i++) {
        printf("Face %d: %d vezes\n", qtdFaces[0][i], qtdFaces[1][i]);
    }

    
}