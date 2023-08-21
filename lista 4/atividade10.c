//Leia um vetor de 40 posições. Contar e escrever quantos valores pares ele possui.

#include <stdio.h>

int main() {
    int vetor[40];
    int i, countPares = 0;


    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < 40; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }


    for (i = 0; i < 40; i++) {
        if (vetor[i] % 2 == 0) {
            countPares++;
        }
    }


    printf("O vetor possui %d valor(es) par(es).\n", countPares);

    return 0;
}
