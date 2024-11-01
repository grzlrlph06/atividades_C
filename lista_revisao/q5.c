#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int verificacao, inicio, valorAdv, inicioIntervalo=1, fimIntervalo=100;

    srand(time(NULL)); // pro gerador de numeros nao ficar viciado

    printf("*************** Akinator de numeros: ***************");
    printf("\n\nPense em um numero de 1 a 100 que eu irei adivinha-lo. \nQuando estiver pronto, aperte [1]");
    scanf("%d", &inicio);

    //utilizando a funcao rand para gerar o primeiro valor 
    valorAdv = inicioIntervalo + rand() % (fimIntervalo-inicioIntervalo+1);
    
    while(inicio == 1 ){
        printf("O numero que voce pensou e: %d", valorAdv);
        printf("\n Caso eu tenha acertado, digite [1].  \n Caso eu tenha escolhido um numero mais alto, digite [2]  \nCaso eu tenha escolhido um numero mais baixo, digite [3]\n");
        scanf("%d", &verificacao);
        switch (verificacao)
        {
        case 1:
        inicio = 2;
        break;
        case 2:
        valorAdv--;
        fimIntervalo = valorAdv;
        valorAdv = inicioIntervalo + rand() % (fimIntervalo-inicioIntervalo+1);
        break;
        case 3:
        valorAdv++;
        inicioIntervalo = valorAdv;
        valorAdv = inicioIntervalo + rand() % (fimIntervalo-inicioIntervalo+1);
        break;
        default:
        printf("Voce inseriu codigo invalido, tente novamente");
        break;
        } 
    }

    return 0;
}