//Escreva uma fun��o recursiva que calcule a soma dos d�gitos de um n�mero inteiro.
//Por exemplo, se a entrada for 123, a sa�da dever� ser 1+2+3 = 6.

#include <stdio.h>

int somaDigitos(int numero) {
    if (numero == 0) {
        return 0; // Caso base: soma de 0 � 0
    } else {
        return numero % 10 + somaDigitos(numero / 10);
    }
}

int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    int resultado = somaDigitos(num);
    printf("A soma dos digitos de %d e: %d\n", num, resultado);

    return 0;
}
