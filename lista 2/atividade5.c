//Fa�a um algoritmo que leia uma vari�vel e some 5 caso seja par ou some 8 caso seja �mpar, imprimir o resultado desta opera��o.

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
