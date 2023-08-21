//Leia a idade de 20 pessoas e exiba quantas pessoas são maiores de idade.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade, maioresDeIdade = 0;

    printf("Digite a idade de 20 pessoas:\n");

    for (int i = 0; i < 20; i++) {
        printf("Pessoa %d: ", i + 1);
        scanf("%d", &idade);

        if (idade >= 18) {
            maioresDeIdade++;
        }
    }

    printf("Quantidade de pessoas maiores de idade: %d\n", maioresDeIdade);

    return 0;
}
