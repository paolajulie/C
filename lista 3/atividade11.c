// Escreva um algoritmo que leia 20 números do usuário e exiba quantos números são maiores do que 8

#include <stdio.h>
#include <stdlib.h>


main(){
  int contador, num, cont;
  contador=0;
  num=0;
  cont=0;

  while(contador<20){
    printf("insira um numero inteiro: \n");
    scanf("%d",&num);
    contador=contador+1;
    if (num>8){
            cont=cont+1;
 }

  }
  printf("A quantidade de numeros maiores que 8 sao: %d",cont);

}
