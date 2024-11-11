/*Criar e utilizar num programa uma função que receba uma sequência de n números e mude a sequência para o fatorial de cada uns dos números da sequência (o comprimento máximo da sequência é 100 pelo que n tem que ser um número menor que 100). Exemplo: sequência inicial {2,5,7}  sequência final {2, 120, 5040}*/

#include <stdio.h>
#define TAMANHO 100 //tamanho padrao p/ vetor

int fat(int n); //calcula fatorial
void converteFatorial(int v[], int qtdValor); //converte a sequencia para o seu fatorial


int fatorial = 1; 

int main(){
    int v[TAMANHO], n=101;

    while (n>100){
        printf("Digite a quantidade de numeros que serao inseridos: ");
        scanf("%d", &n);
        if(n>100){
            printf("Valor invalido. Tente novamente!");
        }
    }

    for (int i=0; i<n; i++){
        printf("Insira o numero %d: ", i+1);
        scanf("%d", &v[i]);
    }

    converteFatorial(v, n);

    return 0;
}

int fat(int n){
    fatorial=1;
    for (int i=1; i<=n; i++){
        fatorial = fatorial*i;
    }
    return fatorial;
}

void converteFatorial(int v[], int qtdValor){
    for (int i=0; i<qtdValor; i++){
        printf("%d ", fat(v[i]));
    }
}



