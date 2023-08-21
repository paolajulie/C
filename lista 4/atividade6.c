//Ler um vetor A com 10 elementos inteiros correspondentes às idades de um grupo de pessoas.
//Escreva um programa que determine e escreva a menor e a maior idades e suas respectivas posições

#include <stdio.h>

int main() {
    int vetor[10];
    int i, menorIdade, maiorIdade, posicaoMenor, posicaoMaior;


    printf("Digite as idades das 10 pessoas:\n");
    for (i = 0; i < 10; i++) {
        printf("Idade %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }


    menorIdade = vetor[0];
    maiorIdade = vetor[0];
    posicaoMenor = 0;
    posicaoMaior = 0;


    for (i = 1; i < 10; i++) {
        if (vetor[i] < menorIdade) {
            menorIdade = vetor[i];
            posicaoMenor = i;
        }
        if (vetor[i] > maiorIdade) {
            maiorIdade = vetor[i];
            posicaoMaior = i;
        }
    }


    printf("Menor idade: %d (posicao %d)\n", menorIdade, posicaoMenor);
    printf("Maior idade: %d (posicao %d)\n", maiorIdade, posicaoMaior);

    return 0;
}
