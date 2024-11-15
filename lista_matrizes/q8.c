/*8. Faça uma função para multiplicar duas matrizes. A função recebe como parâmetro as 
três matrizes e as dimensões das duas primeiras matrizes e verificar se as matrizes 
podem ser multiplicadas e apresentar uma mensagem de erro, caso não seja possível. 
O resultado da multiplicação das duas primeiras matrizes deve ser armazenado na terceira matriz. 
A função deve retornar falso se não for possível multiplicar as matrizes, e verdadeiro caso contrário.
A função não deve ler as matrizes, imprimir o resultado, nem a mensagem de erro. 
Isto deve ser feito na função principal.*/

#include <stdio.h>
#define tamanho 100

int multiplicaMatrizes(int m1[tamanho][tamanho], int m2[tamanho][tamanho], int m3[tamanho][tamanho], int dim1[2], int dim2[2]);

int m3[tamanho][tamanho]={0}, dim3[2]={0}; //deixei como global para poder alterar dentro da funcao

int main(){
    int dim1[2], dim2[2], m1[tamanho][tamanho], m2[tamanho][tamanho];

    //dimensao x,y para a primeira matriz
    int i=0;
    printf("Insira as dimensoes x,y para m1: ");
    scanf("%d %d", &dim1[i], &dim1[i+1]);
    
    //dimensao x,y para a segunda matriz
    int j=0;
    printf("Insira as dimensoes x,y para m2: ");
    scanf("%d %d", &dim2[j], &dim2[j+1]);

    printf("Entrada da primeira matriz: ");
    for(int i=0; i<dim1[0]; i++){
        for (int j=0; j<dim1[1]; j++){
            printf("[%d][%d]= ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Entrada da segunda matriz: \n");
    for(int i=0; i<dim2[0]; i++){
        for (int j=0; j<dim2[1]; j++){
            printf("[%d][%d]= ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }

   if (multiplicaMatrizes(m1, m2, m3, dim1, dim2)){
    printf("Resultado da multiplicacao: \n");
    for(int i=0; i<dim3[0]; i++){
        for (int j=0; j<dim3[1]; j++){
            printf(" %d ", m3[i][j]);
        }
        printf("\n");
    }
   }else{
    printf("Matrizes invalidas para multiplicacao");
   }

    return 0;
}

int multiplicaMatrizes(int m1[tamanho][tamanho], int m2[tamanho][tamanho], int m3[tamanho][tamanho], int dim1[2], int dim2[2]){
    if(dim1[1]!=dim2[0]){
        return 0;
    }

    //definindo as dimensoes da matriz m3
    dim3[0]=dim1[0];
    dim3[1]=dim2[1];

    //multiplicacao das matrizes
    for(int i=0; i<dim1[0]; i++){
        for (int j=0; j<dim2[1]; j++){
            m3[i][j]=0;
            for (int k=0; k<dim1[1]; k++){
                m3[i][j] += m1[i][k]*m2[k][j];
            }
        }
    }
    return 1;
}