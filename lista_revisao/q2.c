#include <stdio.h>
#include <stdlib.h>

/*2. Somat�rio de Fatoriais
Escreva um programa em C que calcule a soma
dos fatoriais dos n�meros inteiros entre dois valores fornecidos
pelo usu�rio, inclusive.
Por exemplo, se o usu�rio informar 3 e 5, o programa deve calcular 3! + 4! + 5!.*/

int main()
{
    int n1, n2, i, j, nfat=1, somafat=0;

    printf("Digite dois valores inteiros em um intervalo:");
    scanf("%d%d", &n1, &n2);

    for (i=n1; i<=n2; i++){
            nfat = 1;
            for (j=i; j>=1; j--){
                nfat = nfat*j;
            }
            somafat = nfat + somafat;
            }
    printf("Soma dos fatoriais entre %d e %d: %d", n1, n2, somafat);

    return 0;
}
