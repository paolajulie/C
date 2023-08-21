//Leia o nome do usuário e escreva o nome dele na tela 10 vezes.

#include <stdio.h>
#include <stdlib.h>

main(){
    char nome [50];
    int contador;

    printf("digite um nome: ");
    scanf("%s", &nome);
    contador=0;
    while(contador<20){
        printf(" \n%s",nome);
        contador=contador+1;

    }
}
