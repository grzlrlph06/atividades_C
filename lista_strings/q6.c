/*6. Faça um programa que, dada uma string, diga se ela e um palíndromo ou não. 
Lembrando que um palíndromo e uma palavra que tenha a propriedade de poder ser lida 
tanto da direita para a esquerda como da esquerda para a direita. 
Exemplo: ovo, arara, Anotaram a data da maratona.*/

#include <stdio.h>
#include <string.h>

#define MAX 100

int main()
{
    int meio;
    char palavra[MAX];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    int n_letras = strlen(palavra);

    if(n_letras%2==0){
        meio = n_letras /2;
    }else{
        meio = (n_letras+1)/2;
    }
    for(int i=0; i< meio; i++){
        if(palavra[i]!= palavra[n_letras-1-i]){
            printf("Nao e palindromo!");
            break;
        }else{
            if(i== meio-1)
                printf("e palindromo!");
        }
    }

    return 0;
}
