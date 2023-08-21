//Leia 3 vetores de 9 posições e crie outro com o 1º terço do primeiro, o segundo 3º. do segundo e o ultimo terço do 3º.
//Escrever o vetor resultante ao final.


#include <stdio.h>

int main() {
    int vetor1[9], vetor2[9], vetor3[9], vetorResultado[9];
    int i;


    printf("Digite os elementos do primeiro vetor:\n");
    for (i = 0; i < 9; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os elementos do segundo vetor:\n");
    for (i = 0; i < 9; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    printf("Digite os elementos do terceiro vetor:\n");
    for (i = 0; i < 9; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor3[i]);
    }


    for (i = 0; i < 3; i++) {
        vetorResultado[i] = vetor1[i];
    }

    for (i = 3; i < 6; i++) {
        vetorResultado[i] = vetor2[i];
    }

    for (i = 6; i < 9; i++) {
        vetorResultado[i] = vetor3[i];
    }


    printf("Vetor resultante:\n");
    for (i = 0; i < 9; i++) {
        printf("%d ", vetorResultado[i]);
    }
    printf("\n");

    return 0;
}
