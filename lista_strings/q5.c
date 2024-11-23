/*5. O código de Cesar é  uma das mais simples e conhecidas técnicas de criptografia. 
É um tipo de substituição na qual cada letra do texto é substituída por outra, 
que se apresenta no alfabeto abaixo dela um número fixo de vezes. 
Por exemplo, com uma troca de três posições, ‘A’ seria substituído por ‘D’, ‘B’ se 
tornaria ‘E’, e assim por diante.
Implemente um programa que faça uso desse Código de Cesar (3 posições), entre com uma string e retorne a string codificada. Exemplo:
String: a ligeira raposa marrom saltou sobre o cachorro cansado
Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR*/

#include <stdio.h>
#include <string.h>
#define MAX 100

void criptografia(char string[MAX]);

int main(){
    char str[MAX];

    printf("Digite sua string: ");
    fgets(str, MAX, stdin);

    criptografia(str);

    return 0;
}

void criptografia(char string[MAX]){
    int n = strlen(string);

    for(int i=0; i<n; i++){
       if(string[i]>='a' && string[i]<='z'){
        string[i]=((string[i] - 'a' + 3) % 26) + 'a';
       }else if(string[i]>='A' && string[i]<='Z'){
        string[i] = ((string[i] - 'A' + 3) % 26) + 'A';
       }
    }

    printf("Mensagem criptografada: %s", string);
}

