/* 3. Leia uma cadeia de caracteres no formato “DD/MM/AAAA” e copie o dia, 
mês e ano para 3 variáveis inteiras. Antes disso, verifique se as barras 
estão no lugar certo, e se DD, MM e AAAA são numéricos.*/

#include <stdio.h>
#include <string.h>

int verificarFormatoData(char data[11]);

int main() {
    char data[11];
    int dia, mes, ano;

    printf("Digite uma data (DD/MM/AAAA): ");
    scanf("%s", data);

    if(verificarFormatoData(data)){
        sscanf(data, "%2d/%2d/%4d", &dia, &mes, &ano);
        printf("Dia: %d\nMes: %d\nAno: %d", dia, mes, ano);
    }

    return 0;
}

int verificarFormatoData(char data[11]){
    //verifica a quantidade de caracteres da string
    if(strlen(data)!=10){
        printf("Data invalida!");
        return 0;
    }
    //verifica se as barras estao no lugar certinho
    if(data[2]!= '/' || data[5]!='/'){
        printf("Posicao da barra invalida!");
        return 0;
    }

    //verifica se os demais caracteres sao numeros validos
    for (int i=0; i<10; i++){
        if(i==2 || i==5){
            continue;
        }else{
            if(data[i]<'0' || data[i]>'9'){
                printf("Valores para data invalidos!");
                return 0;
            }
        }
    }
    return 1;
}
