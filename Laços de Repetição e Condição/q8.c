#include <stdio.h>
#include <stdlib.h>
/* O programa deve receber como entrada três notas de cada aluno em uma linha;
Deve perguntar ao usuário se deseja inserir as notas de outro aluno, e:
Caso a resposta seja “sim” deve solicitar os dados do próximo aluno.
Caso a resposta seja “não” deve mostrar a maior e a menor nota do primeiro, 
do segundo, e do terceiro exercício e a maior e a menor média.*/

int main()
{
        float n1, n2, n3, maiorN1, maiorN2, maiorN3,
    menorN1=90, menorN2=90, menorN3=90,
    maiorMedia, menorMedia=101, mediaFinal;
    int cont=0;
    char resp='C';

    while(resp!='N'){

            printf("Insira as 3 notas dos exercicios: ");
            scanf("%f %f %f", &n1, &n2, &n3);

        mediaFinal = (n1+n2+n3)/3;
        if(cont==0){
                    maiorN1=n1;
                    maiorN2=n2;
                    maiorN3=n3;
                    maiorMedia=mediaFinal;
                    }


                if (mediaFinal<menorMedia){
                    menorMedia=mediaFinal;
                }

                if(mediaFinal>maiorMedia){
                    maiorMedia=mediaFinal;
                }

                if(n1<menorN1){
                        menorN1=n1;
                }
                if(n2<menorN2){
                        menorN2=n2;
                }
                if(n3<menorN3){
                        menorN3=n3;
                }
                if(n1>maiorN1){
                        maiorN1=n1;
                }
                if(n2>maiorN2){
                        maiorN2=n2;
                }
                if(n3>maiorN3){
                        maiorN3=n3;
                }
                cont++;
                printf("\nVoce deseja inserir as notas de outro aluno? [S]Sim [N]Nao\n");
                scanf(" %c", &resp);


    }




    printf("\nMaior media: %0.2f \nMenor media: %0.2f", maiorMedia, menorMedia);
    printf("\nMaior n1: %0.2f \nMenor n1: %0.2f", maiorN1, menorN1);
    printf("\nMaior n2: %0.2f \nMenor n2: %0.2f", maiorN2, menorN2);
    printf("\nMaior n3: %0.2f \nMenor n3: %0.2f", maiorN3, menorN3);
    return 0;
}
