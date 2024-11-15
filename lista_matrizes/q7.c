/*7. Os elementos aij de uma matriz inteira Anxn representam os custos de transporte da cidade i para a cidade j. Dados n itinerários, cada um com k cidades, calcular o custo total para cada itinerário.

Exemplo:
4    1    2    3
5    2    1    400
2    1    3    8
7    1    2    5

O custo do itinerário 0 3 1 3 3 2 1 0 é

a03 + a31 + a13 + a33 + a32 + a21 + a10 = 3 + 1 + 400 + 5 + 2 + 1 + 5 = 417*/
#include <stdio.h>

#define MAX_CIDADES 10

// Função para calcular o custo total de um itinerário
int calcular_custo_total(int matriz[MAX_CIDADES][MAX_CIDADES], int itinerario[], int n) {
    int custo_total = 0;
    // Itera sobre o itinerário, somando os custos das conexões entre as cidades
    for (int i = 0; i < n - 1; i++) {
        int origem = itinerario[i];
        int destino = itinerario[i + 1];
        custo_total += matriz[origem][destino];
    }
    return custo_total;
}

int main() {
    int n, k;

    // Solicita ao usuário o número de cidades (n) e itinerários (k)
    printf("Digite o número de cidades (n): ");
    scanf("%d", &n);

    printf("Digite o número de itinerários (k): ");
    scanf("%d", &k);

    // Matriz de custos de transporte
    int matriz[MAX_CIDADES][MAX_CIDADES];

    // Solicita ao usuário os custos de transporte entre as cidades
    printf("Digite a matriz de custos (custos[i][j] para ir da cidade i para j):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Custo de %d para %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Itinerário do usuário
    int itinerario[MAX_CIDADES];

    printf("Digite o itinerário (as cidades que serão visitadas, separados por espaço): ");
    for (int i = 0; i < k; i++) {
        scanf("%d", &itinerario[i]);
    }

    // Calcular e exibir o custo total
    int custo_total = calcular_custo_total(matriz, itinerario, k);
    printf("O custo total do itinerário é: %d\n", custo_total);

    return 0;
}

