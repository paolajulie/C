//Reescreva o algoritmo anterior para escrever a mensagem o n�mero de vezes informado pelo usu�rio.

#include <stdio.h>
#include <stdlib.h>

main(){
  int contador, numero;
  printf("Quantas vezes deseja exibir a mensagem? ");
  scanf("%d",&numero);
  contador=0;
  printf("%d",numero);

  while(contador< numero){
        contador=contador+1;
        printf("esta e a mensagem %d \n",contador);


  }




 }
