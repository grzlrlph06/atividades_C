#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num, i, produto;

    printf("Digite qual numero deseja saber a tabuada:");
    scanf("%d", &num);

    for (i=1; i<10; i++){
        produto = num*i;
        printf("\n%d * %d = %d", num, i, produto);
    }
    return 0;
}
