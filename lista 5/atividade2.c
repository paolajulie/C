//Implemente uma função recursiva que, dados dois números inteiros x e n, calcula o valor de xn

#include <stdio.h>

int potencia(int x, int n) {
    if (n == 0) {
        return 1;
    } else {
        return x * potencia(x, n - 1);
    }
}

int main() {
    int x, n;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int resultado = potencia(x, n);
    printf("%d elevado a %d eh %d\n", x, n, resultado);

    return 0;
}
