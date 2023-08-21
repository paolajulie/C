//Multiplicação Russa

#include <stdio.h>

int soma = 0;

int multiplication(int x, int y) {
    int z = 0;
    if (x == 0) {
        printf("Soma Global = ");
        return soma;
    } else {
        if (x % 2 != 0) {
            z = y;
            soma += y;
        }
        printf("%d %d %d \n", x, y, z);
        return multiplication(x / 2, y * 2);
    }
}

int main() {
    int valueA;
    int valueB;
    printf("Multiplicacao a Moda Russa! \n");
    printf("Digite o valor de A: \n");
    scanf("%d", &valueA);
    printf("Digite o valor de B: \n");
    scanf("%d", &valueB);
    printf("O resultado da Multiplicacao a Moda Russa e: \n");
    printf("Passo a passo: \n");
    printf("%d", multiplication(valueA, valueB));
    return 0;
}
