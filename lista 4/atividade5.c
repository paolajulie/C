//Criar um vetor A com 10 elementos inteiros. Escrever um programa que calcule e escreva:
//a. a soma de elementos armazenados neste vetor que são inferiores a 15;
//b. a quantidade de elementos armazenados no vetor que são iguais a 15;
//c. a média dos elementos armazenados no vetor que são superiores a 15.

#include <stdio.h>

int main() {
    int vetor[10];
    int menorIdade, maiorIdade;
    int posicaoMenorIdade, posicaoMaiorIdade;

    printf("Digite as idades das pessoas:\n");
    for (int i = 0; i < 10; i++) {
        printf("Pessoa %d: ", i + 1);
        scanf("%d", &vetor[i]);

        if (i == 0) {
            menorIdade = vetor[i];
            maiorIdade = vetor[i];
            posicaoMenorIdade = i;
            posicaoMaiorIdade = i;
        } else {
            if (vetor[i] < menorIdade) {
                menorIdade = vetor[i];
                posicaoMenorIdade = i;
            }
            if (vetor[i] > maiorIdade) {
                maiorIdade = vetor[i];
                posicaoMaiorIdade = i;
            }
        }
    }

    printf("\nMenor idade: %d\n", menorIdade);
    printf("Posição da menor idade: %d\n", posicaoMenorIdade);

    printf("\nMaior idade: %d\n", maiorIdade);
    printf("Posição da maior idade: %d\n", posicaoMaiorIdade);

    return 0;
}
