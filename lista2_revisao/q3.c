/*3. Sistema de Votação Eletrônica
Desenvolva um programa para simular um sistema de votação. Ele deve:
Permitir cadastrar até 10 candidatos (nome e número).
Receber votos por número do candidato.
Contar os votos de forma dinâmica.
Declarar o vencedor e imprimir os resultados.
Funções a implementar:
int cadastrarCandidatos(char nomes[][50], int numeros[]); 
void votar(int numeros[], int votos[], int totalCandidatos);
void exibirResultados(char nomes[][50], int numeros[], int votos[], int totalCandidatos);*/

#include <stdio.h>
#include <string.h>
#define CANDIDATOS 10

int cadastrarCandidatos(char nomes[][50], int numeros[], int *totalCandidatos);
void votar(int numeros[], int votos[], int totalCandidatos);
void exibirResultados(char nomes[][50], int numeros[], int votos[], int totalCandidatos);

char nomes[CANDIDATOS][50];
int numeros[CANDIDATOS], votos[CANDIDATOS] = {0};

int main() {
    int totalCandidatos = 0, opcao;

    while (1) {
        printf("\n\nSISTEMA DE VOTACAO:\n");
        printf("Escolha uma das operacoes abaixo: \n");
        printf("[1] Cadastrar candidatos\n");
        printf("[2] Iniciar votacao\n");
        printf("[3] Exibir resultados\n");
        printf("[0] Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 0:
                printf("Encerrando programa. Ate logo!\n");
                return 0;
            case 1:
                if (cadastrarCandidatos(nomes, numeros, &totalCandidatos)) {
                    printf("Cadastro do candidato realizado com sucesso!\n");
                } else {
                    printf("Quantidade de candidatos excedida!\n");
                }
                break;
            case 2:
                votar(numeros, votos, totalCandidatos);
                break;
            case 3:
                exibirResultados(nomes, numeros, votos, totalCandidatos);
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }
    }

    return 0;
}

int cadastrarCandidatos(char nomes[][50], int numeros[], int *totalCandidatos) {
    if (*totalCandidatos >= CANDIDATOS) {
        return 0;
    }

    getchar(); // Limpa o buffer do teclado
    printf("Nome do candidato: ");
    fgets(nomes[*totalCandidatos], 50, stdin);
    nomes[*totalCandidatos][strcspn(nomes[*totalCandidatos], "\n")] = '\0'; 

    printf("Numero: ");
    scanf("%d", &numeros[*totalCandidatos]);
    (*totalCandidatos)++;
    return 1;
}

void votar(int numeros[], int votos[], int totalCandidatos) {
    int voto;
    while (1) {
        printf("\nVOTACAO:\n");
        printf("CANDIDATOS:\n");
        for (int i = 0; i < totalCandidatos; i++) {
            printf("[%d] - %s\n", numeros[i], nomes[i]);
        }
        printf("Seu voto (0 para encerrar): ");
        scanf("%d", &voto);

        if (voto == 0) {
            printf("Votacao encerrada.\n");
            break;
        }

        // Verifica se o número votado é válido
        int encontrado = 0;
        for (int i = 0; i < totalCandidatos; i++) {
            if (numeros[i] == voto) {
                votos[i]++;
                encontrado = 1;
                break;
            }
        }

        if (!encontrado) {
            printf("Numero invalido! Tente novamente.\n");
        }
    }
}

void exibirResultados(char nomes[][50], int numeros[], int votos[], int totalCandidatos) {
    printf("\nRESULTADO DA ELEICAO:\n");
    printf("Candidato\tNumero\t\tQuantidade de votos\n");

    for (int i = 0; i < totalCandidatos; i++) {
        printf("%-15s %-10d %d\n", nomes[i], numeros[i], votos[i]);
    }
}
