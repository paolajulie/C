//Crie um programa que leia um vetor de 20 posições e informe:
//a. Quantos números pares existem no vetor
//b. Quantos números ímpares existem no vetor
//c. Quantos números maiores do que 50
//d. Quantos números menores do que 7

#include <stdio.h>

int main() {
    int vetor[20];
    int qtdPares = 0, qtdImpares = 0, qtdMaiores50 = 0, qtdMenores7 = 0;

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < 20; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0) {
            qtdPares++;
        } else {
            qtdImpares++;
        }

        if (vetor[i] > 50) {
            qtdMaiores50++;
        }

        if (vetor[i] < 7) {
            qtdMenores7++;
        }
    }

    printf("\nResultados:\n");
    printf("Quantidade de numeros pares: %d\n", qtdPares);
    printf("Quantidade de numeros impares: %d\n", qtdImpares);
    printf("Quantidade de numeros maiores que 50: %d\n", qtdMaiores50);
    printf("Quantidade de numeros menores que 7: %d\n", qtdMenores7);

    return 0;
}
