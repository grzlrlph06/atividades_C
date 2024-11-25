#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#define MAX_TAMANHO 20
#define MIN_TAMANHO 8

// Funções
void gerarSenha(int tamanho, char senha[]);
int validarSenha(char senha[]);

int main() {
    char senha[MAX_TAMANHO + 1];
    int tamanho;

    srand(time(NULL)); // Inicializa a semente para geração aleatória

    printf("Digite o tamanho da senha (entre %d e %d): ", MIN_TAMANHO, MAX_TAMANHO);
    scanf("%d", &tamanho);

    if (tamanho < MIN_TAMANHO || tamanho > MAX_TAMANHO) {
        printf("Tamanho invalido! O tamanho deve estar entre %d e %d caracteres.\n", MIN_TAMANHO, MAX_TAMANHO);
        return 1;
    }

    gerarSenha(tamanho, senha);
    printf("Senha gerada: %s\n", senha);

    if (validarSenha(senha)) {
        printf("A senha atende aos criterios.\n");
    } else {
        printf("A senha NAO atende aos criterios.\n");
    }

    return 0;
}

void gerarSenha(int tamanho, char senha[]) {
    const char letrasMinusculas[] = "abcdefghijklmnopqrstuvwxyz";
    const char letrasMaiusculas[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char numeros[] = "0123456789";
    const char caracteresEspeciais[] = "!@#$%^&*()-_=+[]{}|;:,.<>?/";

    int i, pos;
    char conjunto[100];

    // Garante a inclusão de pelo menos um caractere de cada tipo
    senha[0] = letrasMinusculas[rand() % strlen(letrasMinusculas)];
    senha[1] = letrasMaiusculas[rand() % strlen(letrasMaiusculas)];
    senha[2] = numeros[rand() % strlen(numeros)];
    senha[3] = caracteresEspeciais[rand() % strlen(caracteresEspeciais)];

    // Preenche o restante da senha com caracteres aleatórios de todos os tipos
    strcpy(conjunto, letrasMinusculas);
    strcat(conjunto, letrasMaiusculas);
    strcat(conjunto, numeros);
    strcat(conjunto, caracteresEspeciais);

    for (i = 4; i < tamanho; i++) {
        pos = rand() % strlen(conjunto);
        senha[i] = conjunto[pos];
    }

    senha[tamanho] = '\0'; // Finaliza a string
}

int validarSenha(char senha[]) {
    int temMinuscula = 0, temMaiuscula = 0, temNumero = 0, temEspecial = 0;

    for (int i = 0; senha[i] != '\0'; i++) {
        if (islower(senha[i])) temMinuscula = 1;
        else if (isupper(senha[i])) temMaiuscula = 1;
        else if (isdigit(senha[i])) temNumero = 1;
        else temEspecial = 1; // Considera qualquer outro caractere como especial
    }

    // Retorna 1 se todos os critérios forem atendidos, caso contrário 0
    return temMinuscula && temMaiuscula && temNumero && temEspecial;
}

