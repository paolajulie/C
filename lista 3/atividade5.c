//Escreva um algoritmo que leia 10 números do usuário e calcule a soma desses números

#include <stdio.h>
#include <stdlib.h>


int main() {
    int numeros[10];
    int soma = 0;

    printf("Digite 10 numeros:\n");


    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }


    for (int i = 0; i < 10; i++) {
        soma = soma + (numeros + i);

    }

    printf("A soma dos numeros e: %d\n", soma);

    return 0;
}
