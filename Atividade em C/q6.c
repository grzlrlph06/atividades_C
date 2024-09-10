#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");
    float salarioHora, totalSalario, horasTrabalhadas;

    printf ("Insira seu salário por hora: ");
    scanf ("%f", &salarioHora);
    printf ("\nAgora digite quantas horas voce trabalhou este mês: ");
    scanf ("%f", &horasTrabalhadas);

    totalSalario = salarioHora*horasTrabalhadas;

    printf ("Seu salário este mês é de %0.2f", totalSalario);

    return 0;

}