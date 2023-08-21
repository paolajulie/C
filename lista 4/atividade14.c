//Leia um vetor de 10 posições e verifique se existem valores iguais e os escreva

#include <stdio.h>

int main() {
    int vetor[10];
    int i, j;


    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }


    printf("Valores iguais encontrados:\n");
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                printf("%d\n", vetor[i]);
            }
        }
    }

    return 0;
}
