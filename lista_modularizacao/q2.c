/*Um centro materno-infantil deseja criar um programa para recomendar aos médicos sobre o tipo de parto 
a ser adotado. O mecanismo de recomendação utiliza o peso do feto e quantidade de semanas de gestação para 
sugerir o tipo de parto mais indicado. Desenvolva um programa na linguagem C, o qual deverá:
- Criar uma função para ler o peso do feto em gramas e a quantidade de semanas da gestação.
- Criar uma  função para:
    -Caso o peso do feto seja inferior que 100 gramas ou a quantidade de semanas menor que 28, 
    o programa deverá exibir a mensagem "Parto não deverá ser realizado, reavaliar clinicamente" 
    e encerrar a execução.
    -Caso contrário, o programa deverá calcular a quantidade de meses 
    (considerar 4 semanas para cada mês) do feto e exibir uma das recomendações abaixo:
        .Peso superior a 2.500 gramas e com mais de 7 meses: "Parto normal";
        .Peso superior a 2.500 gramas e abaixo ou com 7 meses: "Parto Cesariana";
        .Entre 2.000 gramas e 1.500 gramas e acima de 9 meses: "Parto normal";
        .Qualquer outra combinação, "Parto Cesariana".
Utilizar as duas funções num programa.*/

#include <stdio.h>

double massa;
int semana;

void cadastroFeto();
int verificaFeto(double massa, int semana);

int main(){
    cadastroFeto();
    return 0;
}

void cadastroFeto (){
    printf("Insira a massa do feto em gramas: ");
    scanf("%lf", &massa);
    printf("Agora insira a quantidade de semanas de gestacao: ");
    scanf("%d", &semana);
    verificaFeto(massa, semana);
}

int verificaFeto(double massa, int semana){
    if(massa<100 || semana<28){
        printf("Parto não deverá ser realizado, reavaliar clinicamente");
        return 0;
    }else{
       int meses = semana/4;
        if(massa>2500){
            if(meses>7){
                printf("Parto normal");
                return 1;
            }else{
                printf("Parto cesariana");
                return 1;
            }
        }else if(massa>=1500 && massa<=2000){
                if(meses>=9){
                    printf("Parto normal");
                    return 1;
                }
            }else{
                printf("parto cesariana");
                return 1;
            }
        }
        return 1;
    }


