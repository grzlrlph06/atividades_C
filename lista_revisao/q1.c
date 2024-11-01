#include <stdio.h>

int main(){
    int num, soma;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    for(int i=1; i<num; i++){
        if(num%i==0){
            soma+=i;
        }
    }

    if(soma==num){
        printf("%d e um numero perfeito", num);
    }else{
        printf("%d nao e um numero perfeito", num);
    }
    return 0;
}