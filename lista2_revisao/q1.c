/*1. Gerenciador de Estoque de Loja
Crie um programa que simule o gerenciamento de um estoque de loja. O programa deve:
Permitir cadastrar até 50 produtos, cada um com nome (string), código (inteiro) e quantidade em estoque (inteiro).
Implementar as seguintes funções:
int cadastrarProduto(char produtos[][50], int codigos[], int quantidades[]); // a função deve retornar à quantidade de produtos que foram cadastrados
void buscarProduto(char produtos[][50], int codigos[], int totalProdutos);
void atualizarEstoque(int codigos[], int quantidades[], int totalProdutos);
Exibir relatórios de estoque.*/

#include <stdio.h>
#include <string.h>
#define MAXPRODUTOS 50
#define TAMANHO 100

int cadastrarProduto(char produtos[][TAMANHO], int codigos[], int quantidades[]);
void buscarProduto(char produtos[][TAMANHO], int codigos[], int quantidades[], int totalProdutos);
int atualizarEstoque (char produtos[][TAMANHO], int quantidades[], int codigo, int totalProdutos);
void relatorio(char produtos[][TAMANHO], int quantidades[], int codigos[], int totalProdutos);

char produtos[MAXPRODUTOS][TAMANHO];
int codigos[MAXPRODUTOS], quantidades[MAXPRODUTOS], numProdutos=0;

int main(){
    int i=1, codigoConsulta;
    
    while(i!=0){
        printf("\n\nESTOQUE DE PRODUTOS\n");
        printf("Escolha uma das operacoes:\n");
        printf("[0] Encerrar programa\n");
        printf("[1] Cadastrar produto\n");
        printf("[2] Buscar produto\n");
        printf("[3] Atualizar estoque\n");
        printf("[4]Relatorio\n");
        scanf("%d", &i);

        switch (i)
        {
        case 0:
            printf("Programa encerrado. Ate a proxima!");
            return 0;
        case 1: 
            if(cadastrarProduto(produtos, codigos, quantidades)){
                printf("Produto cadastrado com sucesso!\n");
            }else{
                printf("Quantidade de produtos cadastrados excedida!\n");
            }
            break;
        case 2: 
            buscarProduto(produtos, codigos, quantidades, numProdutos);
            break;
        case 3:
            printf("Codigo do produto: ");
            scanf("%d", &codigoConsulta);
            if(atualizarEstoque(produtos, quantidades, codigoConsulta, numProdutos)){
                printf("\nEstoque atualizado com sucesso!\n");
                printf("Nome: %s\n", produtos[codigoConsulta]);
                printf("Codigo: %d\n", codigoConsulta);
                printf("Quantidade: %d\n",quantidades[codigoConsulta]);
            }else{
                printf("Codigo invalido!\n");
            }
            break;
        case 4:
            relatorio(produtos, quantidades, codigos, numProdutos);
            break;
        default:
            printf("Codigo invalido! Tente novamente.");
            break;
        }
    }

    return 0;
}

int cadastrarProduto(char produtos[][TAMANHO], int codigos[], int quantidades[]){
    if(numProdutos>=MAXPRODUTOS){
        return 0;
    }

    getchar(); 
    printf("Nome do produto: ");
    fgets(produtos[numProdutos], TAMANHO, stdin);
    produtos[numProdutos][strcspn(produtos[numProdutos], "\n")] = '\0'; 

    printf("Quantidade: ");
    scanf("%d", &quantidades[numProdutos]);

    codigos[numProdutos] = numProdutos;
    numProdutos++;
    return 1;
}

void buscarProduto(char produtos[][TAMANHO], int codigos[], int quantidades[], int totalProdutos){
    char nomeConsulta[TAMANHO];

    getchar();
    printf("Digite o nome do produto: ");
    fgets(nomeConsulta, TAMANHO, stdin);
    nomeConsulta[strcspn(nomeConsulta, "\n")] = '\0'; //substitui a quebra de linha por final de palavra

    for (int i =0 ; i<totalProdutos; i++){
        if(strcmp(nomeConsulta, produtos[i])==0){
            printf("\nProduto encontrado:\n");
            printf("\nCodigo: %d\n", codigos[i]);
            printf("Nome: %s\n", produtos[i]);
            printf("Quantidade: %d\n", quantidades[i]);
            return;
        }
    }
    printf("\nProduto nao encontrado\n");
}

int atualizarEstoque(char produtos[][TAMANHO],int quantidades[], int codigo, int totalProdutos){
    if(codigo<0 || codigo>=totalProdutos){
        return 0;
    }
    printf("Nova quantidade para %s: ", produtos[codigo]);
    scanf("%d", &quantidades[codigo]);
    return 1;
}

void relatorio(char produtos[][TAMANHO], int quantidades[], int codigos[], int totalProdutos){
    printf("\nRELATORIO DE ESTOQUE: \n");
    printf("Codigo\tNome\t\tQuantidade\n");
    for (int i = 0; i < totalProdutos; i++) {
        printf("%d\t%-10s\t%d\n", codigos[i], produtos[i], quantidades[i]);
    }
}