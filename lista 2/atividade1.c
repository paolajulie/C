//Faça um algoritmo que leia dois valores A e B e imprima o maior deles

#include<stdio.h>
#include<stdlib.h>

int main (){
    int valor1, valor2;
    printf("Digite o primeiro valor ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor ");
    scanf("%d", &valor2);

    if ( valor1 > valor2) {
        printf("%d", valor1);
    } else {
    printf("%d", valor2);
    }


    return 0;
}
