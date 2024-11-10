/*3. Faça uma função que dados dois inteiros positivos x e y verifica 
se y corresponde aos últimos dígitos de x. 
Ex. x= 567890, y=890 R/corresponde; 
      x= 2457, y= 245 R/não corresponde; 
      x= 457, y= 2457 R/não corresponde*/

#include <stdio.h>

int verificaUltimosDigitos(int x, int y);

int main() {
    int x = 0, y = 1;

    
    while (x <= y) {
        printf("Insira dois valores x, y tal que x > y: ");
        scanf("%d%d", &x, &y);
        if (x <= y) {
            printf("Valor invalido. Tente novamente!\n");
        }
    }

    if (verificaUltimosDigitos(x, y)) {
        printf("corresponde\n");
    } else {
        printf("nao corresponde\n");
    }

    return 0;
}

int verificaUltimosDigitos(int x, int y) {
    int temp = y;
    int num_digitos = 1;

   
    while (temp > 0) {
        temp /= 10;
        num_digitos *= 10;
    }

    
    if (x % num_digitos == y) {
        return 1; 
    } else {
        return 0; 
    }
}
