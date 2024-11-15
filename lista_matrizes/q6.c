/*6. Dizemos que uma matriz quadrada inteira é um quadrado mágico (1) se a 
soma dos elementos de cada linha, a soma dos elementos de cada coluna e a 
soma dos elementos das diagonais principal e secundária são todas iguais.
Dada uma matriz quadrada A5x5 , verificar se A é um quadrado mágico.*/

#include <stdio.h>
#define tamanho 5

void somaLinhaColunaDiagonal(int m[tamanho][tamanho]);
int verificaQuadradoMagico (int somaLinha[], int somaColuna[], int somaDiagonalPrincipal, int somaDiagonalSecundaria);

int main(){
    int matriz[tamanho][tamanho];
    
    printf("Entrada da matriz: \n");
    for (int i=0; i<tamanho; i++){
        for (int j=0; j<tamanho; j++){
            printf("[%d][%d]=", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    somaLinhaColunaDiagonal(matriz);

    return 0;
}

int verificaQuadradoMagico(int somaLinha[], int somaColuna[], int somaDiagonalPrincipal, int somaDiagonalSecundaria){
    int somaVerificacao= somaLinha[0]; //atribui a soma da primeira linha para verificar as demais

    //verifica tanto o vetor das linhas quanto das colunas
    for(int i=0; i<tamanho; i++){
        if(somaLinha[i]!= somaVerificacao || somaColuna[i]!=somaVerificacao){
            return 0;
        }
    }

    if(somaDiagonalPrincipal!=somaVerificacao || somaDiagonalSecundaria!=somaVerificacao){
        return 0;
    }

    return 1;
}


void somaLinhaColunaDiagonal(int m[tamanho][tamanho]){
    int somaLinha[tamanho] = {0}, somaColuna[tamanho]={0}, somaDiagonalPrincipal=0, somaDiagonalSecundaria=0;

    //soma das linhas e colunas
    for (int i=0; i<tamanho; i++){
        for (int j=0; j<tamanho; j++){
            somaLinha[i]+=m[i][j];
            somaColuna[j] += m[i][j];
        }
    }

    //soma diagonal principal
    for(int i=0; i<tamanho; i++){
        for(int j=0; j<tamanho; j++){
            if(i==j){
                somaDiagonalPrincipal+= m[i][j];
            }
        }
    }

    //soma diagonal secundaria 
    for(int i=0; i<tamanho; i++){
            somaDiagonalSecundaria+= m[i][tamanho-i-1]; 
    }

    if(verificaQuadradoMagico(somaLinha, somaColuna, somaDiagonalPrincipal, somaDiagonalSecundaria)){
        printf("e um quadrado magico");
    }else{
        printf("nao e um quadrado magico");
    }
}