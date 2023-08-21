//A multiplicação de dois números inteiros pode ser feita através de somas sucessivas.
//Proponha um algoritmo recursivo Multip_Rec(n1,n2) que calcule a multiplicação de dois inteiros.

#include <stdio.h>

int multipRec(int n1, int n2) {

    if (n1 == 0 || n2 == 0) {
        return 0;
    }


    return n1 + multipRec(n1, n2 - 1);
}

int main() {
    int num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    int resultado = multipRec(num1, num2);
    printf("O resultado da multiplicacaoo e: %d\n", resultado);

    return 0;
}
