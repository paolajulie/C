//Faça um algoritmo que leia uma variável e some 5 caso seja par ou some 8 caso seja ímpar, imprimir o resultado desta operação.

#include <stdio.h>
#include<stdlib.h>

int main() {
    int numero;
    int resultado;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        resultado = numero + 5;
    } else {
        resultado = numero + 8;
    }

    printf("Resultado: %d\n", resultado);

    return 0;
}
