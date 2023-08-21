//Leia a idade de 20 pessoas e exiba a soma das idades.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade, soma = 0;

    printf("Digite a idade de 20 pessoas:\n");

    for (int i = 0; i < 20; i++) {
        printf("Pessoa %d: ", i + 1);
        scanf("%d", &idade);
        soma += idade;
    }

    printf("A soma das idades e: %d\n", soma);

    return 0;
}
