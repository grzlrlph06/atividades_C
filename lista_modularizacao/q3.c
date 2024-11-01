/*Um número perfeito é um número inteiro para o qual a soma de todos os seus divisores positivos 
próprios (excluindo-o) é igual ao próprio número. Por exemplo, o número 6 é um número perfeito, 
pois: 6 = 1 + 2 + 3. O próximo número perfeito é o 28, pois: 28 = 1 + 2 + 4 + 7 + 14.
Escreva um programa em C com as seguintes funções:
- Função para ler um número inteiro e verifique se ele é par, caso seja impar obrigue o 
usuário a digitar outro número até que um número par seja digitado;
- Função para verificar se o número digitado é perfeito e imprima uma mensagem na 
tela indicando se o número digitado é perfeito ou não.*/

#include <stdio.h>

int num=3, div=0;

int recebeNumero();
void verificaNumeroPerfeito(int numero);

int main(){
    num=recebeNumero();
    verificaNumeroPerfeito(num);
    return 0;
}


int recebeNumero(){
    while(num%2!=0){
        printf("Insira um numero inteiro par: ");
        scanf("%d", &num);
        if(num%2==0){
            return num;
        }else{
            printf("\nValor invalido! Tente novamente\n");
            continue;
        }
    }
    return 0;
}

void verificaNumeroPerfeito(int numero){
    for (int i=1; i<numero; i++){
        if(numero%i==0){
            div = div+i;
        }
    }
    if(div==numero){
        printf("%d e um numero perfeito", numero);
    }else{
        printf("%d nao e um numero perfeito", numero);
    }

}