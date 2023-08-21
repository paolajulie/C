//Faça um jogo de pedra papel tesoura, usuário contra computador!

#include<stdio.h>
#include<stdlib.h>
#include <time.h>
main () {
 int pedra, papel, tesoura, jogador, x;

 srand((unsigned)time(NULL));
x = 1 + ( rand() % 3 );

 printf("Bem vindo ao jogo pedra, papel, tesoura. \n") ;
 printf("Escolha uma opcao entre 1 e 3, sendo pedra(1), papel(2), tesoura(3) \n");
 printf("VOCE: ");
 scanf("%d", &jogador);
 printf("COMPUTADOR: ");


 if (x==1) {
    printf("pedra (1)");
 } else if(x==2) {
    printf("papel (2)");
 } else{
    printf("tesoura (3)");
 }


 if (jogador == x) {
            printf(" \n Empate!\n");
        } else if (jogador == 1 && x == 3){
            printf(" \n Voce venceu!\n");
        } else if (jogador == 2 && x == 1) {
            printf(" \n Voce venceu!\n");
        } else if (jogador == 3 && x == 2) {
            printf (" \n Voce venceu!\n");
        } else {
            printf("\n Voce perdeu!\n");
        }




}
