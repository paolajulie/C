//Faça um algoritmo para receber um número qualquer e informar na tela se é par ou ímpar

#include<stdio.h>
#include<stdlib.h>

int main (){
    int numero;
    printf("Digite um numero inteiro ");
    scanf("%d", &numero);
    if (numero%2 == 0 ){
        printf("esse e um numero par");
    } else {
        printf("e um numero impar");
    }


 return 0;
}
