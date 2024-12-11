/*6 Crie uma função para somar dois arrays. Esta função deve receber dois arrays 
e retornar a soma em um terceiro array. Caso o tamanho do primeiro e segundo array 
seja diferente então a função retornará ZERO (0). Caso a função seja concluída com 
sucesso a mesma deve retornar o valor UM (1). Utilize aritmética de ponteiros para 
manipulação do array.*/

#include <stdio.h>
#define MAX 100

int somaVetor(int *ptr1, int *ptr2, int *ptr3, int cont1, int cont2);


int main(){
    int vet1[MAX]={0}, vet2[MAX]={0}, vet3[MAX]={0}, cont1=0, cont2=0;
    int *ptrVet1;
    int *ptrVet2;
    int *ptrVet3;

    //recebendo os enderecos
    ptrVet1 = &vet1[0];
    ptrVet2 = &vet2[0];
    ptrVet3 = &vet3[0];

    printf("Entrada do primeiro array\n");
    while(1){
        printf("[%d] (caso queira encerrar o registro, digite 0): ", cont1);
        scanf("%d", (ptrVet1+cont1));

        //verificando se o usuario colocou 0
        if(*(ptrVet1+cont1)!=0){
            cont1++;
        }else{
            break;
        }
    } 

    printf("Entrada do segundo array\n");
    while(1){
        printf("[%d](caso queira encerrar o registro, digite 0): ", cont2);
        scanf("%d", (ptrVet2+cont2));

        if(*(ptrVet2+cont2)!=0){
            cont2++;
        }else{
            break;
        }
    } 

    //chamando a funcao
    if(somaVetor(ptrVet1, ptrVet2, ptrVet3, cont1, cont2)){
        return 0;
    }else{
        printf("Vetores com quantidades diferentes!");
    }


    return 0;
}


int somaVetor(int *ptr1, int *ptr2, int *ptr3, int cont1, int cont2){
    if(cont1!=cont2){
        return 0;
    }

    for (int i=0; i<=cont1; i++){
        *(ptr3+i) = *(ptr1+i) + *(ptr2+i);
    }

    printf("\nVetor Soma:\n");
    for (int i=0; i<=cont1; i++){
        printf("[%d]: %d\n", i, *(ptr3+i));
    }
    return 1;
}