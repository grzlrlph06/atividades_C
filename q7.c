#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*Em uma disciplina com três exercícios, um professor deseja saber qual a maior
    e a menor nota de cada exercício e qual a maior e a menor média final.
    Faça um programa para auxiliá-lo nesta tarefa.*/
    float n1=0, n2, n3, maior1, maior2, maior3, menor1=70,
    menor2=70, menor3=70, mediaFinal, maiorMedia=0, menorMedia=70;
    int cont;

    do{
        printf("Insira as 3 notas dos exercicios(Caso queira encerrar o programa, digite -1 para a primeira nota): ");
        scanf("%f %f %f", &n1, &n2, &n3);
        if(n1<0) break;
        else{
                mediaFinal = (n1+n2+n3)/3;
                if(cont==0){
                    maior1=n1;
                    maior2=n2;
                    maior3=n3;
                    maiorMedia=mediaFinal;
                    }

                if (mediaFinal<menorMedia){
                    menorMedia=mediaFinal;
                }

                if(mediaFinal>maiorMedia){
                    maiorMedia=mediaFinal;
                }

                if(n1<menor1){
                        menor1=n1;
                }
                if(n2<menor2){
                        menor2=n2;
                }
                if(n3<menor3){
                        menor3=n3;
                }
                if(n1>maior1){
                        maior1=n1;
                }
                if(n2>maior2){
                        maior2=n2;
                }
                if(n3>maior3){
                        maior3=n3;
                }
    }
    cont++;

    }while(n1!=-1);

    printf("Maior media: %0.2f \nMenor media: %0.2f", maiorMedia, menorMedia);
    printf("\nMaior n1: %0.2f \nMenor n1: %0.2f", maior1, menor1);
    printf("\nMaior n2: %0.2f \nMenor n2: %0.2f", maior2, menor2);
    printf("\nMaior n3: %0.2f \nMenor n3: %0.2f", maior3, menor3);

    return 0;
}
