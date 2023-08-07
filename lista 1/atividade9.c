//Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma sendo vendida respectivamente por 10, 12 e 15 reais.
//Construa um algoritmo em que o usuário forneça a quantidade de camisetas pequenas, médias e grandes referentes a uma venda, e a máquina informe quanto será o valor arrecadado.

#include<stdio.h>
#include<stdlib.h>

int main () {
    int grande, media, pequena, valor;
    printf("Digite quantas camisetas grandes gostaria de adquirir:\n");
    scanf("%d", &grande);
    printf("Digite quantas camisetas medias gostaria de adquirir:\n");
    scanf("%d", &media);
    printf("Digite quantas camisetas pequenas gostaria de adquirir:\n");
    scanf("%d", &pequena);
    valor = grande*15 + media*12 + +pequena*10;

    printf("O valor arrecadado sera : %d", valor);



}
