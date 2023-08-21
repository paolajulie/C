//Escreva um programa que leia dois vetores de 10 posições e faça a soma dos elementos de mesmo índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante.

#include <stdio.h>
#include <stdlib.h>


int main() {
    int vetor1[10], vetor2[10], vetorResultado[10];

    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    printf("\nDigite os elementos do segundo vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    for (int i = 0; i < 10; i++) {
        vetorResultado[i] = vetor1[i] + vetor2[i];
    }

    printf("\nVetor resultante da soma:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetorResultado[i]);
    }

    return 0;
}
