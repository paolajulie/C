//Faça um algoritmo para ler três notas de um aluno em uma disciplina e imprimir a sua média ponderada(as notas tem pesos respectivos de 1, 2 e 3).

#include<stdio.h>
#include<stdlib.h>

int main () {
    float nota1, nota2, nota3, notafinal;
    printf("Digite a sua primeira nota:\n");
    scanf("%f", &nota1);
    printf("Digite a sua segunda nota:\n");
    scanf("%f", &nota2);
    printf("Digite a sua terceira nota:\n");
    scanf("%f", &nota3);

    notafinal = (nota1+ nota2*2 + nota3*3)/6;
    printf("a sua  media poderada e %.1f", notafinal);



}
