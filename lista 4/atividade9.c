//Leia um vetor de 20 posições e em seguida um valor X qualquer. Seu programa deverá fazer uma
//busca do valor de X no vetor lido e informar a posição em que foi encontrado ou se não foi encontrado

#include <stdio.h>

int main() {
    int vetor[20];
    int i, valorX, posicao = -1;


    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < 20; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }


    printf("Digite o valor a ser buscado (X): ");
    scanf("%d", &valorX);


    for (i = 0; i < 20; i++) {
        if (vetor[i] == valorX) {
            posicao = i;
            break;
        }
    }


    if (posicao != -1) {
        printf("O valor %d foi encontrado na posicao %d.\n", valorX, posicao);
    } else {
        printf("O valor %d nao foi encontrado no vetor.\n", valorX);
    }

    return 0;
}
