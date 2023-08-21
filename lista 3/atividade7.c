//Leia a idade de 20 pessoas e exiba a média das idades.

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
    //(float)soma , ele está tornando a variavel de int para float temporariamente

    float media = (float)soma / 20;

    printf("A media das idades e: %.2f\n", media);

    return 0;
}
