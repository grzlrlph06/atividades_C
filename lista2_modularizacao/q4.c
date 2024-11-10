#include <stdio.h>

int verificaUltimosDigitos(int x, int y);
int ehSegmento(int x, int y);

int main() {
    int x, y;

    printf("Insira dois valores x, y tal que x < y: ");
    scanf("%d%d", &x, &y);

    
    if (x >= y) {
        printf("Valor invalido. x deve ser menor que y.\n");
        return 1;
    }

    if (ehSegmento(x, y)) {
        printf("e um segmento\n");
    } else {
        printf("nao e um segmento\n");
    }

    return 0;
}

int verificaUltimosDigitos(int x, int y) {
    int temp = x;
    int num_digitos = 1;

    
    while (temp > 0) {
        temp /= 10;
        num_digitos *= 10;
    }

    
    if (y % num_digitos == x) {
        return 1; 
    } else {
        return 0; 
    }
}

int ehSegmento(int x, int y) {
    int temp_y = y;

   
    while (temp_y > 0) {
        
        if (verificaUltimosDigitos(x, temp_y)) {
            return 1;
        }
        
        temp_y /= 10;
    }
    return 0; 
}
