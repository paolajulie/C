//Escreva um algoritmo que leia 20 números do usuário e exiba quantos números são pares

#include <stdio.h>
#include <stdlib.h>


main(){
  int contador, num, cont, resto;
  contador=0;
  num=0;
  cont=0;

  while(contador<5){
    printf("insira um numero inteiro: \n");
    scanf("%d",&num);
    contador=contador+1;
    resto=num % 2;
    if (resto==0){
            cont=cont+1;
 }

  }
  printf("A quantidade de numeros pares sao: %d",cont);

}
