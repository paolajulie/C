//Declare um vetor de 10 posições e o preencha com os 10 primeiros números impares e o escreva.

#include <stdio.h>

int main() {
    int vetor[10];
    int i, numeroImpar = 1;


    for (i = 0; i < 10; i++) {
        vetor[i] = numeroImpar;
        numeroImpar += 2;
    }


    printf("Elementos do vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
