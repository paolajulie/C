//O restaurante a quilo Bem-B�o cobra R$12,00 por cada quilo de refei��o. Escreva um algoritmo que leia o
//peso do prato montado pelo cliente (em quilos) e imprima o valor a pagar. Assuma que a balan�a j� desconte
//o peso do prato.

#include<stdio.h>
#include<stdlib.h>

int main () {
    float peso, valor;
    printf("Digite o peso da sua refeicao:\n");
    scanf("%f", &peso);
    valor = peso*12;
    printf("o valor do seu prato e %.2f", valor);



}
