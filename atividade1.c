//A imobili�ria Im�bilis vende apenas terrenos retangulares.
//Fa�a um algoritmo para ler as dimens�es de um terreno e depois exibir a �rea do terreno.

#include<stdio.h>
#include<stdlib.h>

int main () {
    float largura, comprimento, area;
    printf("Digite a largura do lote:\n");
    scanf("%f", &largura);
    printf("Digite o comprimento do lote do lote:\n");
    scanf("%f", &comprimento);
    area = largura*comprimento;
    printf("a area do lote =%.1f", area);



}
