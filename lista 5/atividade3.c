//Usando recursividade, calcule a soma de todos os valores de um vetor de tamanho definido pelo usuário de reais.

#include <stdio.h>

int somaVetor(int vetor[], int tamanho) {
    if (tamanho == 0) {
        return 0;
    } else {
        return vetor[tamanho - 1] + somaVetor(vetor, tamanho - 1);
    }
}

int main() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0) {
        printf("Tamanho do vetor deve ser positivo.\n");
        return 1;

    }

    int vetor[tamanho];
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int resultado = somaVetor(vetor, tamanho);
    printf("A soma dos elementos do vetor e: %d\n", resultado);

    return 0;
}
