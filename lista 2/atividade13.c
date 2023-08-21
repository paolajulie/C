//Escrever um algoritmo que leia um valor em reais e calcule qual o menor número possível de notas de
//100, 50, 10, 5 e 1 em que o valor lido pode ser decomposto. Escrever o valor lido e a relação de notas necessárias

#include<stdio.h>
#include<stdlib.h>

int main() {
    int valor;

    printf("Digite um valor em reais: ");
    scanf("%d", &valor);

    int notas100 = valor / 100;
    valor %= 100;

    int notas50 = valor / 50;
    valor %= 50;

    int notas10 = valor / 10;
    valor %= 10;

     int notas5 = valor / 5;
    valor %= 5;

    int notas1 = valor;

    printf("Notas de 100: %d\n", notas100);
    printf("Notas de 50: %d\n", notas50);
    printf("Notas de 10: %d\n", notas10);
    printf("Notas de 5: %d\n", notas5);
    printf("Notas de 1: %d\n", notas1);

    return 0;
}
