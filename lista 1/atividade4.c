//Escreva um algoritmo para ler o nome e a idade de uma pessoa, e exibir quantos dias de vida ela possui.
//Considere sempre anos completos, e que um ano possui 365 dias. Ex: uma pessoa com 19 anos possui
//6935 dias de vida; veja um exemplo de saída: MARIA, VOCÊ JÁ VIVEU 6935 DIAS

#include<stdio.h>
#include<stdlib.h>

int main () {
    int idade, vida;
    char nome[50];
    printf("Digite o seu nome:\n");
    scanf("%s", nome);
    printf("Digite sua idade:\n");
    scanf("%d", &idade);
    vida = idade*365;
    printf("%s voce ja viveu %d dias", nome,vida);



}
